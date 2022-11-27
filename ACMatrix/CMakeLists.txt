cmake_minimum_required(VERSION 3.23)
project(ACMatrix C)

set(CMAKE_C_STANDARD 99)

add_executable(ACMatrix main.c Type.h Create.c FindLow.c Print.c Traverse.c calculate.c DeleteArc.c InsertArc.c Menu.c Judge.c Destroy.c)
