<?php

namespace PGtk\Gtk;

use PGtk\Gtk\Enum\Version;

class Configuration
{
    public function __construct(
        public readonly Version $version = Version::v40,
        public readonly string $path = 'libgtk-4.so',
    ){
    }
}