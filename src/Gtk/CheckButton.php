<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class CheckButton
{
    public readonly CData $checkButton;
    public readonly Widget $widget;

    public function __construct()
    {
        $this->checkButton = Gtk::getFFI()->gtk_check_button_new();
        $this->widget = new Widget($this->checkButton);
    }
}
