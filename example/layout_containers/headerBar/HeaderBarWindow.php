<?php

class HeaderBarWindow extends \PGtk\Gtk\Gtk\Window
{
    private bool $run = true;

    private $i = 0;

    public function __construct()
    {
        parent::__construct();
        $this->setTitle('HeaderBar Demo');
        $this->setDefaultSize(400, 200);

        $hb = new \PGtk\Gtk\Gtk\HeaderBar();
        $hb->setDecorationLayout('menu:close');
//        $hb->setDecorationLayout('menu:minimize,maximize,close');
        $this->setTitlebar($hb);

        $button = new \PGtk\Gtk\Gtk\Button();
        $button->setIconName('mail-send-receive-symbolic');
        $hb->packEnd($button);

        $box = new \PGtk\Gtk\Gtk\Box(\PGtk\Gtk\Gtk\Enum\Orientation::horizontal, 0);
        $button = new \PGtk\Gtk\Gtk\ButtonIcon('pan-start-symbolic');
        $box->append($button);
        $button = new \PGtk\Gtk\Gtk\ButtonIcon('pan-end-symbolic');
        $box->append($button);
        $hb->packStart($box);

        $this->connect('destroy',function () {
            $this->run = false;
        });
    }

    public function run()
    {
        $this->widget->show();
        while ($this->run) {
            \PGtk\Gtk\GLib\MainContext::iteration(true);
        }
    }
}
