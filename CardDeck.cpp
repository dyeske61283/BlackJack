//
// Created by Kevin Dyes on 28.10.17.
//

#include "CardDeck.h"


void CardDeck::shuffle()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    std::shuffle(Cards.begin(), Cards.end(), std::default_random_engine(seed));
}

void CardDeck::init()
{
    for(std::string c :  CardColour)
    {
        for(std::string r : CardRank)
        {
            Cards.push_back(Card(c,r));
        }
    }
}

std::string CardDeck::toString()
{
    std::stringstream s;

    s << "Deck contains the following cards: " << std::endl;

    for(Card c : Cards)
    {
        s << c.toString() << std::endl;
    }

    return s.str();
}