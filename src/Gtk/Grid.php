<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class Grid
{
    public readonly CData $grid;
    public readonly Widget $widget;

    public function __construct()
    {
        $this->grid = Gtk::getFFI()->gtk_grid_new();
        $this->widget = new Widget($this->grid);
    }

    public function __call(string $name, array $arguments)
    {
        $functionName = 'gtk_grid_' . strtolower(preg_replace('~([A-Z])~', '_$1', $name));
        $cast = "GtkGrid *";

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast($cast, $this->window), ...$arguments);
    }

    public function attach(Widget $widget, int $column, int $row, int $width, int $height)
    {
        return Gtk::getFFI()->gtk_grid_attach(
            Gtk::getFFI()->cast('GtkGrid*', $this->grid),
            Gtk::getFFI()->cast('GtkWidget*', $widget->widget),
            $column,
            $row,
            $width,
            $height
        );
    }

    public function attachNextTo(Widget $widget1, Widget $widget2, string $positionType, int $width, int $height)
    {
        return Gtk::getFFI()->gtk_grid_attach_next_to(
            Gtk::getFFI()->cast('GtkGrid*', $this->grid),
            Gtk::getFFI()->cast('GtkWidget*', $widget1->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget2->widget),
            $positionType,
            $width,
            $height
        );
    }
}
