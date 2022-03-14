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
class Window
{
    public readonly CData $window;
    public readonly Widget $widget;

    public function __construct()
    {
        $this->window = Gtk::getFFI()->gtk_window_new();
        $this->widget = new Widget($this->window);
    }

    public function __call(string $name, array $arguments)
    {
        $functionName = 'gtk_window_' . strtolower(preg_replace('~([A-Z])~', '_$1', $name));
        $cast = "GtkWindow *";

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast($cast, $this->window), ...$arguments);
    }

    public function getDefaultSize(): array
    {
        $width = Gtk::getFFI()->new("gint", false);
        $height = Gtk::getFFI()->new("gint", false);

        Gtk::getFFI()->gtk_window_get_default_size(Gtk::getFFI()->cast("GtkWindow *", $this->window), \FFI::addr($width), \FFI::addr($height));
        return [
            'width' => $width->cdata,
            'height' => $height->cdata,
        ];
    }

    public function setChild(Widget $widget)
    {
        Gtk::getFFI()->gtk_window_set_child(Gtk::getFFI()->cast("GtkWindow*", $this->window), Gtk::getFFI()->cast("GtkWidget*", $widget->widget));
    }
}