<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

abstract class AbstractWidget implements WidgetInterface
{
    protected string $cast = '';
    protected string $prefFunctionName = '';
    private static array $methods = [];

    public function __construct(protected readonly Widget $widget)
    {
    }

    public function __call(string $name, array $arguments)
    {
        if (!isset(self::$methods[$this::class])) {
            $this->saveMethods();
        }
        if (!isset(self::$methods[$this::class][$name])) {
            throw new \RuntimeException(sprintf('Method not found %s in %s', $name, $this::class));
        }
        $method = self::$methods[$this::class][$name];
        $functionName = $method['prefFunctionName'];
        $cast = $method['cast'] . ' *';

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast($cast, $this->widget->widget), ...$arguments);
    }

    private function saveMethods()
    {
        $className = $this::class;
        while (true) {
            $class = (new \ReflectionClass($className));
            $comment = $class->getDocComment();
            $properties = $class->getDefaultProperties();
            preg_match_all('~@method(.*)\(.*\)~', $comment, $arr);
            foreach ($arr[1] as $value) {
                if (isset($properties['cast']) && isset($properties['prefFunctionName'])) {
                    self::$methods[$this::class][trim($value)] = [
                        'cast' => $properties['cast'],
                        'prefFunctionName' => $properties['prefFunctionName'] . strtolower(preg_replace('~([A-Z])~', '_$1', trim($value))),
                    ];
                }
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
