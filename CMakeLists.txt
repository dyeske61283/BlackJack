cmake_minimum_required(VERSION 3.8.2)
project(BlackJack)

set(CMAKE_CXX_STANDARD 11)

add_executable(BlackJack main.cpp Card.cpp Card.h Player.h CardDeck.cpp CardDeck.h Game.cpp Game.h PlayerImpl.h)