<?php

namespace Tests\Unit\Gtk;

use PGtk\Gtk\Gtk;
use PGtk\Gtk\Gtk\LinkButton;
use PHPUnit\Framework\TestCase;

class LinkButtonTest extends TestCase
{
    public function testLinkButton()
    {
        $link = new LinkButton('https://google.com');
        $this->assertEquals('https://google.com', $link->getUri());
        $this->assertFalse((boolean)$link->getVisited());
        $link->setUri('https://fb.com');
        $link->setVisited(true);
        $this->assertEquals('https://fb.com', $link->getUri());
        $this->assertTrue((boolean)$link->getVisited());
    }

    public function testLinkButtonWithLabel()
    {
        $link = new LinkButton('https://google.com', 'google');
        $this->assertEquals('https://google.com', $link->getUri());
        $this->assertEquals('google', $link->getLabel());
        $this->assertFalse((boolean)$link->getVisited());
        $link->setUri('https://fb.com');
        $link->setLabel('fb');
        $link->setVisited(true);
        $this->assertEquals('https://fb.com', $link->getUri());
        $this->assertEquals('fb', $link->getLabel());
        $this->assertTrue((boolean)$link->getVisited());
    }
}
