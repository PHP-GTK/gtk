<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;
use FFI\CData;

class Breaker extends AbstractWidget
{
    protected string $cast = 'GtkSwitch';
    protected string $prefFunctionName = 'gtk_switch_';

    public function __construct()
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_switch_new()));
    }
}
