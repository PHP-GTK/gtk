<?php

use PGtk\Gtk\Gtk\Image;

require __DIR__ . "/../../../vendor/autoload.php";

$w = new \PGtk\Gtk\Gtk\Window();

$link = new Image(__DIR__ . '/158776.png');
var_dump($link->getPixelSize());
$link->setPixelSize(500);
var_dump($link->getPixelSize());
var_dump($link->getIconName());
$w->setChild($link);
$w->widget->show();


$run = true;
$m = new \PGtk\Gtk\GLib\MainLoop();
$w->connect('destroy', function ($w, $m) use (&$run) {
    $m->quit();
}, $m);
$m->run();
