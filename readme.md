Learning how to use Meson for dependency resolution on a complex library like Bullet physics. Looks like it works! ..But still learning.

You will need meson. It comes in most Linux distros by default. On Windows you can install it via pip:
```
pip install meson
```

Then in project run
```
meson setup builddir
meson compile -C builddir
```

And that should be it!