<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class Box
{
    public readonly CData $box;
    public readonly Widget $widget;

    public function __construct(int $orientation, int $spacing)
    {
        $this->box = Gtk::getFFI()->gtk_box_new($orientation, $spacing);
        $this->widget = new Widget($this->box);
    }

    public function append(Widget $widget): void
    {
        Gtk::getFFI()->gtk_box_append(
            Gtk::getFFI()->cast('GtkBox *', $this->box),
            Gtk::getFFI()->cast('GtkWidget *', $widget->widget)
        );
    }
}
