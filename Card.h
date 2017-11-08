//
// Created by Kevin Dyes on 27.10.17.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H


#include <string>
#include <sstream>
#include <iostream>
#include <map>
#include <list>

class Card
{
public:
    Card(){}
    Card(std::string rank, std::string colour) : rank(rank), colour(colour){}
    virtual ~Card(){}

    std::string toString();
    int getValueOfCard();

private:
    static std::map<std::string, int> valueMap;
    std::string rank;
    std::string colour;
};
#endif //BLACKJACK_CARD_H
