<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

class ButtonIcon extends AbstractWidget
{
    protected string $cast = 'GtkButton';
    protected string $prefFunctionName = 'gtk_button_';

    public function __construct(string $name)
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_button_new_from_icon_name($name)));
    }
}
