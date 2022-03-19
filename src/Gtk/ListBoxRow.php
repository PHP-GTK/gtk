<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class ListBoxRow
{
    public readonly CData $listBoxRow;
    public readonly Widget $widget;

    public function __construct()
    {
        $this->listBoxRow = Gtk::getFFI()->gtk_list_box_row_new();
        $this->widget = new Widget($this->listBoxRow);
    }

    public function setChild(Widget $widget)
    {
        Gtk::getFFI()->gtk_list_box_row_set_child(Gtk::getFFI()->cast("GtkListBoxRow*", $this->listBoxRow), Gtk::getFFI()->cast("GtkWidget*", $widget->widget));
    }
}
