#include "Card.h"

Card::Card() {

}

Card::Card(QString theName, QString theSet, QString theCost, QString theType,
           QString theRules) {
    name = theName;
    set = theSet;
    cost = theCost;
    type = theType;
    rules = theRules;

    FixName();
}

void Card::Set(const QString &theName, const QString &theSet,
               const QString &theCost, const QString &theType,
               const QString &theRules)
{
    name  = theName;
    cost  = theCost;
    set   = theSet;
    type  = theType;
    rules = theRules;
}

void Card::FixName() {
    name_variable = name;
    name_variable.remove(" ");
    name_variable.remove("\'");
    name_variable.remove("-");
}
