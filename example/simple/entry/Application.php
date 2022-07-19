<?php

declare(strict_types=1);

use PGtk\Gtk\GLib\MainContext;
use PGtk\Gtk\Gtk\Button;
use PGtk\Gtk\Gtk\Entry;
use PGtk\Gtk\Gtk\Grid;
use PGtk\Gtk\Gtk\HeaderBar;
use PGtk\Gtk\Gtk\Label;
use PGtk\Gtk\Gtk\Window;
use PGtk\Gtk\Gtk\EntryBuffer;
use PGtk\Gtk\Gtk\PasswordEntryBuffer;

class Application
{
    public Entry $entryName;
    public Entry $entryPassword;
    public EntryBuffer $name;
    public EntryBuffer $password;

    public function __construct()
    {
        $this->name = new EntryBuffer('name');
        $this->password = new PasswordEntryBuffer();
    }

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
        $this->entryName = new Entry($this->name);
        $this->entryPassword = new Entry($this->password);
        $button      = new Button('Submit to console');
        $buttonPassword      = new Button('Submit to console password');
        $grid->attach($label->getWidget(), 0, 0, 1, 1);
        $grid->attach($this->entryName->getWidget(), 0, 1, 1, 1);
        $grid->attach($this->entryPassword->getWidget(), 0, 2, 1, 1);
        $grid->attach($button->getWidget(), 1, 1, 1, 1);
        $grid->attach($buttonPassword->getWidget(), 1, 2, 1, 1);
        $button->connect('clicked', $this->onButtonClickedName(...));
        $buttonPassword->connect('clicked', $this->onButtonClickedPassword(...));
        $window->setChild($grid);

        $window->connect('destroy', function () use (&$run) {
            $run = false;
        });
        $window->widget->show();
        while ($run) {
            MainContext::iteration(true);
        }

    }

    public function onButtonClickedName(): void
    {
        echo 'name: ' . $this->name->getText() . PHP_EOL;
        $this->name->deleteText(0, strlen($this->name->getText()));
    }

    public function onButtonClickedPassword(): void
    {
        echo 'password: ' . $this->entryPassword->getBuffer()->getText() . PHP_EOL;
    }
}

