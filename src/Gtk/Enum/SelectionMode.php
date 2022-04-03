<?php

namespace PGtk\Gtk\Gtk\Enum;

enum SelectionMode: int
{
    case none = 0;
    case single = 1;
    case browse = 2;
    case multiple = 3;
}
