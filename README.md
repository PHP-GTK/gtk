### Requirement

- php (8.1)
- ext-FFI
- gtk-4

**Installation**

```bash
composer require pgtk/gtk
```
**Example:**

![alt text](img/win.png "Window")
```php
require_once __DIR__ . '/vendor/autoload.php';

use PGtk\Gtk\Gtk\Window;
use PGtk\Gtk\Gtk\HeaderBar;
use PGtk\Gtk\Gtk\Label;
use PGtk\Gtk\GLib\MainLoop;

$run = true;

$window = new Window();
$window->widget->setSizeRequest(100, 100);
$window->setTitle('Window');

$headerBar = new HeaderBar();
$headerBar->setDecorationLayout('menu:close');
$window->setTitlebar($headerBar);

$label = new Label('label');

$window->setChild($label);

$loop = new MainLoop();
$window->connect('destroy', function (Window $window, MainLoop $loop) {
    $loop->quit();
}, $loop);

$window->widget->show();

$loop->run();


```

# Supported platforms and features

## Platforms

| Platform | Status |
|----------|:------:|
| Linux    | ✅      |
| Windows  | ❌      |

# Examples:
- [TomatoGtk](https://github.com/kmaestro/tomate-gtk)

Contributing
------------

Feel free to open issues and make PR. Contributions are welcome.
