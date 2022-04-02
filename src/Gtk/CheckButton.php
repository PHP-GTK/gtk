<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class CheckButton extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_check_button_';
    protected string $cast = 'GtkCheckButton';

    public function __construct(string $label = null)
    {
        if ($label === null) {
            parent::__construct(new Widget(Gtk::getFFI()->gtk_check_button_new()));
        } else {
            parent::__construct(new Widget(Gtk::getFFI()->gtk_check_button_new_with_label($label)));
        }
    }
}
