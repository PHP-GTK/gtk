<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class HeaderBar extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_header_bar_';
    protected string $cast = 'GtkHeaderBar';

    public function __construct()
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_header_bar_new()));
    }

    public function packEnd(WidgetInterface $widget)
    {
        return Gtk::getFFI()->gtk_header_bar_pack_end(
            Gtk::getFFI()->cast('GtkHeaderBar*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget->getWidget()->widget)
        );
    }

    public function packStart(WidgetInterface $widget)
    {
        return Gtk::getFFI()->gtk_header_bar_pack_start(
            Gtk::getFFI()->cast('GtkHeaderBar*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget->getWidget()->widget)
        );
    }
}
