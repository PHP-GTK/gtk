<?php

namespace PGtk\Gtk\Gtk;

use FFI\CData;
use PGtk\Gtk\Gtk;

/**
 * @method getUri(): string;
 * @method getVisited(): bool;
 * @method setUri(string $uri): void;
 * @method setVisited(bool $visited): void;
 */
class LinkButton extends Button
{
    protected string $cast = 'GtkLinkButton';
    protected string $prefFunctionName = 'gtk_link_button_';

    public readonly Widget $widget;

    public function __construct(string $uri, string $label = null)
    {
        if ($label === null) {
            $this->widget = new Widget(Gtk::getFFI()->gtk_link_button_new($uri));
        } else{
            $this->widget = new Widget(Gtk::getFFI()->gtk_link_button_new_with_label($uri, $label));
        }
    }
}
