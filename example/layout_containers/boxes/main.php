<?php

require __DIR__ . '/../../../vendor/autoload.php';

require_once __DIR__ . '/BoxWindow.php';

$w = new BoxWindow();

timeoutAddSeconds(1, function ($w) {
    var_dump('sdf');
}, $w);
$w->run();
