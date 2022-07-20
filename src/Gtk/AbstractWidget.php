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
        $comment = (new \ReflectionClass($this))->getDocComment();
        if (!preg_match('~'.$name.'~', $comment)) {
            throw new \RuntimeException('Method not found ' . $name . ' in ' . $this::class);
        }
        $functionName = $this->prefFunctionName . strtolower(preg_replace('~([A-Z])~', '_$1', $name));
        $cast = $this->cast . ' *';

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast($cast, $this->widget->widget), ...$arguments);
    }

    public function getWidget(): Widget
    {
        return $this->widget;
    }

    public function connect(
        string $detailedSignal,
        callable $handler,
        ...$data
    ) {
        return (int) Gtk::getFFI()->g_signal_connect_data(
            Gtk::getFFI()->cast('GObject*', $this->getWidget()->widget),
            $detailedSignal,
            function () use ($handler, $data) {
                $handler($this, ...$data);
            },
            null,
            null,
            null
        );
    }
}
