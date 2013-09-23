#ifndef CARDLIST_H
#define CARDLIST_H

#include "Card.h"

class CardList
// Currently, the functions in this class are heavily dependent on class Card
// and the layout of the DominionCardList.csv. Thankfully, this should not need
// to be used very often once the data structures are finalized.
{
public:
    CardList();

    QStringList names;
    QHash<QString, Card> hash;

    void ReadCSV();
    void WriteCPP();
};

#endif // CARDLIST_H
