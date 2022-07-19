<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

/**
 * @method getText(): string
 * @method deleteText(int $position, int $numChars): int
 * @method getLength(): int
 * @method emitDeletedText(int $position, int $numChars): void
 * @method emitInsertedText(int $position, string $char, int $numChars): void
 * @method getBytes(): int
 * @method getMaxLength(): int
 * @method insertText(int $position, string $chars, int $numChars): int
 * @method setMaxLength(int $maxLength): void
 * @method setText(string $chars, int $numChars): void
 */
class EntryBuffer extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_entry_buffer_';
    protected string $cast = 'GtkEntryBuffer';

    public function __construct(?string $char = null)
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_entry_buffer_new($char, strlen($char))));
    }
}
