<?php

function timeoutAddSeconds(int $secund, callable $fun): int
{
    return \PGtk\Gtk\Gtk::getFFI()->g_timeout_add_seconds($secund, $fun, null);
}