<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;
use FFI\CData;

class Breaker
{
    public readonly CData $switch;
    public readonly Widget $widget;

    public function __construct()
    {
        $this->switch = Gtk::getFFI()->gtk_switch_new();
        $this->widget = new Widget($this->switch);
    }
}
