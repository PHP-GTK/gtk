<?php

require __DIR__ . '/../../../vendor/autoload.php';
\PGtk\Gtk\Gtk::getInstance(__DIR__ . '/../../../libs/_build/gtk/libgtk-4.so');

require_once __DIR__ . '/HeaderBarWindow.php';

$w = new HeaderBarWindow();

$w->run();
