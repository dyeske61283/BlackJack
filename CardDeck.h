//
// Created by Kevin Dyes on 28.10.17.
//

#ifndef BLACKJACK_CARDDECK_H
#define BLACKJACK_CARDDECK_H

#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock
#include <list>
#include "Card.h"
#include <algorithm>

class CardDeck
{
public:
    void shuffle();
    std::string toString();
    virtual ~CardDeck() = default;
    CardDeck(){init();}
    Card& draw();
private:
    std::list<std::string> CardColour = {"D","H","S","C"};
    std::list<std::string> CardRank = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    std::vector<Card> Cards;
    void init();
};
#endif //BLACKJACK_CARDDECK_H
