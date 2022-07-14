<?php

declare(strict_types=1);

use PGtk\Gtk\GLib\MainContext;
use PGtk\Gtk\Gtk\Button;
use PGtk\Gtk\Gtk\Entry;
use PGtk\Gtk\Gtk\Grid;
use PGtk\Gtk\Gtk\HeaderBar;
use PGtk\Gtk\Gtk\Label;
use PGtk\Gtk\Gtk\Window;

class Application
{
    public Entry $entry;

    public function run(): void
    {

        $run = true;

        $window = new Window();
        $window->setTitle('Entry Example');

        $headerBar = new HeaderBar();
        $headerBar->setDecorationLayout('menu:close');
        $window->setTitlebar($headerBar);
        $grid        = new Grid();
        $label       = new Label('Put text in here');
        $this->entry = new Entry();
        $button      = new Button('Submit to console');
        $grid->attach($label->getWidget(), 0, 0, 1, 1);
        $grid->attach($this->entry->getWidget(), 0, 1, 1, 1);
        $grid->attach($button->getWidget(), 1, 1, 1, 1);
        $button->connect('clicked', $this->onButtonClicked(...));
        $window->setChild($grid);

        $window->connect('destroy', function () use (&$run) {
            $run = false;
        });
        $window->widget->show();
        while ($run) {
            MainContext::iteration(true);
        }

    }

    public function onButtonClicked(): void
    {
        echo 'send: ' . $this->entry->getText() . PHP_EOL;
    }
}

