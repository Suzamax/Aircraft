#!/bin/sh

xargs rm < install_manifest.txt
glib-compile-schemas /usr/share/glib-2.0/schemas/.