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

    Card AbandonedMine, Adventurer, Advisor, Alchemist, Altar, Ambassador, Apothecary, Apprentice, Armory, BagofGold, Baker, BanditCamp, BandofMisfits, Bank, Baron, Bazaar, Beggar, Bishop, BlackMarket, BorderVillage, Bridge, Bureaucrat, Butcher, Cache, CandlestickMaker, Caravan, Cartographer, Catacombs, Cellar, Chancellor, Chapel, City, Colony, Conspirator, Contraband, Coppersmith, CouncilRoom, Count, Counterfeit, CountingHouse, Courtyard, Crossroads, Cultist, Cutpurse, DameAnna, DameJosephine, DameMolly, DameNatalie, DameSylvia, DeathCart, Develop, Diadem, Doctor, Duchess, Duke, Embargo, Embassy, Envoy, Expand, Explorer, Fairgrounds, Familiar, FarmingVillage, Farmland, Feast, Feodum, Festival, FishingVillage, Followers, FoolsGold, Forager, Forge, Fortress, FortuneTeller, Gardens, GhostShip, Golem, Goons, Governor, GrandMarket, Graverobber, GreatHall, Haggler, Hamlet, Harem, Harvest, Haven, Herald, Herbalist, Hermit, Highway, Hoard, HornofPlenty, HorseTraders, Hovel, HuntingGrounds, HuntingParty, IllGottenGains, Inn, Ironmonger, Ironworks, Island, JackofallTrades, Jester, Journeyman, JunkDealer, KingsCourt, Laboratory, Library, Lighthouse, Loan, Lookout, Madman, Mandarin, Marauder, Margrave, Market, MarketSquare, Masquerade, Masterpiece, Menagerie, Mercenary, MerchantGuild, MerchantShip, Militia, Mine, MiningVillage, Minion, Mint, Moat, Moneylender, Monument, Mountebank, Mystic, NativeVillage, Navigator, Necropolis, NobleBrigand, Nobles, NomadCamp, Oasis, Oracle, Outpost, OvergrownEstate, Pawn, PearlDiver, Peddler, PhilosophersStone, Pillage, PirateShip, Platinum, Plaza, PoorHouse, Possession, Potion, Princess, Procession, Quarry, Rabble, Rats, Rebuild, Remake, Remodel, Rogue, RoyalSeal, RuinedLibrary, RuinedMarket, RuinedVillage, Saboteur, Sage, Salvager, Scavenger, Scheme, Scout, ScryingPool, SeaHag, SecretChamber, ShantyTown, SilkRoad, SirBailey, SirDestry, SirMartin, SirMichael, SirVander, Smithy, Smugglers, Soothsayer, SpiceMerchant, Spoils, Spy, Squire, Stables, Stash, Steward, Stonemason, Storeroom, Survivors, Swindler, Tactician, Talisman, Taxman, Thief, ThroneRoom, Torturer, Tournament, TradeRoute, Trader, TradingPost, Transmute, TreasureMap, Treasury, Tribute, TrustySteed, Tunnel, University, Upgrade, Urchin, Vagrant, Vault, Venture, Village, Vineyard, WalledVillage, WanderingMinstrel, Warehouse, Watchtower, Wharf, WishingWell, Witch, Woodcutter, WorkersVillage, Workshop, YoungWitch;
};

#endif // CARDLIST_H
