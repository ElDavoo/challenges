cmake_minimum_required(VERSION 3.21)
project(Morra C)

set(CMAKE_C_STANDARD 99)

add_executable(Morra main.c lib-periph.h lib-periph.c mcu-api.h mcu.c)
