<?php

namespace PGtk\Gtk;

class Gtk
{
    private static $instance;

    private $ffi;

    private function __construct(string $path)
    {
        $data = '';
        $files = scandir(__DIR__ . '/../headers');
        foreach($files as $file) {
            if(!is_dir(__DIR__ . "/../headers/" . $file)) {
                $data .= file_get_contents(__DIR__ . "/../headers/" . $file) . PHP_EOL . PHP_EOL;
            }
        }

        $this->ffi = \FFI::cdef($data, $path);
        $this->ffi->gtk_init();
    }

    /**
     * Singleton
     */
    public static function getInstance(string $path = 'libgtk-4.so')
    {
        if(self::$instance === NULL) {
            self::$instance = new self($path);
        }
        return self::$instance;
    }

    /**
     * @return mixed
     */
    public static function getFFI()
    {
        $instance = self::getInstance();

        return $instance->ffi;
    }
}
