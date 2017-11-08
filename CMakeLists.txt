cmake_minimum_required(VERSION 3.8.2)
project(BlackJack)

set(CMAKE_CXX_STANDARD 11)

add_executable(BlackJack main.cpp Player.cpp Player.h Card.cpp Card.h Person.h CardDeck.cpp CardDeck.h)