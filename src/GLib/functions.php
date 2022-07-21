<?php

function timeoutAddSeconds(int $secund, callable $fun,  ...$data): int
{
    return \PGtk\Gtk\Gtk::getFFI()->g_timeout_add_seconds(
        $secund,
        function () use ($fun, $data): bool {
            return $fun(...$data) ?? false;
        },
        null
    );
}