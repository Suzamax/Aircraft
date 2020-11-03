cmake_minimum_required(VERSION 3.10)
project(Aircraft)

find_package(PkgConfig)

pkg_check_modules(GTKMM gtkmm-3.0)

add_executable(Aircraft main.cpp)