cmake_minimum_required(VERSION 3.23)
project(Topological C)

set(CMAKE_C_STANDARD 99)

add_executable(Topological main.c Order.c Type.h Create.c Out.c Insert.c FindHcourse.c)
