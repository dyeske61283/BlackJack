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
    Card() = default;
    Card(std::string& rank, std::string& colour) : rank(rank), colour(colour){}
    virtual ~Card() = default;

    std::string toString();
    std::string getRank();
    std::string getColour();

private:
    std::string rank;
    std::string colour;
};
#endif //BLACKJACK_CARD_H
