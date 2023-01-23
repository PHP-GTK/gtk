<?php

declare(strict_types=1);

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

class Entry extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_entry_';
    protected string $cast = 'GtkEntry';

    public function __construct(
        protected ?EntryBuffer $buffer = null
    )
    {
        if ($this->buffer === null) {
            $entry = Gtk::getFFI()->gtk_entry_new();
        } else {
            $entry = Gtk::getFFI()->gtk_entry_new_with_buffer(
                Gtk::getFFI()->cast("GtkEntryBuffer*", $this->buffer->getWidget()->widget)
            );
        }
        parent::__construct(new Widget($entry));
    }

    public function setBuffer(EntryBuffer $buffer)
    {
        Gtk::getFFI()->gtk_entry_set_buffer(
            Gtk::getFFI()->cast($this->cast . ' *', $this->widget->widget),
            Gtk::getFFI()->cast("GtkEntryBuffer*", $buffer->getWidget()->widget)
        );

        $this->buffer = $buffer;
    }

    public function getBuffer(): ?EntryBuffer
    {
        return $this->buffer;
    }
}

