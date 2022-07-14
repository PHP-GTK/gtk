<?php

declare(strict_types=1);

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

class Entry extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_entry_';
    protected string $cast             = 'GtkEntry';
    private          $buffer;

    public function __construct()
    {
        $entry        = Gtk::getFFI()
                           ->gtk_entry_new();
        $this->buffer = Gtk::getFFI()
                           ->gtk_entry_get_buffer($entry);

        parent::__construct(new Widget($entry));
    }

    /**
     * Returns current text from buffer
     */
    public function getText(): string
    {
        return Gtk::getFFI()
                  ->gtk_entry_buffer_get_text($this->buffer);
    }
}

