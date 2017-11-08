//
// Created by kevin on 08.11.2017.
//

#ifndef BLACKJACK_PLAYERIMPL_H
#define BLACKJACK_PLAYERIMPL_H


#include "Player.h"

class PlayerImpl : public Player
{
private:
    std::vector<Card> hand;
    int currentPoints = 0;
public:
    ~PlayerImpl() override {hand.clear();}
    PlayerImpl() = default;

    std::vector<Card> getCards() override;

    int getPoints() override;

    void setPoints(int p) override;

    void addCard(Card &c) override;
};

std::vector<Card> PlayerImpl::getCards() {
    return hand;
}

int PlayerImpl::getPoints() {
    return currentPoints;
}

void PlayerImpl::setPoints(int p) {
    this->currentPoints = p;
}

void PlayerImpl::addCard(Card &c) {
    this->hand.push_back(c);
}

#endif //BLACKJACK_PLAYERIMPL_H
