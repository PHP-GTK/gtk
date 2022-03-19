<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

/**
 * @method insert(int $position, string $id, string $text): void
 */
class ComboBoxText
{
    public readonly CData $comboBoxText;
    public readonly Widget $widget;

    public function __construct()
    {
        $this->comboBoxText = Gtk::getFFI()->gtk_combo_box_text_new();
        $this->widget = new Widget($this->comboBoxText);
    }

    public function __call(string $name, array $arguments)
    {
        $functionName = 'gtk_combo_box_text_' . strtolower(preg_replace('~([A-Z])~', '_$1', $name));
        $cast = "GtkComboBoxText *";

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast($cast, $this->comboBoxText), ...$arguments);
    }
}
