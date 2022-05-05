<?php

namespace PGtk\Gtk\GDK;

use PGtk\Gtk\Gtk;
use FFI\CData;

class GObject
{
    public function __construct(private readonly CData $GObject)
    {
    }

    public function __call(string $name, array $arguments)
    {
        $functionName = 'g_' . strtolower(preg_replace('~([A-Z])~', '_$1', $name));

        return Gtk::getFFI()->$functionName(...$arguments);
    }
}
