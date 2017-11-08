//
// Created by Kevin Dyes on 28.10.17.
//

#ifndef BLACKJACK_CARDDECK_H
#define BLACKJACK_CARDDECK_H

#include "boost/random.hpp"
#include <list>

class CardDeck
{
public:
    void shuffle();
    std::string toString();
private:
    std::list<std::string> CardColour = {"C","H","P","K"};
    std::list<std::string> CardRank = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    std::list<std::string> Cards;
    void init();
};


#endif //BLACKJACK_CARDDECK_H
