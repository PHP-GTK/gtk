<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;
use FFI\CData;

/**
 * @method setIconName(string $iconName): void;
 * @method getChild(): CData;
 * @method getHasFrame(): bool;
 * @method getIconName(): string;
 * @method getLabel(): string;
 * @method getUseUnderline(): bool;
 * @method setHasFrame(bool $hasFrame): void;
 * @method setLabel(string $label): void;
 * @method setUseUnderline(bool $useUnderline): void;
 */
class Button extends AbstractWidget
{
    protected string $cast = 'GtkButton';
    protected string $prefFunctionName = 'gtk_button_';

    public function __construct(string $label = null)
    {
        if ($label === null) {
            parent::__construct(new Widget(Gtk::getFFI()->gtk_button_new()));
        }else{
            parent::__construct(new Widget(Gtk::getFFI()->gtk_button_new_with_label($label)));
        }
    }

    public function setChild(WidgetInterface $widget)
    {
        Gtk::getFFI()->gtk_button_set_child(
            Gtk::getFFI()->cast($this->cast . ' *', $this->widget->widget),
            Gtk::getFFI()->cast("GtkWidget*", $widget->getWidget()->widget)
        );
    }
}
