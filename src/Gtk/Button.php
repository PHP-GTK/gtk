<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;
use FFI\CData;

class Button
{
    public readonly CData $button;
    public readonly Widget $widget;

    public function __construct(string $label = null)
    {
        if ($label === null) {
            $this->button = Gtk::getFFI()->gtk_button_new();
        }else{
            $this->button = Gtk::getFFI()->gtk_button_new_with_label($label);
        }
        $this->widget = new Widget($this->button);
    }
}
