<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

/**
 * @method getText(): string
 * @method deleteText(int $position, int $numChars): int
 */
class EntryBuffer extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_entry_buffer_';
    protected string $cast = 'GtkEntryBuffer';

    public function __construct(?string $char = null)
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_entry_buffer_new($char, strlen($char))));
    }
}
