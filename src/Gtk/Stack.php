<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;
use PGtk\Gtk\Gtk\Enum\StackTransitionType;

class Stack extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_stack_';
    protected string $cast = 'GtkStack';

    public function __construct()
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_stack_new()));
    }

    public function addTitled(WidgetInterface $widget, string $name, string $title)
    {
        return Gtk::getFFI()->gtk_stack_add_titled(
            Gtk::getFFI()->cast('GtkStack*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkWidget*', $widget->getWidget()->widget),
            $name, $title
        );
    }

    public function setTransitionType(StackTransitionType $type)
    {
        return Gtk::getFFI()->gtk_stack_set_transition_type(
            Gtk::getFFI()->cast('GtkStack*', $this->widget->widget),
            $type->value
        );
    }
}
