<?php

require __DIR__ . '/../../../vendor/autoload.php';
\PGtk\Gtk\Gtk::getInstance(__DIR__ . '/../../../libs/_build/gtk/libgtk-4.so');

class BoxWindow extends \PGtk\Gtk\Gtk\Window
{
    public function __construct()
    {
        parent::__construct();
        $this->setTitle('Box Example');
        $box = new \PGtk\Gtk\Gtk\Box(0, 6);
        $button1 = new \PGtk\Gtk\Gtk\Button('Hello');
        $button1->widget->GObject->connect('clicked', $this->onButton1Clicked(...));
        $box->append($button1->widget);

        $button2 = new \PGtk\Gtk\Gtk\Button('Goodbye');
        $button2->widget->GObject->connect('clicked', $this->onButton2Clicked(...));
        $box->append($button2->widget);

        $this->setChild($box->widget);
    }

    public function onButton1Clicked()
    {
        echo 'Hello' . PHP_EOL;
    }

    public function onButton2Clicked()
    {
        echo 'Goodbye' . PHP_EOL;
    }
}

$w = new BoxWindow();

$w->widget->show();
while (true) {
    $w->widget->GObject->mainContextIteration(null, true);
}
