<?php

class ListBoxRowWithData extends \PGtk\Gtk\Gtk\ListBoxRow
{
    public function __construct($data)
    {
        parent::__construct();
        $label = new \PGtk\Gtk\Gtk\Label($data);
        $this->setChild($label);
    }
}