# Aircraft - The GTK Telegram client

<img src="https://raw.githubusercontent.com/Suzamax/Aircraft/master/assets/icon.png" width="48">

This app is a GTK implementation using *gtkmm* of TdLib. The official client of Telegram is using Qt and it has an Operating System agnostic interface, but tends to be more Windows-like than a Linux interface.

GNOME human interface guidelines are cool and this app intends to follow them.


## Dependencies
There are some developer libraries (*gtkmm* and *TdLib* being essential) that you will need. 

[Install TdLib before](https://tdlib.github.io/td/build.html?language=C%2B%2B).

There's a bunch of distros so use your package manager to find and install the *gtkmm* developer libraries.

## Installation

It's pretty straightfroward! This project uses CMake so it's easy:

```bash
mkdir build && cd build
cmake ..
make
sudo make install
```

## TODOs

- [ ] Complete the Telegram thread classes.
- [ ] Create the User Interface.
- [ ] Connect GUI and Telegram thread.
- [ ] And so on...

Also there's more TODOs in the code comments.


## FAQ

### Why no more elementary?
It was initially planned to be a elementary-based application, but I find myself being comfortable using GNOME, because its workflow is better in my opinion.

### Why switching from Vala/Granite to gtkmm (C++)?

There are some reasons listed below:

1. There's a C++-native implementation of TdLib. Just using this.
2. I feel more comfortable coding in C++. The Vala way is harder for me. It seems like Java/C#, so verbose, and also making Vala APIs for connecting a C++ library using void pointers to adaptinmg them for C and connecting them to Vala is so hard and painful, yet somewhat I managed to get them working with TdLib's JSON shared object, but I don't want to lose time with that.
3. Granite is Vala-based and centered in Pantheon, thus making it harder to be global for GTK. Also, the reason above is powerful.
4. Most people like to use GTK, MATE or Xfce than Pantheon. I myself being a GNOME user rather than a Pantheon one conditionates this decision (I tend to use Fedora or Ubuntu).

### Why using CMake?

CMake is more intuitive and more extended than Meson is. Also it's comfortable and I use CLion.

## Contributing

I'll do my best to build this project, although I'm open to pull requests. Also, some people told me they wouldn't mind funding this project. My answer is that this project has to reach some level before I'll ever think about that.
