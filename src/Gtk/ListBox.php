<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

/**
 * @method setSelectionMode(int $mode): void
 *
 */
class ListBox
{
    public readonly CData $listBox;
    public readonly Widget $widget;

    public function __construct()
    {
        $this->listBox = Gtk::getFFI()->gtk_list_box_new();
        $this->widget = new Widget($this->listBox);
    }

    public function __call(string $name, array $arguments)
    {
        $functionName = 'gtk_list_box_' . strtolower(preg_replace('~([A-Z])~', '_$1', $name));
        $cast = "GtkListBox *";

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast($cast, $this->listBox), ...$arguments);
    }

    public function append(Widget $widget): void
    {
        Gtk::getFFI()->gtk_list_box_append(
            Gtk::getFFI()->cast('GtkListBox *', $this->listBox),
            Gtk::getFFI()->cast('GtkWidget *', $widget->widget)
        );
    }
}
