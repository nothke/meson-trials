Learning how to use Meson for dependency resolution on a project that uses complex libraries like Bullet physics. Looks like it works! ..But still learning.

I am looking to open source Shakedown Rally engine, but C++ is a complex beast especially if you have many dependencies with their own build systems. Originally I built all these by hand and included as static libraries. Then I found out about Meson!

## Prerequisites

You will need meson. It comes in most Linux distros by default. On Windows you can install it via python pip:
```
pip install meson
```

## Build

Then in project folder run
```
meson setup builddir
meson compile -C builddir
```

And that's all! Meson will download bullet repository, compile it (with your default C++ compiler) and link to our exe without us having to do any manual config and building.