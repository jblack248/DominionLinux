#include "Card.h"

Card::Card() {

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
    name_variable = name.remove(" ");
    name_variable = name.remove("\'");
    name_variable = name.remove("-");
}
