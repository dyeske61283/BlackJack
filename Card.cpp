//
// Created by Kevin Dyes on 27.10.17.
//

#include "Card.h"

std::string Card::toString()
{
    std::stringstream s;

    s << this->colour << this->rank;


    return s.str();
}