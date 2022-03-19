<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class Grid extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_grid_';
    protected string $cast = 'GtkGrid';

    public function __construct()
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_grid_new()));
    }

    public function attach(Widget $widget, int $column, int $row, int $width, int $height)
    {
        return Gtk::getFFI()->gtk_grid_attach(
            Gtk::getFFI()->cast($this->cast . '*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget->widget),
            $column,
            $row,
            $width,
            $height
        );
    }

    public function attachNextTo(WidgetInterface $widget1, WidgetInterface $widget2, string $positionType, int $width, int $height)
    {
        return Gtk::getFFI()->gtk_grid_attach_next_to(
            Gtk::getFFI()->cast('GtkGrid*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget1->getWidget()->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget2->getWidget()->widget),
            $positionType,
            $width,
            $height
        );
    }
}
