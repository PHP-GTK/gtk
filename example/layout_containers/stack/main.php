<?php

require __DIR__ . '/../../../vendor/autoload.php';

require_once __DIR__ . '/StackWindow.php';

$w = new StackWindow();
$w->widget->show();
while (true) {
    \PGtk\Gtk\GLib\MainContext::iteration(true);
}
