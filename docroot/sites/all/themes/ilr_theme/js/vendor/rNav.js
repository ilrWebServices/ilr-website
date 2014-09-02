function rNav(nav) {
    RNav.init(nav)
}(function(nav, $) {
    var n;
    var r;
    nav.buildMenu = function(i) {
        if (!$("#rNav-trigger").length) {
            $("#rNav-wrap").append('<div id="rNav-trigger">Menu</div>');
            $("#rNav").find("ul").each(function() {
                $(this).addClass("rNav-hide").prepend('<li class="rNav-back"><a href="#">' + i + "</a></li>")
            });
            $("#rNav").find("li:has(a+ul)").each(function() {
                $(this).children("a").addClass("rNav-parent") //.text('<span>' + $(this).text() + '</span>')
            });
            r = $("#rNav");
            n = r.clone();
            n.find("ul").remove();
            $("#rNav").parent().append(n);
            // $("#rNav-trigger").on("click", function() {
            $(".jpanel-trigger").on("click", function() {
                nav.toggle()
            });
            $("#rNav").parent().on("click", "a", function() {
                var i = n.children("li").index($(this).parent("li"));
                if (r.children("li").eq(i).children("ul").length) {
                    nav.nextNode(i)
                } else if ($(this).parent("li").hasClass("rNav-back")) {
                    nav.prevNode()
                } else {
                    window.location = $(this).attr("href");
                    nav.toggle()
                }
                return false
            })
            $("#rNav").parent().on("click", "a span", function() {
                return true;
            })
        }
    };
    nav.nextNode = function(e) {
        thisNode = n.clone();
        r = r.children("li").eq(e).children("ul");
        nextNode = r.clone().removeClass("rNav-hide");
        thisNode.addClass("rNav rNav-trans").css("width", "100%");
        nextNode.addClass("rNav rNav-trans").css("width", "0%").css("marginLeft", "100%").find("ul").remove();
        $("#rNav").parent().append(thisNode, nextNode);
        $(n).hide();
        nextNode.animate({
            width: "100%",
            marginLeft: "0%"
        }, function() {
            $(n).html(r.children("li").clone()).show().find("ul").remove();
            $(this).remove()
        });
        thisNode.animate({
            width: "0%"
        }, function() {
            $(this).remove()
        })
    };
    nav.prevNode = function() {
        thisNode = n.clone();
        r = r.end().end().end();
        prevNode = r.clone().removeClass("rNav-hide").show();
        prevNode.addClass("rNav rNav-trans").css("width", "0%").find("ul").remove();
        thisNode.addClass("rNav rNav-trans").css("width", "100%").find("ul").remove();
        $("#rNav").parent().append(prevNode, thisNode);
        $(n).hide();
        prevNode.animate({
            width: "100%"
        }, function() {
            $(n).html(r.children("li").clone()).show().find("ul").remove();
            $(this).remove()
        });
        thisNode.animate({
            width: "0%",
            marginLeft: "100%"
        }, function() {
            $(this).remove()
        })
    };
    nav.removeMenu = function() {
        if ($("#rNav-trigger").length) {
            $("#rNav-trigger").remove();
            $("#rNav").parent().off();
            $("#rNav").find("li.rNav-back").each(function() {
                $(this).remove()
            });
            n.remove()
        }
        $("#rNav").show()
    };
    nav.mediaQuery = function(e) {
        do {
            var n = "x" + Math.round(Math.random() * 100)
        } while ($("#" + n).length);
        var r = $("<style>@media " + e + " { #" + n + " { display:none !important; } }</style>").appendTo("body");
        var i = $("<div/>", {
            id: n
        }).appendTo("body");
        var s = "none" == i.css("display");
        r.remove();
        i.remove();
        return s
    };
    nav.toggle = function() {
        n.slideToggle()
    };
    nav.init = function(config) {
        var menuWidth = 1700;
        var backLabel = "Back";
        if (typeof config != "undefined") {
            if (typeof config == "object") {
                if (config.width && !isNaN(parseFloat(config.width, 10))) {
                    menuWidth = config.width
                }
                if (config.label) {
                    backLabel = config.label
                }
            } else {
                if (!isNaN(parseFloat(config, 10))) {
                    menuWidth = config
                }
            }
        }
        $(window).on("resize load", function() {
            if (true || nav.mediaQuery("screen and (max-width: " + menuWidth + "px)")) {
                nav.buildMenu(backLabel)
            } else {
                nav.removeMenu()
            }
        })
    }
})(window.RNav = window.RNav || {}, jQuery)
