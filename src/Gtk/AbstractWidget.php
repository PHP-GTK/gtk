<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

abstract class AbstractWidget implements WidgetInterface
{
    protected string $cast = '';
    protected string $prefFunctionName = '';

    public function __construct(protected readonly Widget $widget)
    {
    }

    public function __call(string $name, array $arguments)
    {
        $functionName = $this->prefFunctionName . strtolower(preg_replace('~([A-Z])~', '_$1', $name));
        $cast = $this->cast . ' *';

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast($cast, $this->widget->widget), ...$arguments);
    }

    public function getWidget(): Widget
    {
        return $this->widget;
    }
}
