#ifndef CARD_H
#define CARD_H

#include <QHash>
#include <QString>
#include <QStringList>

class Card
{
public:
    Card();
    Card(QString theName, QString theSet, QString theCost, QString theType,
         QString theRules);

    QString name, cost, set, type, rules;
    QString name_variable;

    void FixName();
    void Set(const QString &theName, const QString &theSet,
             const QString &theCost, const QString &theType,
             const QString &theRules);
};

#endif // CARD_H
