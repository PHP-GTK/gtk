<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

/**
 * @method setDecorationLayout(string $decoration): void;
 * @method getDecorationLayout(): string;
 * @method getShowTitleButtons(): bool;
 */
class HeaderBar extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_header_bar_';
    protected string $cast = 'GtkHeaderBar';

    public function __construct()
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_header_bar_new()));
    }

    public function packEnd(WidgetInterface $widget): void
    {
        Gtk::getFFI()->gtk_header_bar_pack_end(
            Gtk::getFFI()->cast('GtkHeaderBar*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget->getWidget()->widget)
        );
    }

    public function packStart(WidgetInterface $widget): void
    {
        Gtk::getFFI()->gtk_header_bar_pack_start(
            Gtk::getFFI()->cast('GtkHeaderBar*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget->getWidget()->widget)
        );
    }

    public function setTitleWidget(WidgetInterface $widget)
    {
        return Gtk::getFFI()->gtk_header_bar_set_title_widget(
            Gtk::getFFI()->cast('GtkHeaderBar*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget->getWidget()->widget)
        );
    }

    public function remove(WidgetInterface $widget)
    {
        return Gtk::getFFI()->gtk_header_bar_remove(
            Gtk::getFFI()->cast('GtkHeaderBar*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget->getWidget()->widget)
        );
    }
}
