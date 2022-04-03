<?php

namespace PGtk\Gtk\Gtk\Enum;

enum PolicyType: int
{
    case always = 0;
    case automatic = 1;
    case never = 2;
    case external = 3;
}
