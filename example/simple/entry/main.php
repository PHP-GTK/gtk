<?php

declare(strict_types=1);

require __DIR__ . "/../../../vendor/autoload.php";

require_once __DIR__ . '/Application.php';

\PGtk\Gtk\Gtk::getInstance(new \PGtk\Gtk\Configuration());

$app = new Application();

$app->run();
