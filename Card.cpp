//
// Created by Kevin Dyes on 27.10.17.
//

#include "Card.h"

std::string Card::toString()
{
    std::stringstream s;

    s << this->colour << this->name;


    return s.str();
}

int Card::getValue()
{
    return valueMap.at(this->name);
}


std::map<CardName, int> Card::valueMap = {{CardName::Ace, 11},
                                          {CardName::Two, 2},
                                          {CardName::Three, 3},
                                          {CardName::Four, 4},
                                          {CardName::Five, 5},
                                          {CardName::Six, 6},
                                          {CardName::Seven, 7},
                                          {CardName::Eight, 8},
                                          {CardName::Nine, 9},
                                          {CardName::Ten, 10},
                                          {CardName::Jack, 10},
                                          {CardName::Queen, 10},
                                          {CardName::King, 10}};