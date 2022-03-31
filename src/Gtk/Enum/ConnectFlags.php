<?php

enum ConnectFlags: int
{
    case after = 1 << 0;
    case swapped = 1 << 1;
}
