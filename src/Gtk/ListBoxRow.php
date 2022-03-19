<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class ListBoxRow extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_list_box_row_';
    protected string $cast = 'ListBoxRow';

    public function __construct()
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_list_box_row_new()));
    }

    public function setChild(WidgetInterface $widget)
    {
        Gtk::getFFI()->gtk_list_box_row_set_child(Gtk::getFFI()->cast("GtkListBoxRow*", $this->widget->widget), Gtk::getFFI()->cast("GtkWidget*", $widget->getWidget()->widget));
    }
}
