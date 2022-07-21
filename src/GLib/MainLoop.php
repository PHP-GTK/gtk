<?php

namespace PGtk\Gtk\GLib;

use PGtk\Gtk\Gtk;
use FFI\CData;
use phpDocumentor\Reflection\Types\True_;

/**
 * @method run(): void
 * @method quit(): void
 * @method isRunning(): bool
 */
class MainLoop
{
    protected readonly CData $data;

    private array $methods = [];

    public function __construct()
    {
        $this->data = Gtk::getFFI()->g_main_loop_new(null, true);
    }

    public function __call(string $name, array $arguments)
    {
        if (count($this->methods) === 0) {
            $this->saveMethods();
        }
        if (!isset($this->methods[$name])) {
            throw new \RuntimeException(sprintf('Method not found %s in %s', $name, $this::class));
        }

        $functionName = 'g_main_loop_' . strtolower(preg_replace('~([A-Z])~', '_$1', $name));

        return Gtk::getFFI()->$functionName(Gtk::getFFI()->cast('GMainLoop*', $this->data), ...$arguments);
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
}