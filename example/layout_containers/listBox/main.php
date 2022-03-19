<?php

require __DIR__ . '/../../../vendor/autoload.php';
\PGtk\Gtk\Gtk::getInstance(__DIR__ . '/../../../libs/_build/gtk/libgtk-4.so');

require_once __DIR__ . '/ListBoxRowWithData.php';
require_once __DIR__ . '/ListBoxWindow.php';

$w = new ListBoxWindow();

$w->run();