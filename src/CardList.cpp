#include "CardList.h"

#include <QDir>
#include <QFile>
#include <QTextStream>

void CardList::ReadCSV() {
    QString path = QDir::currentPath()+"/DominionCardList.csv";
    // checks if file exists
    if (path.isEmpty() == false) {
        QFile file(path);   // initializes file
        // checks if file can be opened
        if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            return;
        }
        file.open(QIODevice::ReadOnly); // opens file
        QTextStream in(&file);  // sets up textstream iterator
        QString line;
        QList<QString> line_parts;
        int line_num = 0;
        // since some cards have rules with multiple lines, this solution
        // is needed to read over multiple lines
        Card card;
        while (in.atEnd() == false) {
            line = in.readLine(0);
            if (line_num > 0) {
                line_parts = line.split("\",\"", QString::SkipEmptyParts);
                for (int i = 0; i<line_parts.size(); i++) {
                    line_parts[i].remove("\"");
                }
                if (line_parts.size() > 1) {    // if line contains basic info
                    card.name = line_parts[0];
                    card.FixName(); // create variable name
                    card.set = line_parts[1];
                    card.type = line_parts[2];
                    card.cost = line_parts[3];
                    card.rules = line_parts[4];
                }
                else {  // if line is an extended description
                    card.rules.append(" "+line.remove("\""));
                }
                // write to database
                hash.insert(card.name_variable, card);
            }
            line_num++;
        }
        file.close();
    }
    names = hash.keys();
    names.sort();
}

void CardList::WriteCPP() {
    QString output = QDir::currentPath()+"/DominionCardList.txt";
    // if file exists, delete it to prevent old data from being present
    if (QFile::exists(output) == true) {
        QFile::remove(output);
    }
    QFile file(output);
    file.open(QIODevice::ReadWrite);
    QTextStream out(&file);

    // text document output begins here
    QString sep = "\"),QString(\"";
    for (int i = 0; i < hash.size(); i++) {
        Card card = hash.value(names[i]);
        card.FixName();
        out << "hash.insert(QString(\""+card.name_variable+
               "\"),Card(QString(\""+card.name+sep+card.set+sep+card.cost+
               sep+card.type+sep+card.rules+"\")));" >> endl;
    }
}

CardList::CardList() {
    hash.insert(QString("AbandonedMine"),Card(QString("Abandoned Mine"),QString("Dark Ages"),QString("$0"),QString("Action - Ruins"),QString("+1 Coin")));
    hash.insert(QString("Adventurer"),Card(QString("Adventurer"),QString("Base"),QString("$6"),QString("Action"),QString("Reveal cards from your deck until you reveal 2 Treasure cards. Put those Treasure cards into your hand and discard the other revealed cards.")));
    hash.insert(QString("Advisor"),Card(QString("Advisor"),QString("Guilds"),QString("$4"),QString("Action"),QString("+1 Action. Reveal the top 3 cards of your deck. The player to your left chooses one of them. Discard that card. Put the other cards into your hand.")));
    hash.insert(QString("Alchemist"),Card(QString("Alchemist"),QString("Alchemy"),QString("$3 1P"),QString("Action"),QString("+2 Cards +1 Action When you discard this from play, you may put this on top of your deck if you have a Potion in play.")));
    hash.insert(QString("Altar"),Card(QString("Altar"),QString("Dark Ages"),QString("$6"),QString("Action"),QString("Trash a card from your hand. Gain a card costing up to 5 Coins.")));
    hash.insert(QString("Ambassador"),Card(QString("Ambassador"),QString("Seaside"),QString("$3"),QString("Action - Attack"),QString("Reveal a card from your hand. Return up to 2 copies of it from your hand to the Supply. Then each other player gains a copy of it.")));
    hash.insert(QString("Apothecary"),Card(QString("Apothecary"),QString("Alchemy"),QString("$2 1P"),QString("Action"),QString("+1 Card +1 Action  Reveal the top 4 cards of your deck. Put the revealed Coppers and Potions into your hand. Put the other cards back on top of your deck in any order.")));
    hash.insert(QString("Apprentice"),Card(QString("Apprentice"),QString("Alchemy"),QString("$5"),QString("Action"),QString("+1 Action Trash a card from your hand. +1 Card per Coin it costs. +2 Cards if it has Potion in its cost.")));
    hash.insert(QString("Armory"),Card(QString("Armory"),QString("Dark Ages"),QString("$4"),QString("Action"),QString("Gain a card costing up to 4 Coins")));
    hash.insert(QString("BagofGold"),Card(QString("Bag of Gold"),QString("Cornucopia"),QString("$0"),QString("Action - Prize"),QString("+1 Action Gain a Gold, putting it on top of your deck. (This is not in the Supply.)")));
    hash.insert(QString("Baker"),Card(QString("Baker"),QString("Guilds"),QString("$5"),QString("Action"),QString("+1 Card. +1 Action. Take a Coin token. — Setup: Each player takes a Coin token.")));
    hash.insert(QString("BanditCamp"),Card(QString("Bandit Camp"),QString("Dark Ages"),QString("$5"),QString("Action"),QString("+1 Card, +2 Actions Gain a Spoils from the Spoils pile.")));
    hash.insert(QString("BandofMisfits"),Card(QString("Band of Misfits"),QString("Dark Ages"),QString("$5"),QString("Action"),QString("Play this as if it were an Action card in the Supply costing less than it that you choose. This is that card until it leaves play.")));
    hash.insert(QString("Bank"),Card(QString("Bank"),QString("Prosperity"),QString("$7"),QString("Treasure"),QString("Worth ? Coins. When you play this, it`s worth 1 Coin per Treasure card you have in play (counting this).")));
    hash.insert(QString("Baron"),Card(QString("Baron"),QString("Intrigue"),QString("$4"),QString("Action"),QString("+1 Buy")));
    hash.insert(QString("Bazaar"),Card(QString("Bazaar"),QString("Seaside"),QString("$5"),QString("Action"),QString("+1 Card")));
    hash.insert(QString("Beggar"),Card(QString("Beggar"),QString("Dark Ages"),QString("$2"),QString("Action - Reaction"),QString("Gain 3 Coppers, putting them into your hand.   When another player plays an Attack card, you may discard this. If you do, gain two Silvers, putting one on top of your deck.")));
    hash.insert(QString("Bishop"),Card(QString("Bishop"),QString("Prosperity"),QString("$4"),QString("Action"),QString("+1 Coin +1 <VP> Trash a card from your hand. +<VP> equal to half its cost in Coins, rounded down. Each other player may trash a card from his hand.")));
    hash.insert(QString("BlackMarket"),Card(QString("Black Market"),QString("Promo"),QString("$3"),QString("Action"),QString("+2 Coins, Reveal the top 3 cards of the Black Market deck. You may buy one of them immediately. Put the unbought cards on the bottom of the Black Market deck in any order.  (Before the game, make a Black Market deck out of one copy of each Kingdom card not in the supply.).")));
    hash.insert(QString("BorderVillage"),Card(QString("Border Village"),QString("Hinterlands"),QString("$6"),QString("Action"),QString("+1 Card +2 Actions   When you gain this, gain a card costing less than this.")));
    hash.insert(QString("Bridge"),Card(QString("Bridge"),QString("Intrigue"),QString("$4"),QString("Action"),QString("+1 Buy")));
    hash.insert(QString("Bureaucrat"),Card(QString("Bureaucrat"),QString("Base"),QString("$4"),QString("Action - Attack"),QString("Gain a silver card")));
    hash.insert(QString("Butcher"),Card(QString("Butcher"),QString("Guilds"),QString("$5"),QString("Action"),QString("Take 2 Coin tokens. You may trash a card from your hand and then pay any number of Coin tokens. If you did trash a card")));
    hash.insert(QString("Cache"),Card(QString("Cache"),QString("Hinterlands"),QString("$5"),QString("Treasure"),QString("Worth 3 Coins   When you gain this, gain two Coppers.")));
    hash.insert(QString("CandlestickMaker"),Card(QString("Candlestick Maker"),QString("Guilds"),QString("$2"),QString("Action"),QString("+1 Action. +1 Buy. Take a Coin token.")));
    hash.insert(QString("Caravan"),Card(QString("Caravan"),QString("Seaside"),QString("$4"),QString("Action - Duration"),QString("+1 Card, +1 Action At the start of your next turn, +1 Card.")));
    hash.insert(QString("Cartographer"),Card(QString("Cartographer"),QString("Hinterlands"),QString("$5"),QString("Action"),QString("+1 Card +1 Action Look at the top 4 cards of your deck. Discard any number of them. Put the rest back on top in any order.")));
    hash.insert(QString("Catacombs"),Card(QString("Catacombs"),QString("Dark Ages"),QString("$5"),QString("Action"),QString("Look at the top 3 cards of your deck. Choose one: Put them into your hand; or discard them and +3 Cards.   When you trash this, gain a cheaper card.")));
    hash.insert(QString("Cellar"),Card(QString("Cellar"),QString("Base"),QString("$2"),QString("Action"),QString("+1 Action")));
    hash.insert(QString("Chancellor"),Card(QString("Chancellor"),QString("Base"),QString("$3"),QString("Action"),QString("+2 Coins")));
    hash.insert(QString("Chapel"),Card(QString("Chapel"),QString("Base"),QString("$2"),QString("Action"),QString("Trash up to 4 cards from your hand.")));
    hash.insert(QString("City"),Card(QString("City"),QString("Prosperity"),QString("$5"),QString("Action"),QString("+1 Card +2 Actions If there are one or more empty Supply piles, +1 Card. If there are two or more, +1 Coin and +1 Buy.")));
    hash.insert(QString("Colony"),Card(QString("Colony"),QString("Prosperity"),QString("$11"),QString("Victory"),QString("10 <VP>.")));
    hash.insert(QString("Conspirator"),Card(QString("Conspirator"),QString("Intrigue"),QString("$4"),QString("Action"),QString("+2 Coins. If you've played 3 or more Actions this turn (counting this): +1 Card")));
    hash.insert(QString("Contraband"),Card(QString("Contraband"),QString("Prosperity"),QString("$5"),QString("Treasure"),QString("Worth 3 Coins. +1 Buy When you play this, the player to your left names a card. You can't buy that card this turn.")));
    hash.insert(QString("Coppersmith"),Card(QString("Coppersmith"),QString("Intrigue"),QString("$4"),QString("Action"),QString("Copper produces an extra 1 Coin this turn.")));
    hash.insert(QString("CouncilRoom"),Card(QString("Council Room"),QString("Base"),QString("$5"),QString("Action"),QString("+4 Cards")));
    hash.insert(QString("Count"),Card(QString("Count"),QString("Dark Ages"),QString("$5"),QString("Action"),QString("Choose one: Discard 2 cards; or put a card from your hand on top of your deck; or gain a Copper. Choose one: +3 Coins; or trash your hand; or gain a Duchy.")));
    hash.insert(QString("Counterfeit"),Card(QString("Counterfeit"),QString("Dark Ages"),QString("$5"),QString("Treasure"),QString("1 Coin +1 Buy When you play this, you may play a Treasure from your hand twice. If you do, trash that Treasure.")));
    hash.insert(QString("CountingHouse"),Card(QString("Counting House"),QString("Prosperity"),QString("$5"),QString("Action"),QString("Look through your discard pile")));
    hash.insert(QString("Courtyard"),Card(QString("Courtyard"),QString("Intrigue"),QString("$2"),QString("Action"),QString("+3 Card")));
    hash.insert(QString("Crossroads"),Card(QString("Crossroads"),QString("Hinterlands"),QString("$2"),QString("Action"),QString("Reveal your hand. +1 Card per Victory card revealed. If this is the first time you played a Crossroads this turn, +3 Actions.")));
    hash.insert(QString("Cultist"),Card(QString("Cultist"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Looter"),QString("+2 Cards Each other player gains a Ruins. You may play a Cultist from your hand.   When you trash this, +3 Cards.")));
    hash.insert(QString("Cutpurse"),Card(QString("Cutpurse"),QString("Seaside"),QString("$4"),QString("Action - Attack"),QString("+2 Coins")));
    hash.insert(QString("DameAnna"),Card(QString("Dame Anna"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Knight"),QString("You may trash up to 2 cards from your hand. Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.")));
    hash.insert(QString("DameJosephine"),Card(QString("Dame Josephine"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Knight - Victory"),QString("2 Victory Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.")));
    hash.insert(QString("DameMolly"),Card(QString("Dame Molly"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Knight"),QString("+2 Actions Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.")));
    hash.insert(QString("DameNatalie"),Card(QString("Dame Natalie"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Knight"),QString("You may gain a card costing up to 3 Coins. Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.")));
    hash.insert(QString("DameSylvia"),Card(QString("Dame Sylvia"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Knight"),QString("+2 Coins Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.")));
    hash.insert(QString("DeathCart"),Card(QString("Death Cart"),QString("Dark Ages"),QString("$4"),QString("Action - Looter"),QString("+5 Coins You may trash an Action card from your hand. If you don't, trash this.   When you gain this, gain 2 Ruins.")));
    hash.insert(QString("Develop"),Card(QString("Develop"),QString("Hinterlands"),QString("$3"),QString("Action"),QString("Trash a card from your hand. Gain a card costing exactly 1 Coin more than it and a card costing exactly 1 less than it")));
    hash.insert(QString("Diadem"),Card(QString("Diadem"),QString("Cornucopia"),QString("$0"),QString("Treasure - Prize"),QString("Worth 2 Coins. When you play this, +1 Coin per unused Action you have (Action, not Action card). (This is not in the Supply.)")));
    hash.insert(QString("Doctor"),Card(QString("Doctor"),QString("Guilds"),QString("$3+"),QString("Action"),QString("Name a card. Reveal the top 3 cards of your deck. Trash the matches. Put the rest back on top in any order. — When you buy this, you may overpay for it. For each $1 you overpaid, look at the top card of your deck; trash it, discard it, or put it back.")));
    hash.insert(QString("Duchess"),Card(QString("Duchess"),QString("Hinterlands"),QString("$2"),QString("Action"),QString("+2 Coins Each player (including you) looks at the top card of his deck, and discards it or puts it back.   In games using this, when you gain a Duchy, you may gain a Duchess.")));
    hash.insert(QString("Duke"),Card(QString("Duke"),QString("Intrigue"),QString("$5"),QString("Victory"),QString("Worth 1 Victory per Duchy you have.")));
    hash.insert(QString("Embargo"),Card(QString("Embargo"),QString("Seaside"),QString("$2"),QString("Action"),QString("+2 Coins")));
    hash.insert(QString("Embassy"),Card(QString("Embassy"),QString("Hinterlands"),QString("$5"),QString("Action"),QString("+5 Cards Discard 3 cards.   When you gain this, each other player gains a Silver.")));
    hash.insert(QString("Envoy"),Card(QString("Envoy"),QString("Promo"),QString("$4"),QString("Action"),QString("Reveal the top 5 cards of your deck. The player to your left chooses one for you to discard. Draw the rest.")));
    hash.insert(QString("Expand"),Card(QString("Expand"),QString("Prosperity"),QString("$7"),QString("Action"),QString("Trash a card from your hand. Gain a card costing up to 3 Coins more than the trashed card.")));
    hash.insert(QString("Explorer"),Card(QString("Explorer"),QString("Seaside"),QString("$5"),QString("Action"),QString("You may reveal a Province card from your hand. If you do")));
    hash.insert(QString("Fairgrounds"),Card(QString("Fairgrounds"),QString("Cornucopia"),QString("$6"),QString("Victory"),QString("Worth 2 VP for every 5 differently named cards in your deck (rounded down)")));
    hash.insert(QString("Familiar"),Card(QString("Familiar"),QString("Alchemy"),QString("$3 1P"),QString("Action - Attack"),QString("+1 Card +1 Action Each other player gains a curse.")));
    hash.insert(QString("FarmingVillage"),Card(QString("Farming Village"),QString("Cornucopia"),QString("$4"),QString("Action"),QString("+2 Actions Reveal cards from the top of your deck until you reveal an Action or Treasure card. Put that card into your hand and discard the other cards.")));
    hash.insert(QString("Farmland"),Card(QString("Farmland"),QString("Hinterlands"),QString("$6"),QString("Victory"),QString("2 VP   When you buy this, trash a card from your hand. Gain a card costing exactly 2 Coins more than the trashed card.")));
    hash.insert(QString("Feast"),Card(QString("Feast"),QString("Base"),QString("$4"),QString("Action"),QString("Trash this card. Gain a card costing up to 5 Coins.")));
    hash.insert(QString("Feodum"),Card(QString("Feodum"),QString("Dark Ages"),QString("$4"),QString("Victory"),QString("Worth 1 Victory for every 3 Silvers in your deck (round down).   When you trash this, gain 3 Silvers.")));
    hash.insert(QString("Festival"),Card(QString("Festival"),QString("Base"),QString("$5"),QString("Action"),QString("+2 Actions")));
    hash.insert(QString("FishingVillage"),Card(QString("Fishing Village"),QString("Seaside"),QString("$3"),QString("Action - Duration"),QString("+2 Actions")));
    hash.insert(QString("Followers"),Card(QString("Followers"),QString("Cornucopia"),QString("$0"),QString("Action - Attack - Prize"),QString("+2 Cards Gain an Estate. Each other player gains a Curse and discards down to 3 cards in hand. (This is not in the Supply.)")));
    hash.insert(QString("FoolsGold"),Card(QString("Fool's Gold"),QString("Hinterlands"),QString("$2"),QString("Treasure - Reaction"),QString("If this is the first time you played a Fool's Gold this turn, this is worth 1 Coin, otherwise it's worth 4 Coins.   When another player gains a Province, you may trash this from your hand. If you do, gain a Gold, putting it on your deck.")));
    hash.insert(QString("Forager"),Card(QString("Forager"),QString("Dark Ages"),QString("$3"),QString("Action"),QString("+1 Action, +1 Buy Trash a card from your hand. +1 Coin per differently named Treasure in the trash.")));
    hash.insert(QString("Forge"),Card(QString("Forge"),QString("Prosperity"),QString("$7"),QString("Action"),QString("Trash any number of cards from your hand. Gain a card with cost exactly equal to the total cost in Coins of the trashed cards.")));
    hash.insert(QString("Fortress"),Card(QString("Fortress"),QString("Dark Ages"),QString("$4"),QString("Action"),QString("+1 Card, +2 Actions   When you trash this, put it into your hand.")));
    hash.insert(QString("FortuneTeller"),Card(QString("Fortune Teller"),QString("Cornucopia"),QString("$3"),QString("Action - Attack"),QString("+2 Coins Each other player reveals cards from the top of his deck until he reveals a Victory or Curse card. He puts it on top and discards the other revealed cards.")));
    hash.insert(QString("Gardens"),Card(QString("Gardens"),QString("Base"),QString("$4"),QString("Victory"),QString("Variable")));
    hash.insert(QString("GhostShip"),Card(QString("Ghost Ship"),QString("Seaside"),QString("$5"),QString("Action - Attack"),QString("+2 Card")));
    hash.insert(QString("Golem"),Card(QString("Golem"),QString("Alchemy"),QString("$4 1P"),QString("Action"),QString("Reveal cards from your deck until you reveal 2 Action cards other than Golem Cards. Discard the other cards, then play the Action cards in either order.")));
    hash.insert(QString("Goons"),Card(QString("Goons"),QString("Prosperity"),QString("$6"),QString("Action - Attack"),QString("+1 Buy +2 Coins Each other player discards down to 3 cards in hand.   While this is in play, when you buy a card, +1 <VP>.")));
    hash.insert(QString("Governor"),Card(QString("Governor"),QString("Promo"),QString("$5"),QString("Action"),QString("+1 Action  Choose one; you get the version in parentheses: Each player gets +1 (+3) Cards; or each player gains a Silver (Gold); or each player may trash a card from his hand and gain a card costing exactly 1 Coin (2 Coins) more.")));
    hash.insert(QString("GrandMarket"),Card(QString("Grand Market"),QString("Prosperity"),QString("$6"),QString("Action"),QString("+1 Card +1 Action +1 Buy +2 Coins   You can't buy this if you have any Copper in play.")));
    hash.insert(QString("Graverobber"),Card(QString("Graverobber"),QString("Dark Ages"),QString("$5"),QString("Action"),QString("Choose one: Gain a card from the trash costing from 3 Coins to 6 Coins")));
    hash.insert(QString("GreatHall"),Card(QString("Great Hall"),QString("Intrigue"),QString("$3"),QString("Action - Victory"),QString("1 Victory")));
    hash.insert(QString("Haggler"),Card(QString("Haggler"),QString("Hinterlands"),QString("$5"),QString("Action"),QString("+2 Coins   While this is in play, when you buy a card, gain a card costing less than it that is not a Victory card.")));
    hash.insert(QString("Hamlet"),Card(QString("Hamlet"),QString("Cornucopia"),QString("$2"),QString("Action"),QString("+1 Card +1 Action  You may discard a card; If you do, +1 Action. You may discard a card; If you do, +1 Buy.")));
    hash.insert(QString("Harem"),Card(QString("Harem"),QString("Intrigue"),QString("$6"),QString("Treasure - Victory"),QString("2 Coins")));
    hash.insert(QString("Harvest"),Card(QString("Harvest"),QString("Cornucopia"),QString("$5"),QString("Action"),QString("Reveal the top 4 cards of your deck")));
    hash.insert(QString("Haven"),Card(QString("Haven"),QString("Seaside"),QString("$2"),QString("Action - Duration"),QString("+1 Card")));
    hash.insert(QString("Herald"),Card(QString("Herald"),QString("Guilds"),QString("$4+"),QString("Action"),QString("+1 Card. +1 Action. Reveal the top card of your deck. If it is an Action, play it. — When you buy this, you may overpay for it. For each $1 you overpaid, look through your discard pile and put a card from it on top of your deck.")));
    hash.insert(QString("Herbalist"),Card(QString("Herbalist"),QString("Alchemy"),QString("$2"),QString("Action"),QString("+1 Buy +1 Coin When you discard this from play, you may put one of your Treasures from play on top of your deck.")));
    hash.insert(QString("Hermit"),Card(QString("Hermit"),QString("Dark Ages"),QString("$3"),QString("Action"),QString("Look through your discard pile. You may trash a card from your discard pile or hand that is not a Treasure. Gain a card costing up to 3 Coins.   When you discard this from play, if you did not buy any cards this turn, trash this and gain a Madman from the Madman pile.")));
    hash.insert(QString("Highway"),Card(QString("Highway"),QString("Hinterlands"),QString("$5"),QString("Action"),QString("+1 Card +1 Action   While this is in play, cards cost 1 Coin less, but not less than 0 Coins.")));
    hash.insert(QString("Hoard"),Card(QString("Hoard"),QString("Prosperity"),QString("$6"),QString("Treasure"),QString("Worth 2 Coins.   While this is in play, when you buy a Victory card, gain a Gold.")));
    hash.insert(QString("HornofPlenty"),Card(QString("Horn of Plenty"),QString("Cornucopia"),QString("$5"),QString("Treasure"),QString("0 Coins When you play this, gain a card costing up to 1 Coin per differently named card you have in play, counting this. If it’s a Victory card, trash this.")));
    hash.insert(QString("HorseTraders"),Card(QString("Horse Traders"),QString("Cornucopia"),QString("$4"),QString("Action - Reaction"),QString("+1 Buy +3 Coins Discard 2 Cards   When another player plays an Attack card, you may set this aside from your hand. If you do, then at the start of your next turn, +1 Card and return this to your hand.")));
    hash.insert(QString("Hovel"),Card(QString("Hovel"),QString("Dark Ages"),QString("$1"),QString("Reaction - Shelter"),QString("When you buy a Victory card")));
    hash.insert(QString("HuntingGrounds"),Card(QString("Hunting Grounds"),QString("Dark Ages"),QString("$6"),QString("Action"),QString("+4 Cards   When you trash this, gain a Duchy or 3 Estates.")));
    hash.insert(QString("HuntingParty"),Card(QString("Hunting Party"),QString("Cornucopia"),QString("$5"),QString("Action"),QString("+1 Card +1 Action Reveal your hand. Reveal cards from your deck until you reveal a card that isn’t a duplicate of one in your hand. Put it into your hand and discard the rest.")));
    hash.insert(QString("IllGottenGains"),Card(QString("Ill-Gotten Gains"),QString("Hinterlands"),QString("$5"),QString("Treasure"),QString("Worth 1 Coin When you play this, you may gain a Copper, putting it into your hand.   When you gain this, each other player gains a Curse.")));
    hash.insert(QString("Inn"),Card(QString("Inn"),QString("Hinterlands"),QString("$5"),QString("Action"),QString("+2 Cards +2 Actions Discard 2 cards.   When you gain this, look through your discard pile (including this), reveal any number of Action cards from it, and shuffle them into your deck.")));
    hash.insert(QString("Ironmonger"),Card(QString("Ironmonger"),QString("Dark Ages"),QString("$4"),QString("Action"),QString("+1 Card, +1 Action Reveal the top card of your deck; you may discard it. Either way, if it is an… Action card, +1 Action Treasure card, +1 Coin Victory card, +1 Card")));
    hash.insert(QString("Ironworks"),Card(QString("Ironworks"),QString("Intrigue"),QString("$4"),QString("Action"),QString("Gain a card costing up to 4 Coins. If it is an... Action card")));
    hash.insert(QString("Island"),Card(QString("Island"),QString("Seaside"),QString("$4"),QString("Action - Victory"),QString("Set aside this and another card from your hand. Return them to your deck at the end of the game.   2 VP")));
    hash.insert(QString("JackofallTrades"),Card(QString("Jack of all Trades"),QString("Hinterlands"),QString("$4"),QString("Action"),QString("Gain a Silver. Look at the top card of your deck; discard it or put it back. Draw until you have 5 cards in hand. You may trash a card from your hand that is not a Treasure.")));
    hash.insert(QString("Jester"),Card(QString("Jester"),QString("Cornucopia"),QString("$5"),QString("Action - Attack"),QString("+2 Coins Each other player discards the top card of his deck. If it’s a Victory card he gains a Curse. Otherwise he gains a copy of the discarded card or you do, your choice.")));
    hash.insert(QString("Journeyman"),Card(QString("Journeyman"),QString("Guilds"),QString("$5"),QString("Action"),QString("Name a card. Reveal cards from the top of your deck until you reveal 3 cards that are not the named card. Put those cards into your hand and discard the rest.")));
    hash.insert(QString("JunkDealer"),Card(QString("Junk Dealer"),QString("Dark Ages"),QString("$5"),QString("Action"),QString("+1 Card, +1 Action, +1 Coin Trash a card from your hand.")));
    hash.insert(QString("KingsCourt"),Card(QString("King's Court"),QString("Prosperity"),QString("$7"),QString("Action"),QString("You may choose an Action card in your hand. Play it three times.")));
    hash.insert(QString("Laboratory"),Card(QString("Laboratory"),QString("Base"),QString("$5"),QString("Action"),QString("+2 Cards")));
    hash.insert(QString("Library"),Card(QString("Library"),QString("Base"),QString("$5"),QString("Action"),QString("Draw until you have 7 cards in hand. You may set aside any Action cards drawn this way")));
    hash.insert(QString("Lighthouse"),Card(QString("Lighthouse"),QString("Seaside"),QString("$2"),QString("Action - Duration"),QString("+1 Action")));
    hash.insert(QString("Loan"),Card(QString("Loan"),QString("Prosperity"),QString("$3"),QString("Treasure"),QString("Worth 1 Coin. When you play this, reveal cards from your deck until you reveal a Treasure. Discard it or trash it. Discard the other cards.")));
    hash.insert(QString("Lookout"),Card(QString("Lookout"),QString("Seaside"),QString("$3"),QString("Action"),QString("+1 Action")));
    hash.insert(QString("Madman"),Card(QString("Madman"),QString("Dark Ages"),QString("$0"),QString("Action"),QString("+2 Actions Return this to the Madman pile. If you do, +1 Card per card in your hand. (This card is not in the supply.)")));
    hash.insert(QString("Mandarin"),Card(QString("Mandarin"),QString("Hinterlands"),QString("$5"),QString("Action"),QString("+3 Coins Put a card from your hand on top of your deck.   When you gain this, put all Treasures you have in play on top of your deck in any order.")));
    hash.insert(QString("Marauder"),Card(QString("Marauder"),QString("Dark Ages"),QString("$4"),QString("Action - Attack - Looter"),QString("Gain a Spoils from the Spoils pile. Each other player gains a Ruins.")));
    hash.insert(QString("Margrave"),Card(QString("Margrave"),QString("Hinterlands"),QString("$5"),QString("Action - Attack"),QString("+3 Cards +1 Buy Each other player draws a card, then discards down to 3 cards in hand.")));
    hash.insert(QString("Market"),Card(QString("Market"),QString("Base"),QString("$5"),QString("Action"),QString("+1 Card")));
    hash.insert(QString("MarketSquare"),Card(QString("Market Square"),QString("Dark Ages"),QString("$3"),QString("Action - Reaction"),QString("+1 Card, +1 Action, +1 Buy   When one of your cards is trashed, you may discard this from your hand. If you do, gain a Gold.")));
    hash.insert(QString("Masquerade"),Card(QString("Masquerade"),QString("Intrigue"),QString("$3"),QString("Action"),QString("+2 Cards  Each player passes a card from his hand to the left at once. Then you may trash a card from your hand.")));
    hash.insert(QString("Masterpiece"),Card(QString("Masterpiece"),QString("Guilds"),QString("$3+"),QString("Treasure"),QString("Worth $1 — When you buy this, you may overpay for it. If you do, gain a Silver per $1 you overpaid.")));
    hash.insert(QString("Menagerie"),Card(QString("Menagerie"),QString("Cornucopia"),QString("$3"),QString("Action"),QString("+1 Action Reveal your hand. If there are no duplicate cards in it, +3 Cards. Otherwise, +1 Card.")));
    hash.insert(QString("Mercenary"),Card(QString("Mercenary"),QString("Dark Ages"),QString("$0"),QString("Action - Attack"),QString("You may trash 2 cards from your hand. If you do")));
    hash.insert(QString("MerchantGuild"),Card(QString("Merchant Guild"),QString("Guilds"),QString("$5"),QString("Action"),QString("+1 Buy. +$1. — While this is in play, when you buy a card, take a Coin token.")));
    hash.insert(QString("MerchantShip"),Card(QString("Merchant Ship"),QString("Seaside"),QString("$5"),QString("Action - Duration"),QString("Now and at the start of your next turn: +2 Coins.")));
    hash.insert(QString("Militia"),Card(QString("Militia"),QString("Base"),QString("$4"),QString("Action - Attack"),QString("+2 Coins")));
    hash.insert(QString("Mine"),Card(QString("Mine"),QString("Base"),QString("$5"),QString("Action"),QString("Trash a Treasure card from your hand. Gain a Treasure card costing up to 3 Coins more")));
    hash.insert(QString("MiningVillage"),Card(QString("Mining Village"),QString("Intrigue"),QString("$4"),QString("Action"),QString("+1 Card")));
    hash.insert(QString("Minion"),Card(QString("Minion"),QString("Intrigue"),QString("$5"),QString("Action - Attack"),QString("+1 Action")));
    hash.insert(QString("Mint"),Card(QString("Mint"),QString("Prosperity"),QString("$5"),QString("Action"),QString("You may reveal a Treasure card from your hand. Gain a copy of it.   When you buy this, trash all Treasures you have in play.")));
    hash.insert(QString("Moat"),Card(QString("Moat"),QString("Base"),QString("$2"),QString("Action - Reaction"),QString("+2 Cards")));
    hash.insert(QString("Moneylender"),Card(QString("Moneylender"),QString("Base"),QString("$4"),QString("Action"),QString("Trash a Copper from your hand. If you do")));
    hash.insert(QString("Monument"),Card(QString("Monument"),QString("Prosperity"),QString("$4"),QString("Action"),QString("+2 Coins")));
    hash.insert(QString("Mountebank"),Card(QString("Mountebank"),QString("Prosperity"),QString("$5"),QString("Action - Attack"),QString("+2 Coins Each other player may discard a Curse. If he doesn't, he gains a Curse and a Copper.")));
    hash.insert(QString("Mystic"),Card(QString("Mystic"),QString("Dark Ages"),QString("$5"),QString("Action"),QString("+1 Action, +2 Coins Name a card. Reveal the top card of your deck. If it's the named card, put it into your hand.")));
    hash.insert(QString("NativeVillage"),Card(QString("Native Village"),QString("Seaside"),QString("$2"),QString("Action"),QString("+2 Actions, Choose one: Set aside the top card of your deck face down on your Native Village mat; or put all the cards from your mat into your hand.   You may look at the cards on your mat at any time; return them to your deck at the end of the game.")));
    hash.insert(QString("Navigator"),Card(QString("Navigator"),QString("Seaside"),QString("$4"),QString("Action"),QString("+2 Coins")));
    hash.insert(QString("Necropolis"),Card(QString("Necropolis"),QString("Dark Ages"),QString("$1"),QString("Action - Shelter"),QString("+2 Actions")));
    hash.insert(QString("NobleBrigand"),Card(QString("Noble Brigand"),QString("Hinterlands"),QString("$4"),QString("Action - Attack"),QString("+1 Coin When you buy this or play it, each other player reveals the top 2 cards of his deck, trashes a revealed Silver or Gold you choose, and discards the rest. If he didn't reveal a Treasure, he gains a Copper. You gain the trashed cards.")));
    hash.insert(QString("Nobles"),Card(QString("Nobles"),QString("Intrigue"),QString("$6"),QString("Action - Victory"),QString("2 Victory")));
    hash.insert(QString("NomadCamp"),Card(QString("Nomad Camp"),QString("Hinterlands"),QString("$4"),QString("Action"),QString("+1 Buy +2 Coins   When you gain this, put it on top of your deck.")));
    hash.insert(QString("Oasis"),Card(QString("Oasis"),QString("Hinterlands"),QString("$3"),QString("Action"),QString("+1 Card +1 Action +1 Coin Discard a card.")));
    hash.insert(QString("Oracle"),Card(QString("Oracle"),QString("Hinterlands"),QString("$3"),QString("Action - Attack"),QString("Each player (including you) reveals the top 2 cards of his deck, and you choose one: either he discards them, or he puts them back on top in an order he chooses. +2 Cards")));
    hash.insert(QString("Outpost"),Card(QString("Outpost"),QString("Seaside"),QString("$5"),QString("Action - Duration"),QString("You only draw 3 cards (instead of 5) in this turn's Clean-up phase. Take an extra turn after this one. This can't cause you to take more than two consecutive turns.")));
    hash.insert(QString("OvergrownEstate"),Card(QString("Overgrown Estate"),QString("Dark Ages"),QString("$1"),QString("Victory - Shelter"),QString("0 Victory   When you trash this, +1 Card.")));
    hash.insert(QString("Pawn"),Card(QString("Pawn"),QString("Intrigue"),QString("$2"),QString("Action"),QString("Choose two: +1 Card")));
    hash.insert(QString("PearlDiver"),Card(QString("Pearl Diver"),QString("Seaside"),QString("$2"),QString("Action"),QString("+1 Card")));
    hash.insert(QString("Peddler"),Card(QString("Peddler"),QString("Prosperity"),QString("$8"),QString("Action"),QString("+1 Card; +1 Action; +1 Coin   During your Buy phase, this costs 2 Coins less per Action card you have in play, but not less than 0 Coins.")));
    hash.insert(QString("PhilosophersStone"),Card(QString("Philosopher's Stone"),QString("Alchemy"),QString("$3 1P"),QString("Treasure"),QString("When you play this, count your deck and discard pile. Worth 1 Coin per 5 cards total between them (rounded down).")));
    hash.insert(QString("Pillage"),Card(QString("Pillage"),QString("Dark Ages"),QString("$5"),QString("Action - Attack"),QString("Trash this. Each other player with 5 or more cards in hand reveals his hand and discards a card that you choose. Gain 2 Spoils from the Spoils pile.")));
    hash.insert(QString("PirateShip"),Card(QString("Pirate Ship"),QString("Seaside"),QString("$4"),QString("Action - Attack"),QString("Choose one: Each other player reveals the top 2 cards of his deck")));
    hash.insert(QString("Platinum"),Card(QString("Platinum"),QString("Prosperity"),QString("$9"),QString("Treasure"),QString("5 Coins.")));
    hash.insert(QString("Plaza"),Card(QString("Plaza"),QString("Guilds"),QString("$4"),QString("Action"),QString("+1 Card. +2 Actions. You may discard a Treasure card. If you do")));
    hash.insert(QString("PoorHouse"),Card(QString("Poor House"),QString("Dark Ages"),QString("$1"),QString("Action"),QString("+4 Coins Reveal your hand. -1 Coin per Treasure card in your hand, to a minimum of 0 Coins.")));
    hash.insert(QString("Possession"),Card(QString("Possession"),QString("Alchemy"),QString("$6 1P"),QString("Action"),QString("The player to your left takes an extra turn after this one, in which you can see all cards he can and make all decisions for him. Any cards he would gain on that turn, you gain instead; any cards of his that are trashed are set aside and returned to his discard pile at end of turn.")));
    hash.insert(QString("Potion"),Card(QString("Potion"),QString("Alchemy"),QString("$4"),QString("Treasure"),QString("Worth 1 Potion.")));
    hash.insert(QString("Princess"),Card(QString("Princess"),QString("Cornucopia"),QString("$0"),QString("Action - Prize"),QString("+1 Buy   While this is in play, cards cost 2 Coins less, but not less than 0 Coins. (This is not in the Supply.)")));
    hash.insert(QString("Procession"),Card(QString("Procession"),QString("Dark Ages"),QString("$4"),QString("Action"),QString("You may play an Action card from your hand twice. Trash it. Gain an Action card costing exactly 1 Coin more than it.")));
    hash.insert(QString("Quarry"),Card(QString("Quarry"),QString("Prosperity"),QString("$4"),QString("Treasure"),QString("Worth 1 Coin.   While this is in play, Action cards cost 2 Coins less, but not less than 0 Coins.")));
    hash.insert(QString("Rabble"),Card(QString("Rabble"),QString("Prosperity"),QString("$5"),QString("Action - Attack"),QString("+3 Cards Each other player reveals the top 3 cards of his deck, discards the revealed Actions and Treasures, and puts the rest back on top in any order he chooses.")));
    hash.insert(QString("Rats"),Card(QString("Rats"),QString("Dark Ages"),QString("$4"),QString("Action"),QString("+1 Card, +1 Action Gain a Rats. Trash a card from your hand other than a Rats (or reveal a hand of all Rats).   When you tash this, +1 Card.")));
    hash.insert(QString("Rebuild"),Card(QString("Rebuild"),QString("Dark Ages"),QString("$5"),QString("Action"),QString("+1 Action  Name a card. Reveal cards from the top of your deck until you reveal a Victory card that is not the named card. Discard the other cards. Trash the Victory card and gain a Victory card costing up to 3 Coins more than it.")));
    hash.insert(QString("Remake"),Card(QString("Remake"),QString("Cornucopia"),QString("$4"),QString("Action"),QString("Do this twice: Trash a card from your hand")));
    hash.insert(QString("Remodel"),Card(QString("Remodel"),QString("Base"),QString("$4"),QString("Action"),QString("Trash a card from your hand. Gain a card costing up to 2 Coins more than the trashed card.")));
    hash.insert(QString("Rogue"),Card(QString("Rogue"),QString("Dark Ages"),QString("$5"),QString("Action - Attack"),QString("+2 Coins If there are any cards in the trash costing from 3 Coins to 6 Coins, gain one of them. Otherwise, each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest.")));
    hash.insert(QString("RoyalSeal"),Card(QString("Royal Seal"),QString("Prosperity"),QString("$5"),QString("Treasure"),QString("Worth 2 Coins.   While this is in play, when you gain a card, you may put that card on top of your deck.")));
    hash.insert(QString("RuinedLibrary"),Card(QString("Ruined Library"),QString("Dark Ages"),QString("$0"),QString("Action - Ruins"),QString("+1 Card")));
    hash.insert(QString("RuinedMarket"),Card(QString("Ruined Market"),QString("Dark Ages"),QString("$0"),QString("Action - Ruins"),QString("+1 Buy")));
    hash.insert(QString("RuinedVillage"),Card(QString("Ruined Village"),QString("Dark Ages"),QString("$0"),QString("Action - Ruins"),QString("+1 Action")));
    hash.insert(QString("Saboteur"),Card(QString("Saboteur"),QString("Intrigue"),QString("$5"),QString("Action - Attack"),QString("Each other player reveals cards from the top of his deck until revealing one costing 3 Coins or more. He trashes that card and may gain a card costing at most 2 Coins less than it. He discards the other revealed cards.")));
    hash.insert(QString("Sage"),Card(QString("Sage"),QString("Dark Ages"),QString("$3"),QString("Action"),QString("+1 Action Reveal cards from the top of your deck until you reveal one costing 3 Coins or more. Put that card into your hand and discard the rest.")));
    hash.insert(QString("Salvager"),Card(QString("Salvager"),QString("Seaside"),QString("$4"),QString("Action"),QString("+1 Buy")));
    hash.insert(QString("Scavenger"),Card(QString("Scavenger"),QString("Dark Ages"),QString("$4"),QString("Action"),QString("+1 Coins You may put your deck into your discard pile. Look through your discard pile and put one card from it on top of your deck.")));
    hash.insert(QString("Scheme"),Card(QString("Scheme"),QString("Hinterlands"),QString("$3"),QString("Action"),QString("+1 Card +1 Action At the start of Clean-up this turn, you may choose an Action card you have in play. If you discard it from play this turn, put it on your deck.")));
    hash.insert(QString("Scout"),Card(QString("Scout"),QString("Intrigue"),QString("$4"),QString("Action"),QString("+1 Action. Reveal the top 4 cards of your deck. Put the revealed Victory cards into your hand. Put the other cards on top of your deck in any order.")));
    hash.insert(QString("ScryingPool"),Card(QString("Scrying Pool"),QString("Alchemy"),QString("$2 1P"),QString("Action - Attack"),QString("+1 Action Each player (including you) reveals the top card of his deck and either discards it or puts it back, your choice. Then reveal cards from the top of your deck until revealing one that isn't an Action. Put all of your revealed cards into your hand.")));
    hash.insert(QString("SeaHag"),Card(QString("Sea Hag"),QString("Seaside"),QString("$4"),QString("Action - Attack"),QString("Each other player discards the top card of his deck")));
    hash.insert(QString("SecretChamber"),Card(QString("Secret Chamber"),QString("Intrigue"),QString("$2"),QString("Action - Reaction"),QString("Discard any number of cards. +1 Coin per card discarded. - When another player plays an Attack card")));
    hash.insert(QString("ShantyTown"),Card(QString("Shanty Town"),QString("Intrigue"),QString("$3"),QString("Action"),QString("+2 Actions")));
    hash.insert(QString("SilkRoad"),Card(QString("Silk Road"),QString("Hinterlands"),QString("$4"),QString("Victory"),QString("Worth 1 VP for every 4 Victory cards in your deck (round down).")));
    hash.insert(QString("SirBailey"),Card(QString("Sir Bailey"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Knight"),QString("+1 Card, +1 Action Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.")));
    hash.insert(QString("SirDestry"),Card(QString("Sir Destry"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Knight"),QString("+2 Cards Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.")));
    hash.insert(QString("SirMartin"),Card(QString("Sir Martin"),QString("Dark Ages"),QString("$4"),QString("Action - Attack - Knight"),QString("+2 Buys Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.")));
    hash.insert(QString("SirMichael"),Card(QString("Sir Michael"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Knight"),QString("Each other player discards down to 3 cards in hand. Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.")));
    hash.insert(QString("SirVander"),Card(QString("Sir Vander"),QString("Dark Ages"),QString("$5"),QString("Action - Attack - Knight"),QString("Each other player reveals the top 2 cards of his deck, trashes one of them costing from 3 Coins to 6 Coins, and discards the rest. If a Knight is trashed by this, trash this card.   When you trash this, gain a Gold.")));
    hash.insert(QString("Smithy"),Card(QString("Smithy"),QString("Base"),QString("$4"),QString("Action"),QString("+3 Cards.")));
    hash.insert(QString("Smugglers"),Card(QString("Smugglers"),QString("Seaside"),QString("$3"),QString("Action"),QString("Gain a copy of a card costing up to 6 Coins that the player to your right gained on his last turn.")));
    hash.insert(QString("Soothsayer"),Card(QString("Soothsayer"),QString("Guilds"),QString("$5"),QString("Action – Attack"),QString("Gain a Gold. Each other player gains a Curse. Each player who did draws a card.")));
    hash.insert(QString("SpiceMerchant"),Card(QString("Spice Merchant"),QString("Hinterlands"),QString("$4"),QString("Action"),QString("You may trash a Treasure from your hand. If you do, choose one: +2 Cards and +1 Action; or +2 Coins and +1 Buy.")));
    hash.insert(QString("Spoils"),Card(QString("Spoils"),QString("Dark Ages"),QString("$0"),QString("Treasure"),QString("3 Coins When you play this, return it to the Spoils pile. (This is not in the Supply.)")));
    hash.insert(QString("Spy"),Card(QString("Spy"),QString("Base"),QString("$4"),QString("Action - Attack"),QString("+1 Card +1 Action  Each player (including you) reveals the top card of his deck and either discards it or puts it back, your choice.")));
    hash.insert(QString("Squire"),Card(QString("Squire"),QString("Dark Ages"),QString("$2"),QString("Action"),QString("+1 Coin Choose one: +2 Actions; or +2 Buys; or gain a Silver.   When you trash this, gain an Attack card.")));
    hash.insert(QString("Stables"),Card(QString("Stables"),QString("Hinterlands"),QString("$5"),QString("Action"),QString("You may discard a Treasure. If you do")));
    hash.insert(QString("Stash"),Card(QString("Stash"),QString("Promo"),QString("$5"),QString("Treasure"),QString("Worth 2 Coins. When you shuffle")));
    hash.insert(QString("Steward"),Card(QString("Steward"),QString("Intrigue"),QString("$3"),QString("Action"),QString("Choose one: +2 Cards")));
    hash.insert(QString("Stonemason"),Card(QString("Stonemason"),QString("Guilds"),QString("$2+"),QString("Action"),QString("Trash a card from your hand. Gain 2 cards each costing less than it. — When you buy this, you may overpay for it. If you do, gain 2 Action cards each costing the amount you overpaid.")));
    hash.insert(QString("Storeroom"),Card(QString("Storeroom"),QString("Dark Ages"),QString("$3"),QString("Action"),QString("+1 Buy Discard any number of cards. +1 Card per card discarded. Discard any number of cards. +1 Coin per card discarded the second time.")));
    hash.insert(QString("Survivors"),Card(QString("Survivors"),QString("Dark Ages"),QString("$0"),QString("Action - Ruins"),QString("Look at the top 2 cards of your deck. Discard them or put them back in any order.")));
    hash.insert(QString("Swindler"),Card(QString("Swindler"),QString("Intrigue"),QString("$3"),QString("Action - Attack"),QString("+2 Coins")));
    hash.insert(QString("Tactician"),Card(QString("Tactician"),QString("Seaside"),QString("$5"),QString("Action - Duration"),QString("Discard your hand. If you discarded any cards this way")));
    hash.insert(QString("Talisman"),Card(QString("Talisman"),QString("Prosperity"),QString("$4"),QString("Treasure"),QString("Worth 1 Coin.   While this is in play, when you buy a card costing 4 Coins or less that is not a Victory card, gain a copy of it.")));
    hash.insert(QString("Taxman"),Card(QString("Taxman"),QString("Guilds"),QString("$4"),QString("Action – Attack"),QString("You may trash a Treasure from your hand. Each other player with 5 or more cards in hand discards a copy of it (or reveals a hand without it). Gain a Treasure card costing up to $3 more than the trashed card")));
    hash.insert(QString("Thief"),Card(QString("Thief"),QString("Base"),QString("$4"),QString("Action - Attack"),QString("Each other player reveals the top 2 cards of his deck. If they revealed any Treasure cards")));
    hash.insert(QString("ThroneRoom"),Card(QString("Throne Room"),QString("Base"),QString("$4"),QString("Action"),QString("Choose an Action card in your hand. Play it twice.")));
    hash.insert(QString("Torturer"),Card(QString("Torturer"),QString("Intrigue"),QString("$5"),QString("Action - Attack"),QString("+3 Card")));
    hash.insert(QString("Tournament"),Card(QString("Tournament"),QString("Cornucopia"),QString("$4"),QString("Action"),QString("+1 Action Each player may reveal a Province from his hand. If you do, discard it and gain a Prize (from the Prize pile) or a Duchy, putting it on top of your deck. If no-one else does, +1 Card +1 Coin.")));
    hash.insert(QString("TradeRoute"),Card(QString("Trade Route"),QString("Prosperity"),QString("$3"),QString("Action"),QString("+1 Buy +1 Coin per token on the Trade Route mat. Trash a card from your hand.   Setup: Put a token on each Victory card Supply pile. When a card is gained from that pile, move the token to the Trade Route mat.")));
    hash.insert(QString("Trader"),Card(QString("Trader"),QString("Hinterlands"),QString("$4"),QString("Action - Reaction"),QString("Trash a card from your hand. Gain a number of Silvers equal to its cost in Coins.   When you would gain a card, you may reveal this from your hand. If you do, instead, gain a silver.")));
    hash.insert(QString("TradingPost"),Card(QString("Trading Post"),QString("Intrigue"),QString("$5"),QString("Action"),QString("Trash 2 cards from your hand. If you do")));
    hash.insert(QString("Transmute"),Card(QString("Transmute"),QString("Alchemy"),QString("$0 1P"),QString("Action"),QString("Trash a card from your hand. If it is an... Action card, gain a Duchy Treasure card, gain a Transmute Victory card, gain a Gold")));
    hash.insert(QString("TreasureMap"),Card(QString("Treasure Map"),QString("Seaside"),QString("$4"),QString("Action"),QString("Trash this and another copy of Treasure Map from your hand. If you do trash two Treasure Maps")));
    hash.insert(QString("Treasury"),Card(QString("Treasury"),QString("Seaside"),QString("$5"),QString("Action"),QString("+1 Card")));
    hash.insert(QString("Tribute"),Card(QString("Tribute"),QString("Intrigue"),QString("$5"),QString("Action"),QString("The player to your left reveals then discards the top 2 cards of his deck. For each differently named card revealed")));
    hash.insert(QString("TrustySteed"),Card(QString("Trusty Steed"),QString("Cornucopia"),QString("$0"),QString("Action - Prize"),QString("Choose two: +2 Cards; +2 Actions; +2 Coins; gain 4 Silvers and put your deck into your discard pile. (The choices must be different)  (This is not in the Supply.)")));
    hash.insert(QString("Tunnel"),Card(QString("Tunnel"),QString("Hinterlands"),QString("$3"),QString("Victory - Reaction"),QString("2 VP [large shield]   When you discard this other than during a Clean-up phase, you may reveal it. If you do, gain a Gold.")));
    hash.insert(QString("University"),Card(QString("University"),QString("Alchemy"),QString("$2 1P"),QString("Action"),QString("+2 Actions You may gain an Action card costing up to 5 Coins.")));
    hash.insert(QString("Upgrade"),Card(QString("Upgrade"),QString("Intrigue"),QString("$5"),QString("Action"),QString("+1 Card")));
    hash.insert(QString("Urchin"),Card(QString("Urchin"),QString("Dark Ages"),QString("$3"),QString("Action - Attack"),QString("+1 Card, +1 Action Each other player discards down to 4 cards in hand.   When you play another Attack card with this in play, you may trash this. If you do, gain a mercenary from the Mercenary pile.")));
    hash.insert(QString("Vagrant"),Card(QString("Vagrant"),QString("Dark Ages"),QString("$2"),QString("Action"),QString("+1 Card, +1 Action Reveal the top card of your deck. If it's a Curse, Ruins, Shelter, or Victory card, put it into your hand.")));
    hash.insert(QString("Vault"),Card(QString("Vault"),QString("Prosperity"),QString("$5"),QString("Action"),QString("+2 Cards Discard any number of cards. +1 Coin per card discarded. Each other player may discard 2 cards. If he does, he draws a card.")));
    hash.insert(QString("Venture"),Card(QString("Venture"),QString("Prosperity"),QString("$5"),QString("Treasure"),QString("Worth 1 Coin. When you play this, reveal cards from your deck until you reveal a Treasure. Discard the other cards. Play that Treasure.")));
    hash.insert(QString("Village"),Card(QString("Village"),QString("Base"),QString("$3"),QString("Action"),QString("+1 Card")));
    hash.insert(QString("Vineyard"),Card(QString("Vineyard"),QString("Alchemy"),QString("$0 1P"),QString("Victory"),QString("Worth 1 Victory for every 3 Action cards in your deck (rounded down).")));
    hash.insert(QString("WalledVillage"),Card(QString("Walled Village"),QString("Promo"),QString("$4"),QString("Action"),QString("+1 Card +2 Actions   At the start of Clean-up, if you have this and no more than one other Action card in play, you may put this on top of your deck.")));
    hash.insert(QString("WanderingMinstrel"),Card(QString("Wandering Minstrel"),QString("Dark Ages"),QString("$4"),QString("Action"),QString("+1 Card, +2 Actions Reveal the top 3 cards of your deck. Put the Actions back on top in any order and discard the rest.")));
    hash.insert(QString("Warehouse"),Card(QString("Warehouse"),QString("Seaside"),QString("$3"),QString("Action"),QString("+3 Card")));
    hash.insert(QString("Watchtower"),Card(QString("Watchtower"),QString("Prosperity"),QString("$3"),QString("Reaction"),QString("Draw until you have 6 cards in hand.   When you gain a card, you may reveal this from your hand. If you do, either trash that card, or put it on top of your deck.")));
    hash.insert(QString("Wharf"),Card(QString("Wharf"),QString("Seaside"),QString("$5"),QString("Action - Duration"),QString("Now and at the start of your next turn: +2 Cards")));
    hash.insert(QString("WishingWell"),Card(QString("Wishing Well"),QString("Intrigue"),QString("$3"),QString("Action"),QString("+1 Card")));
    hash.insert(QString("Witch"),Card(QString("Witch"),QString("Base"),QString("$5"),QString("Action - Attack"),QString("+2 Cards")));
    hash.insert(QString("Woodcutter"),Card(QString("Woodcutter"),QString("Base"),QString("$3"),QString("Action"),QString("+1 Buy")));
    hash.insert(QString("WorkersVillage"),Card(QString("Worker's Village"),QString("Prosperity"),QString("$4"),QString("Action"),QString("+1 Card +2 Actions +1 Buy")));
    hash.insert(QString("Workshop"),Card(QString("Workshop"),QString("Base"),QString("$3"),QString("Action"),QString("Gain a card costing up to 4 Coins.")));
    hash.insert(QString("YoungWitch"),Card(QString("Young Witch"),QString("Cornucopia"),QString("$4"),QString("Action - Attack"),QString("+2 Cards  Discard 2 cards. Each other player may reveal a Bane card from his hand. If he doesn’t, he gains a Curse.   Setup: Add an extra Kingdom card pile costing 2 Coins or 3 Coins to the Supply. Cards from that pile are Bane cards.")));

    names = hash.keys();
    names.sort();
}
