<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;
use FFI\CData;

class Button extends AbstractWidget
{
    protected string $cast = 'GtkButton';
    protected string $prefFunctionName = 'gtk_button_';

    public function __construct(string $label = null)
    {
        if ($label === null) {
            parent::__construct(new Widget(Gtk::getFFI()->gtk_button_new()));
        }else{
            parent::__construct(new Widget(Gtk::getFFI()->gtk_button_new_with_label($label)));
        }
    }
}
