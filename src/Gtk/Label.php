<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class Label
{
    public readonly CData $label;
    public readonly Widget $widget;

    public function __construct(string $label)
    {
        $this->label = Gtk::getFFI()->gtk_label_new($label);
        $this->widget = new Widget($this->label);
    }
}
