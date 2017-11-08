//
// Created by Kevin Dyes on 28.10.17.
//

#ifndef BLACKJACK_PERSON_H
#define BLACKJACK_PERSON_H

#include <vector>
#include "Card.h"

class Person
{
public:
    virtual ~Person(){}

    virtual std::vector<Card> getCards() = 0;
    virtual void stay() = 0;
    virtual void takeCard() = 0;

};

#endif //BLACKJACK_PERSON_H
