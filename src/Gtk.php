<?php

namespace PGtk\Gtk;

class Gtk
{
    private static $instance;

    private $ffi;

    private $filesName = [];

    public function __construct(Configuration $configuration = new Configuration())
    {
        $files = scandir(__DIR__ . '/../headers');
        foreach($files as $file) {
            if(!is_dir(__DIR__ . "/../headers/" . $file)) {
                if (!isset($this->filesName[$file])) {
                    $this->filesName[$file] = '';
                }
                $this->filesName[$file] .= file_get_contents(__DIR__ . "/../headers/" . $file) . PHP_EOL . PHP_EOL;
            } else {
                if ($file == '.' || $file == '..') {
                    continue;
                }
                foreach (scandir(__DIR__ . '/../headers/' . $file) as $value) {
                    if (is_file(__DIR__ . "/../headers/" . $file . '/' . $value)) {
                        $this->filesName[$value] .= file_get_contents(__DIR__ . "/../headers/" . $file . '/' . $value) . PHP_EOL . PHP_EOL;
                    }
                }
            }
        }

        $this->ffi = \FFI::cdef(implode(PHP_EOL, $this->filesName), $configuration->path);
        $this->ffi->gtk_init();
    }

    /**
     * Singleton
     */
    public static function getInstance(Configuration $configuration = new Configuration())
    {
        if(self::$instance === NULL) {
            self::$instance = new self($configuration);
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
