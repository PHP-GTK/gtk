<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class Label extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_label_';
    protected string $cast = 'GtkLabel';

    public function __construct(string $label)
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_label_new($label)));
    }
}
