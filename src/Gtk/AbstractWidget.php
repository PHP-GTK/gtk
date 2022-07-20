<?php

namespace PGtk\Gtk\Gtk;

use http\Exception\RuntimeException;
use PGtk\Gtk\Gtk;

abstract class AbstractWidget implements WidgetInterface
{
    protected string $cast = '';
    protected string $prefFunctionName = '';
    private array $methods = [];

    public function __construct(protected readonly Widget $widget)
    {
    }

    public function __call(string $name, array $arguments)
    {
        if (count($this->methods) === 0) {
            $this->saveMethods();
        }
        if (!isset($this->methods[$name])) {
            throw new \RuntimeException(sprintf('Method not found %s in %s', $name, $this::class));
        }
        $functionName = $this->prefFunctionName . strtolower(preg_replace('~([A-Z])~', '_$1', $name));
        $cast = $this->cast . ' *';

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast($cast, $this->widget->widget), ...$arguments);
    }

    private function saveMethods()
    {
        $className = $this::class;
        while (true) {
            $comment = (new \ReflectionClass($className))->getDocComment();
            preg_match_all('~@method(.*)\(.*\)~', $comment, $arr);
            foreach ($arr[1] as $value) {
                $this->methods[trim($value)] = '';
            }
            $className = get_parent_class($className);
            if (!$className) {
                break;
            }
        }
    }

    public function getWidget(): Widget
    {
        return $this->widget;
    }

    public function connect(
        string   $detailedSignal,
        callable $handler,
                 ...$data
    )
    {
        return (int)Gtk::getFFI()->g_signal_connect_data(
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
