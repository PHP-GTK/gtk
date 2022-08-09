<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

/**
 * @method setMarkup(string $str): void
 * @method getLabel(): string
 * @method getCurrentUri(): string
 * @method getLayoutOffsets(int $x, int $y): void
 * @method getLines(): int
 * @method getMaxWidthChars(): int
 * @method getSelectable(): bool
 * @method getSelectionBounds(int $start, int $end): bool
 * @method getSingleLineMode(): bool
 * @method getText(): string
 * @method getUseMarkup(): bool
 * @method getUseUnderline(): bool
 * @method getWidthChars(): int
 * @method getWrap(): bool
 * @method getXalign(): float
 * @method getYalign(): float
 * @method selectRegion(int $startOffset, int $endOffset): void
 * @method setLabel(string $str): void
 * @method setLines(int $lines): void
 * @method setMarkupWithMnemonic(string $str): void
 * @method setMaxWidthChars(int $n_chars): void
 * @method setSelectable(bool $setting): void
 * @method setSingleLineMode(bool $singleLineMode): void
 * @method setText(string $str): void
 * @method setTextWithMnemonic(string $str): void
 * @method setUseMarkup(bool $setting): void
 * @method setUseUnderline(bool $setting): void
 * @method setWidthChars(int $nChars): void
 * @method setWrap(bool $wrap): void
 * @method setXalign(float $xalign): void
 * @method setYalign(float $yalign): void
 */
class Label extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_label_';
    protected string $cast = 'GtkLabel';

    public function __construct(string $label)
    {
        parent::__construct(new Widget(Gtk::getFFI()->gtk_label_new($label)));
    }
}
