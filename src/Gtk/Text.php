<?php

namespace PGtk\Gtk\Gtk;

use PGtk\Gtk\Gtk;

/**
 * @method setPropagateTextWidth(bool $propagateTextWidth): void
 * @method getActivatesDefault(): void
 * @method getEnableEmojiCompletion(): bool
 * @method get_invisible_char()
 * @method gtk_text_get_max_length(): int
 * @method gtk_text_get_overwrite_mode():
 */
class Text extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_text_';
    protected string $cast = 'GtkText';

    public function __construct(
        protected ?EntryBuffer $buffer = null
    )
    {
        if ($this->buffer === null) {
            $entry = Gtk::getFFI()->gtk_text_new();
        } else {
            $entry = Gtk::getFFI()->gtk_text_new_with_buffer(
                Gtk::getFFI()->cast("GtkEntryBuffer*", $this->buffer->getWidget()->widget)
            );
        }
        parent::__construct(new Widget($entry));
    }

}