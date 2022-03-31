<?php

class ListBoxWindow extends \PGtk\Gtk\Gtk\Window
{
    private bool $run = true;

    public function __construct()
    {
        parent::__construct();
        $this->setTitle('List Box');
        $boxOuter = new \PGtk\Gtk\Gtk\Box(\PGtk\Gtk\Gtk\Enum\Orientation::vertical, 6);
        $this->setChild($boxOuter);

        $listbox = new \PGtk\Gtk\Gtk\ListBox();
        $listbox->setSelectionMode(0);
        $boxOuter->append($listbox);

        $row = new \PGtk\Gtk\Gtk\ListBoxRow();
        $hbox = new \PGtk\Gtk\Gtk\Box(\PGtk\Gtk\Gtk\Enum\Orientation::horizontal, 50);
        $row->setChild($hbox);
        $vbox = new \PGtk\Gtk\Gtk\Box(\PGtk\Gtk\Gtk\Enum\Orientation::vertical, 0);
        $hbox->append($vbox);

        $label1 = new \PGtk\Gtk\Gtk\Label("Automatic Date & Time");
        $label2 = new \PGtk\Gtk\Gtk\Label("Requires internet access");
        $vbox->append($label1);
        $vbox->append($label2);

        $switch = new \PGtk\Gtk\Gtk\Breaker();

        $hbox->append($switch);
        $listbox->append($row);

        $row = new \PGtk\Gtk\Gtk\ListBoxRow();
        $hbox = new \PGtk\Gtk\Gtk\Box(\PGtk\Gtk\Gtk\Enum\Orientation::horizontal, 50);
        $row->setChild($hbox);
        $label = new \PGtk\Gtk\Gtk\Label("Enable Automatic Update");
        $check = new \PGtk\Gtk\Gtk\CheckButton();
        $hbox->append($label);
        $hbox->append($check);
        $listbox->append($row);

        $row = new \PGtk\Gtk\Gtk\ListBoxRow();
        $hbox = new \PGtk\Gtk\Gtk\Box(\PGtk\Gtk\Gtk\Enum\Orientation::horizontal, 50);
        $row->setChild($hbox);
        $label = new \PGtk\Gtk\Gtk\Label("Date Format");
        $combo = new \PGtk\Gtk\Gtk\ComboBoxText();
        $combo->insert(0, "0", "24-hour");
        $combo->insert(1, "1", "AM/PM");
        $hbox->append($label);
        $hbox->append($combo);

        $listbox->append($row);

        $listbox2 = new \PGtk\Gtk\Gtk\ListBox();
        $items = explode(' ', "This is a sorted ListBox Fail");

        foreach ($items as $item) {
            $listbox2->append((new ListBoxRowWithData($item)));
        }

        $boxOuter->append($listbox2);
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
