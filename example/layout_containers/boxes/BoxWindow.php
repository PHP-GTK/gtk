<?php

class BoxWindow extends \PGtk\Gtk\Gtk\Window
{
    private bool $run = true;

    public function __construct()
    {
        parent::__construct();
        $this->setTitle('Box Example');
        $box = new \PGtk\Gtk\Gtk\Box(\PGtk\Gtk\Gtk\Enum\Orientation::horizontal, 6);
        $button1 = new \PGtk\Gtk\Gtk\Button('Hello');
        $button1->widget->GObject->connect('clicked', $this->onButton1Clicked(...));
        $box->append($button1);

        $button2 = new \PGtk\Gtk\Gtk\Button('Goodbye');
        $button2->widget->GObject->connect('clicked', $this->onButton2Clicked(...));
        $box->append($button2);

        $this->setChild($box);

        $this->widget->GObject->connect('destroy', function () {
            $this->run = false;
        });
    }

    public function onButton1Clicked()
    {
        echo 'Hello' . PHP_EOL;
    }

    public function onButton2Clicked()
    {
        echo 'Goodbye' . PHP_EOL;
    }

    public function run()
    {
        $this->widget->show();
        while ($this->run) {
            $this->widget->GObject->mainContextIteration(null, true);
        }
    }
}
