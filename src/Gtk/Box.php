<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class Box extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_box_';
    protected string $cast = 'GtkBox';

    public function __construct(Gtk\Enum\Orientation $orientation, int $spacing)
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_box_new($orientation->value, $spacing)));
    }

    public function append(WidgetInterface $widget): void
    {
        Gtk::getFFI()->gtk_box_append(
            Gtk::getFFI()->cast($this->cast . ' *', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget *', $widget->getWidget()->widget)
        );
    }
}
