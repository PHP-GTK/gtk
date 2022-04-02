<?php

class StackWindow extends \PGtk\Gtk\Gtk\Window
{
    public function __construct()
    {
        parent::__construct();
        $this->setTitle('Stack Demo');
        $vbox = new \PGtk\Gtk\Gtk\Box(\PGtk\Gtk\Gtk\Enum\Orientation::vertical, 6);
        $this->setChild($vbox);

        $stack = new \PGtk\Gtk\Gtk\Stack();
        $stack->setTransitionType(\PGtk\Gtk\Gtk\Enum\StackTransitionType::rotateRight);
        $stack->setTransitionDuration(500);

        $checkbutton = new \PGtk\Gtk\Gtk\CheckButton("Click me!");
        $stack->addTitled($checkbutton, "check", "Check Button");


        $label = new \PGtk\Gtk\Gtk\Label('');
        $label->setMarkup('<big>A fancy label</big>');
        $stack->addTitled($label, "label", "A label");

        $stackSwitcher = new \PGtk\Gtk\Gtk\StackSwitcher();
        $stackSwitcher->setStack($stack);

        $vbox->append($stackSwitcher);
        $vbox->append($stack);
    }
}
