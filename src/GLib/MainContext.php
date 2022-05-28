<?php

namespace PGtk\Gtk\GLib;

use PGtk\Gtk\Gtk;

/**
 * @method static iteration(bool $mayBlock): bool
 */
class MainContext
{
    public static function __callStatic(string $name, array $arguments)
    {
        $functionName = 'g_main_context_' . strtolower(preg_replace('~([A-Z])~', '_$1', $name));

        return Gtk::getFFI()->$functionName(null, ...$arguments);
    }
}
