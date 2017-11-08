#include <iostream>
#include <vector>
#include "CardDeck.h"

int main()
{
    //Create new Card Deck
    CardDeck cd;

    std::cout << cd.toString();

    cd.shuffle();

    std::cout << cd.toString();
}