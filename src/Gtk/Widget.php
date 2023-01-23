<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\GDK\GObject;
use PGtk\Gtk\Gtk;
use FFI\CData;

/**
 * GtkWidget is the base class all widgets in GTK+ derive from. It manages the widget lifecycle, states and style.
 *
 * @method setSizeRequest(int $width, int $height): void;
 * @method show(): void;
 * @method setMarginTop(int $margin): void;
 * @method setMarginBottom(int $margin): void;
 * @method setMarginEnd(int $margin): void;
 * @method setMarginStart(int $margin): void;
 * @method setTooltipText(string $text): void;
 */
class Widget
{
    public readonly GObject $GObject;
    public function __construct(public readonly CData $widget)
    {
        $this->GObject = new GObject($this->widget);
    }

    public function __call(string $name, array $arguments)
    {
        $functionName = 'gtk_widget_' . strtolower(preg_replace('~([A-Z])~', '_$1', $name));
        $cast = "GtkWidget *";

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast($cast, $this->widget), ...$arguments);
    }
}