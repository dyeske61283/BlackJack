//
// Created by Kevin Dyes on 27.10.17.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H


#include <string>

class Card
{
public:
    Card(){}
    virtual ~Card(){}

    std::string toString();
private:
    int value;
    std::string name;
    int colour;
};


#endif //BLACKJACK_CARD_H
