<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

/**
 * @method insert(int $position, string $id, string $text): void
 */
class ComboBoxText extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_combo_box_text_';
    protected string $cast = 'GtkComboBoxText';

    public function __construct()
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_combo_box_text_new()));
    }
}
