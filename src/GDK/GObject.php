<?php

namespace PGtk\Gtk\GDK;

use PGtk\Gtk\Gtk;
use FFI\CData;

/**
 * @method mainContextIteration(): bool
 */
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

    public function connect(
        string $detailed_signal,
        callable $c_handler
    ): int {
        return (int) Gtk::getFFI()->g_signal_connect_data(
            Gtk::getFFI()->cast('GObject*', $this->GObject),
            $detailed_signal,
            $c_handler,
            null,
            null,
            null
        );
    }
}
