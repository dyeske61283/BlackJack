//
// Created by kevin on 08.11.2017.
//

#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H


#include "Player.h"
#include "CardDeck.h"
#include "PlayerImpl.h"

class Game {
private:
    PlayerImpl p1;
    static std::map<std::string, int> valueMap;
    CardDeck deck;
public:
    virtual ~Game() = default;
    Game() = default;
    Player& getCurrentPlayer();
    void setPointsForPlayer(Player& p);
    void setup();
    void start();
};

#endif //BLACKJACK_GAME_H
