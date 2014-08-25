function rNav(e) {
    RNav.init(e)
}(function(e, t) {
    var n;
    var r;
    e.buildMenu = function(i) {
        if (!t("#rNav-trigger").length) {
            t("#rNav-wrap").prepend('<div id="rNav-trigger">Menu</div>');
            t("div#rNav-wrap ul.menu").find("ul").each(function() {
                t(this).addClass("rNav-hide").prepend('<li class="rNav-back"><a href="#">' + i + "</a></li>")
            });
            t("div#rNav-wrap ul.menu").find("li:has(a+ul)").each(function() {
                t(this).children("a").addClass("rNav-parent")
            });
            r = t("div#rNav-wrap ul.menu");
            n = r.clone();
            n.find("ul").remove();
            t("div#rNav-wrap ul.menu").parent().append(n);
            t("#rNav-trigger").on("click", function() {
                e.toggle()
            });
            t("div#rNav-wrap ul.menu").parent().on("click", "a", function() {
                var i = n.children("li").index(t(this).parent("li"));
                if (r.children("li").eq(i).children("ul").length) {
                    e.nextNode(i)
                } else if (t(this).parent("li").hasClass("rNav-back")) {
                    e.prevNode()
                } else {
                    window.location = t(this).attr("href");
                    e.toggle()
                }
                return false
            })
        }
    };
    e.nextNode = function(e) {
        thisNode = n.clone();
        r = r.children("li").eq(e).children("ul");
        nextNode = r.clone().removeClass("rNav-hide");
        thisNode.addClass("rNav rNav-trans").css("width", "100%");
        nextNode.addClass("rNav rNav-trans").css("width", "0%").css("marginLeft", "100%").find("ul").remove();
        t("div#rNav-wrap ul.menu").parent().append(thisNode, nextNode);
        t(n).hide();
        nextNode.animate({
            width: "100%",
            marginLeft: "0%"
        }, function() {
            t(n).html(r.children("li").clone()).show().find("ul").remove();
            t(this).remove()
        });
        thisNode.animate({
            width: "0%"
        }, function() {
            t(this).remove()
        })
    };
    e.prevNode = function() {
        thisNode = n.clone();
        r = r.end().end().end();
        prevNode = r.clone().removeClass("rNav-hide").show();
        prevNode.addClass("rNav rNav-trans").css("width", "0%").find("ul").remove();
        thisNode.addClass("rNav rNav-trans").css("width", "100%").find("ul").remove();
        t("div#rNav-wrap ul.menu").parent().append(prevNode, thisNode);
        t(n).hide();
        prevNode.animate({
            width: "100%"
        }, function() {
            t(n).html(r.children("li").clone()).show().find("ul").remove();
            t(this).remove()
        });
        thisNode.animate({
            width: "0%",
            marginLeft: "100%"
        }, function() {
            t(this).remove()
        })
    };
    e.removeMenu = function() {
        if (t("#rNav-trigger").length) {
            t("#rNav-trigger").remove();
            t("div#rNav-wrap ul.menu").parent().off();
            t("div#rNav-wrap ul.menu").find("li.rNav-back").each(function() {
                t(this).remove()
            });
            n.remove()
        }
        t("div#rNav-wrap ul.menu").show()
    };
    e.mediaQuery = function(e) {
        do {
            var n = "x" + Math.round(Math.random() * 100)
        } while (t("#" + n).length);
        var r = t("<style>@media " + e + " { #" + n + " { display:none !important; } }</style>").appendTo("body");
        var i = t("<div/>", {
            id: n
        }).appendTo("body");
        var s = "none" == i.css("display");
        r.remove();
        i.remove();
        return s
    };
    e.toggle = function() {
        n.slideToggle()
    };
    e.init = function(n) {
        var r = 600;
        var i = "Back";
        if (typeof n != "undefined") {
            if (typeof n == "object") {
                if (n.width && !isNaN(parseFloat(n.width, 10))) {
                    r = n.width
                }
                if (n.label) {
                    i = n.label
                }
            } else {
                if (!isNaN(parseFloat(n, 10))) {
                    r = n
                }
            }
        }
        t(window).on("resize load", function() {
            if (e.mediaQuery("screen and (max-width: " + r + "px)")) {
                e.buildMenu(i)
            } else {
                e.removeMenu()
            }
        })
    }
})(window.RNav = window.RNav || {}, jQuery)
