<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

/**
 * @method setSelectionMode(int $mode): void
 *
 */
class ListBox extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_list_box_';
    protected string $cast = 'GtkListBox';

    public function __construct()
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_list_box_new()));
    }

    public function append(WidgetInterface $widget): void
    {
        Gtk::getFFI()->gtk_list_box_append(
            Gtk::getFFI()->cast($this->cast . ' *', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget *', $widget->getWidget()->widget)
        );
    }
}
