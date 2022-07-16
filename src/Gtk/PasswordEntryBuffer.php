<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

class PasswordEntryBuffer extends EntryBuffer
{
    public readonly Widget $widget;

    public function __construct()
    {
        $this->widget = new Widget(Gtk::getFFI()->gtk_password_entry_buffer_new());
    }
}
