<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;
use FFI\CData;

/**
 * Class Window
 *
 * @method close(): void
 * @method getTitle(): string
 * @method setTitle(string $title): void
 * @method setDefaultSize(int $width, int $height): void
 * @method fullscreen(): void
 * @method unfullscreen(): void
 * @method setResizable(bool $resizable): void
 * @method getResizable(): bool
 * @method maximize(): void
 * @method unmaximize(): void
 * @method destroy(): void
 *
 */
class Window extends AbstractWidget
{
    public readonly Widget $widget;
    protected string $cast = 'GtkWindow';
    protected string $prefFunctionName = 'gtk_window_';

    public function __construct()
    {
        $this->widget = new Widget(Gtk::getFFI()->gtk_window_new());
    }

    public function getDefaultSize(): array
    {
        $width = Gtk::getFFI()->new("gint", false);
        $height = Gtk::getFFI()->new("gint", false);

        Gtk::getFFI()->gtk_window_get_default_size(Gtk::getFFI()->cast($this->cast . ' *', $this->widget->widget), \FFI::addr($width), \FFI::addr($height));
        /** @psalm-suppress UndefinedPropertyFetch*/
        return [
            'width' => $width->cdata,
            'height' => $height->cdata,
        ];
    }

    public function setChild(WidgetInterface $widget)
    {
        Gtk::getFFI()->gtk_window_set_child(Gtk::getFFI()->cast($this->cast . ' *', $this->widget->widget), Gtk::getFFI()->cast("GtkWidget*", $widget->getWidget()->widget));
    }

    public function setTitlebar(WidgetInterface $widget)
    {
        Gtk::getFFI()->gtk_window_set_titlebar(
            Gtk::getFFI()->cast($this->cast . ' *', $this->widget->widget),
            Gtk::getFFI()->cast("GtkWidget*", $widget->getWidget()->widget));
    }
}