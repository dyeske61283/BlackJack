//
// Created by Kevin Dyes on 28.10.17.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H

#include <vector>
#include "Card.h"

class Player
{
public:
    virtual ~Player() = default;

    virtual std::vector<Card> getCards() = 0;
    virtual void addCard(Card& c) = 0;
    virtual int getPoints() = 0;
    virtual void setPoints(int p) = 0;

};

#endif //BLACKJACK_PLAYER_H
