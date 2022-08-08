<?php

require __DIR__ . '/../../../vendor/autoload.php';

$w = new \PGtk\Gtk\Gtk\Window();

$w->setDefaultSize(600, 600);
$w->setTitle('Hello world');

$text = new \PGtk\Gtk\Gtk\Text();
$text->getWidget()->setSizeRequest(100, 100);
$w->setChild($text);
$w->widget->show();


$run = true;
$m = new \PGtk\Gtk\GLib\MainLoop();
$w->connect('destroy', function ($w, $m) use (&$run) {
    $m->quit();
}, $m);
$m->run();
//while ($run) {
//    \PGtk\Gtk\GLib\MainContext::iteration(true);
//}


