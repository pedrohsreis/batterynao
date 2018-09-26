cmake_minimum_required(VERSION 2.6.4 FATAL_ERROR)
# Give a name to the project.
project(naobattery)
# This include enable you to use qibuild framework
find_package(qibuild)

qi_create_bin(naobattery naobattery.cpp)


qi_use_lib(naobattery ALCOMMON ALPROXIES)
