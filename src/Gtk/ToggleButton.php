<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

/**
 * @method getActive(): bool;
 * @method setActive(int $is_active): void;
 * @method toggled(): void;
 */
class ToggleButton extends AbstractWidget
{
    protected string $cast = 'GtkToggleButton';
    protected string $prefFunctionName = 'gtk_toggle_button_';

    public function __construct(string $label = null)
    {
        if ($label === null) {
            parent::__construct(new Widget(Gtk::getFFI()->gtk_toggle_button_new()));
        }else{
            parent::__construct(new Widget(Gtk::getFFI()->gtk_toggle_button_new_with_label($label)));
        }
    }

    public function setGroup(ToggleButton $toggleButton): void
    {
        Gtk::getFFI()->gtk_toggle_button_set_group(
            Gtk::getFFI()->cast('GtkToggleButton*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkToggleButton*', $toggleButton->widget->widget)
        );
    }
}
