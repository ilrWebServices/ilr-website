<?php
/**
 * @file
 * Theme functions for Youtube Playlists module.
 */
function theme_youtube_playlists_embed($variables) {
  $playlist_id = $variables['playlist_id'];
  return "<iframe width=\"853\" height=\"480\" src=\"//www.youtube.com/embed/videoseries?list=$playlist_id\" frameborder=\"0\" allowfullscreen></iframe>";
}