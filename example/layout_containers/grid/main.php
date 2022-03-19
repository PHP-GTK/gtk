<?php

require __DIR__ . '/../../../vendor/autoload.php';
\PGtk\Gtk\Gtk::getInstance(__DIR__ . '/../../../libs/_build/gtk/libgtk-4.so');

class GridWindow extends \PGtk\Gtk\Gtk\Window
{
    public function __construct()
    {
        parent::__construct();
        $this->setTitle('Grid Example');
        $button1 = new \PGtk\Gtk\Gtk\Button('button1');
        $button2 = new \PGtk\Gtk\Gtk\Button('button2');
        $button3 = new \PGtk\Gtk\Gtk\Button('button3');
        $button4 = new \PGtk\Gtk\Gtk\Button('button4');
        $button5 = new \PGtk\Gtk\Gtk\Button('button5');
        $button6 = new \PGtk\Gtk\Gtk\Button('button6');
        $grid = new \PGtk\Gtk\Gtk\Grid();
        $grid->attach($button1->widget, 0, 0, 1, 1);
        $grid->attach($button2->widget, 1, 0, 2, 1);
        $grid->attachNextTo($button3, $button1, 3, 1, 2);
        $grid->attachNextTo($button4, $button3, 1,  2, 1);
        $grid->attach($button5->widget,   1, 2, 1, 1);
        $grid->attachNextTo($button6, $button5, 1, 1, 1);
        $this->setChild($grid);
    }
}

$w = new GridWindow();

$w->widget->show();
while (true) {
    $w->widget->GObject->mainContextIteration(null, true);
}
