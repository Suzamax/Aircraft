# ![icon](https://raw.githubusercontent.com/Suzamax/Aircraft/master/assets/icon.png) Aircraft - The elementary-styled Telegram client


## Pre-requisites

~~Install [TDLib from Telegram](https://github.com/tdlib/td/): just compile it and make a `sudo make install`. The
libraries should have been installed in `/usr/local/lib`.~~

~~Copy the `lib/td*.pc` into `/usr/local/share/pkgconfig/`, otherwise the vapis won't work.~~

### UPDATE (3/5/2019)

Now Aircraft uses [TdLib JSON CLI](https://github.com/oott123/tdlib-json-cli) and TdLib installation is not longer required.

## Depndencies
There are some **-devs** that you will need. Details are in the `meson.build` file.


## Installation

It's pretty straightfroward! Just execute these commands:

```
meson build && cd build
sudo ninja install
```


