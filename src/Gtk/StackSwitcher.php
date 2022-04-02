<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

class StackSwitcher extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_stack_switcher_';
    protected string $cast = 'GtkStackSwitcher';

    public function __construct()
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_stack_switcher_new()));
    }

    public function setStack(Stack $stack)
    {
        return Gtk::getFFI()->gtk_stack_switcher_set_stack(
            Gtk::getFFI()->cast('GtkStackSwitcher*', $this->widget->widget),
            Gtk::getFFI()->cast('GtkStack*', $stack->widget->widget)
        );
    }
}
