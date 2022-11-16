<?php

namespace Tests\Unit\Gtk;

use PGtk\Gtk\Gtk;
use PGtk\Gtk\Gtk\Window;
use PHPUnit\Framework\TestCase;

class WindowTest extends TestCase
{
    public function testWindow()
    {
        $win = new Window();
        $this->assertNull($win->getTitle());
        $this->assertTrue((boolean)$win->getResizable());
        $this->assertEquals(
            [
                'width' => 0,
                'height' => 0
            ],
            $win->getDefaultSize()
        );
        $win->setTitle('title');
        $win->setDefaultSize(400, 400);
        $win->fullscreen();
        $win->unfullscreen();
        $win->setResizable(false);

        $this->assertFalse((boolean)$win->getResizable());
        $this->assertEquals('title', $win->getTitle());
        $this->assertEquals(
            [
                'width' => 400,
                'height' => 400
            ],
            $win->getDefaultSize()
        );

        $win->destroy();
    }
}