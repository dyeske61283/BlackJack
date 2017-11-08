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
    virtual ~CardDeck(){}
    CardDeck(){init();}
private:
    std::list<std::string> CardColour = {"C","H","P","K"};
    std::list<std::string> CardRank = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
    std::vector<Card> Cards;
    void init();
};


//int Card::getValueOfCard()
//{
//    return this->valueMap.at(this->rank);
//}
//
//
//std::map<std::string, int> Card::valueMap = {{CardName::Ace, 11},
//                                             {CardName::Two, 2},
//                                             {CardName::Three, 3},
//                                             {CardName::Four, 4},
//                                             {CardName::Five, 5},
//                                             {CardName::Six, 6},
//                                             {CardName::Seven, 7},
//                                             {CardName::Eight, 8},
//                                             {CardName::Nine, 9},
//                                             {CardName::Ten, 10},
//                                             {CardName::Jack, 10},
//                                             {CardName::Queen, 10},
//                                             {CardName::King, 10}};


#endif //BLACKJACK_CARDDECK_H
