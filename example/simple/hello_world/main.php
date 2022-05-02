<?php

require __DIR__ . '/../../../vendor/autoload.php';

$w = new \PGtk\Gtk\Gtk\Window();

$w->setDefaultSize(600, 600);
$w->setTitle('Hello world');

$w->widget->show();


$run = true;
$w->widget->GObject->connect('destroy', function () use (&$run) {
    $run = false;
});
while ($run) {
    \PGtk\Gtk\GLib\MainContext::iteration(true);
}


