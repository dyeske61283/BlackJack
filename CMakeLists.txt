cmake_minimum_required(VERSION 3.9)
project(BlackJack)

set(CMAKE_CXX_STANDARD 11)

add_executable(BlackJack main.cpp Person.cpp Person.h Card.cpp Card.h)