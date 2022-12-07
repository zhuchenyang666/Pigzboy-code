cmake_minimum_required(VERSION 3.23)
project(Order C)

set(CMAKE_C_STANDARD 99)

add_executable(Order main.c BubbleOrder.c Type.h InsertOrder.c ChoiceOrder.c EasyOrder.c)
