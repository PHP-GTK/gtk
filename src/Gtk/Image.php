<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

/**
 * @method clear(): void;
 * @method getIconName(): string;
 * @method getPixelSize(): int;
 * @method setFromFile(string $filename): void;
 * @method setFromIconName(string $iconName): void;
 * @method setFromResource(string $resourcePath): void;
 * @method setPixelSize(int $pixelSize): void;
 */
class Image extends AbstractWidget
{
    protected string $prefFunctionName = 'gtk_image_';
    protected string $cast = 'GtkImage';

    public function __construct(string $filename = null)
    {
        if($filename === null) {
            parent::__construct(new Widget(Gtk::getFFI()->gtk_image_new()));
        } else {
            parent::__construct(new Widget(Gtk::getFFI()->gtk_image_new_from_file($filename)));
        }
    }
}
