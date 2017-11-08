//
// Created by kevin on 08.11.2017.
//

#include "Game.h"


Player& Game::getCurrentPlayer()
{
    return this->p1;
}

void Game::setPointsForPlayer(Player& p)
{
    int sum = 0;
    for(Card c : p.getCards())
    {
        sum += valueMap.find(c.getRank())->second;
    }
    p.setPoints(sum);
}

std::map<std::string, int> Game::valueMap = {{"A", 11},
                                             {"2", 2},
                                             {"3", 3},
                                             {"4", 4},
                                             {"5", 5},
                                             {"6", 6},
                                             {"7", 7},
                                             {"8", 8},
                                             {"9", 9},
                                             {"10", 10},
                                             {"J", 10},
                                             {"Q", 10},
                                             {"K", 10}};

void Game::start() {
    //TODO Draw Cards for Player
    //TODO Draw Card for Game
    //TODO start state machines (1 for game itself and 1 for either the players turn, or the games turn (dealer))
}

void Game::setup() {
    //TODO
    deck.shuffle();
    //TODO ????
}
