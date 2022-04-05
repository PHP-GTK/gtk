<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

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
class ButtonIcon extends AbstractWidget
{
    protected string $cast = 'GtkButton';
    protected string $prefFunctionName = 'gtk_button_';

    public function __construct(string $name)
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_button_new_from_icon_name($name)));
    }

    public function setChild(WidgetInterface $widget)
    {
        Gtk::getFFI()->gtk_button_set_child(
            Gtk::getFFI()->cast($this->cast . ' *', $this->widget->widget),
            Gtk::getFFI()->cast("GtkWidget*", $widget->getWidget()->widget)
        );
    }
}
