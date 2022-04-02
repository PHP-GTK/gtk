<?php

namespace PGtk\Gtk\Gtk\Enum;

enum StackTransitionType: int
{
    case none = 0;
    case crossfade = 1;
    case slideRight = 2;
    case slideLeft = 3;
    case slideUp = 4;
    case slideDown = 5;
    case slideLeftRight = 6;
    case slideUpDown = 7;
    case overUp = 8;
    case overDown = 9;
    case overLeft = 10;
    case overRight = 11;
    case underUp = 12;
    case underDown = 13;
    case underLeft = 14;
    case underRight = 15;
    case overUpDown = 16;
    case overDownUp = 17;
    case overLeftRight = 18;
    case overRightLeft = 19;
    case rotateLeft = 20;
    case rotateRight = 21;
    case rotateLeftRight = 22;
}
