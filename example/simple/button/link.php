<?php

use PGtk\Gtk\Gtk\LinkButton;

require __DIR__ . "/../../../vendor/autoload.php";

$w = new \PGtk\Gtk\Gtk\Window();

$link = new LinkButton('https://google.com');

$w->setChild($link);
$w->widget->show();


$run = true;
$m = new \PGtk\Gtk\GLib\MainLoop();
$w->connect('destroy', function ($w, $m) use (&$run) {
    $m->quit();
}, $m);
$m->run();
