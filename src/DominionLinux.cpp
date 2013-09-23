#include "DominionLinux.h"
#include "ui_DominionLinux.h"


DominionLinux::DominionLinux(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::DominionLinux)
{
	ui->setupUi(this);
	this->setStyleSheet("QProgressBar{"
				   "border: 1px solid transparent;"
				   "text-align: bottom center;"
				   "color:rgba(0,0,0,200);"
				   "border-radius: 5px;"
				   "background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(182, 182, 182, 0), stop:1 rgba(209, 209, 209, 0));"
				       "}"
				   "QProgressBar::chunk{"
				   "background-color: rgba(255,255,222,111);"
                   "}");
	list_Button = new QList<QToolButton *>();
	list_String = new QStringList();
	list_Slots = new QList<const char*>;
	createList();
	createCards(*list_String);
	createExample(*list_String);
}
DominionLinux::~DominionLinux()
{
	delete ui;
}


//List generated via Python script, "Generate Source File.txt". Puts them in alphabetical order
void DominionLinux::createList()
{
	card_AbandonedMine=new QToolButton;list_Button->append(card_AbandonedMine);list_String->append("AbandonedMine");list_Slots->append(SLOT(SLOTcard_AbandonedMine(bool)));
	card_Adventurer=new QToolButton;list_Button->append(card_Adventurer);list_String->append("Adventurer");list_Slots->append(SLOT(SLOTcard_Adventurer(bool)));
	card_Advisor=new QToolButton;list_Button->append(card_Advisor);list_String->append("Advisor");list_Slots->append(SLOT(SLOTcard_Advisor(bool)));
	card_Alchemist=new QToolButton;list_Button->append(card_Alchemist);list_String->append("Alchemist");list_Slots->append(SLOT(SLOTcard_Alchemist(bool)));
	card_Altar=new QToolButton;list_Button->append(card_Altar);list_String->append("Altar");list_Slots->append(SLOT(SLOTcard_Altar(bool)));
	card_Ambassador=new QToolButton;list_Button->append(card_Ambassador);list_String->append("Ambassador");list_Slots->append(SLOT(SLOTcard_Ambassador(bool)));
	card_Apothecary=new QToolButton;list_Button->append(card_Apothecary);list_String->append("Apothecary");list_Slots->append(SLOT(SLOTcard_Apothecary(bool)));
	card_Apprentice=new QToolButton;list_Button->append(card_Apprentice);list_String->append("Apprentice");list_Slots->append(SLOT(SLOTcard_Apprentice(bool)));
	card_Armory=new QToolButton;list_Button->append(card_Armory);list_String->append("Armory");list_Slots->append(SLOT(SLOTcard_Armory(bool)));
	card_BagofGold=new QToolButton;list_Button->append(card_BagofGold);list_String->append("BagofGold");list_Slots->append(SLOT(SLOTcard_BagofGold(bool)));
	card_Baker=new QToolButton;list_Button->append(card_Baker);list_String->append("Baker");list_Slots->append(SLOT(SLOTcard_Baker(bool)));
	card_BanditCamp=new QToolButton;list_Button->append(card_BanditCamp);list_String->append("BanditCamp");list_Slots->append(SLOT(SLOTcard_BanditCamp(bool)));
	card_BandofMisfits=new QToolButton;list_Button->append(card_BandofMisfits);list_String->append("BandofMisfits");list_Slots->append(SLOT(SLOTcard_BandofMisfits(bool)));
	card_Bank=new QToolButton;list_Button->append(card_Bank);list_String->append("Bank");list_Slots->append(SLOT(SLOTcard_Bank(bool)));
	card_Baron=new QToolButton;list_Button->append(card_Baron);list_String->append("Baron");list_Slots->append(SLOT(SLOTcard_Baron(bool)));
	card_Bazaar=new QToolButton;list_Button->append(card_Bazaar);list_String->append("Bazaar");list_Slots->append(SLOT(SLOTcard_Bazaar(bool)));
	card_Beggar=new QToolButton;list_Button->append(card_Beggar);list_String->append("Beggar");list_Slots->append(SLOT(SLOTcard_Beggar(bool)));
	card_Bishop=new QToolButton;list_Button->append(card_Bishop);list_String->append("Bishop");list_Slots->append(SLOT(SLOTcard_Bishop(bool)));
	card_BlackMarket=new QToolButton;list_Button->append(card_BlackMarket);list_String->append("BlackMarket");list_Slots->append(SLOT(SLOTcard_BlackMarket(bool)));
	card_Bridge=new QToolButton;list_Button->append(card_Bridge);list_String->append("Bridge");list_Slots->append(SLOT(SLOTcard_Bridge(bool)));
	card_Bureaucrat=new QToolButton;list_Button->append(card_Bureaucrat);list_String->append("Bureaucrat");list_Slots->append(SLOT(SLOTcard_Bureaucrat(bool)));
	card_Butcher=new QToolButton;list_Button->append(card_Butcher);list_String->append("Butcher");list_Slots->append(SLOT(SLOTcard_Butcher(bool)));
	card_CandlestickMaker=new QToolButton;list_Button->append(card_CandlestickMaker);list_String->append("CandlestickMaker");list_Slots->append(SLOT(SLOTcard_CandlestickMaker(bool)));
	card_Caravan=new QToolButton;list_Button->append(card_Caravan);list_String->append("Caravan");list_Slots->append(SLOT(SLOTcard_Caravan(bool)));
	card_Catacombs=new QToolButton;list_Button->append(card_Catacombs);list_String->append("Catacombs");list_Slots->append(SLOT(SLOTcard_Catacombs(bool)));
	card_Cellar=new QToolButton;list_Button->append(card_Cellar);list_String->append("Cellar");list_Slots->append(SLOT(SLOTcard_Cellar(bool)));
	card_Chancellor=new QToolButton;list_Button->append(card_Chancellor);list_String->append("Chancellor");list_Slots->append(SLOT(SLOTcard_Chancellor(bool)));
	card_Chapel=new QToolButton;list_Button->append(card_Chapel);list_String->append("Chapel");list_Slots->append(SLOT(SLOTcard_Chapel(bool)));
	card_City=new QToolButton;list_Button->append(card_City);list_String->append("City");list_Slots->append(SLOT(SLOTcard_City(bool)));
	card_Colony=new QToolButton;list_Button->append(card_Colony);list_String->append("Colony");list_Slots->append(SLOT(SLOTcard_Colony(bool)));
	card_Conspirator=new QToolButton;list_Button->append(card_Conspirator);list_String->append("Conspirator");list_Slots->append(SLOT(SLOTcard_Conspirator(bool)));
	card_Contraband=new QToolButton;list_Button->append(card_Contraband);list_String->append("Contraband");list_Slots->append(SLOT(SLOTcard_Contraband(bool)));
	card_Copper=new QToolButton;list_Button->append(card_Copper);list_String->append("Copper");list_Slots->append(SLOT(SLOTcard_Copper(bool)));
	card_Coppersmith=new QToolButton;list_Button->append(card_Coppersmith);list_String->append("Coppersmith");list_Slots->append(SLOT(SLOTcard_Coppersmith(bool)));
	card_CouncilRoom=new QToolButton;list_Button->append(card_CouncilRoom);list_String->append("CouncilRoom");list_Slots->append(SLOT(SLOTcard_CouncilRoom(bool)));
	card_Count=new QToolButton;list_Button->append(card_Count);list_String->append("Count");list_Slots->append(SLOT(SLOTcard_Count(bool)));
	card_Counterfeit=new QToolButton;list_Button->append(card_Counterfeit);list_String->append("Counterfeit");list_Slots->append(SLOT(SLOTcard_Counterfeit(bool)));
	card_CountingHouse=new QToolButton;list_Button->append(card_CountingHouse);list_String->append("CountingHouse");list_Slots->append(SLOT(SLOTcard_CountingHouse(bool)));
	card_Courtyard=new QToolButton;list_Button->append(card_Courtyard);list_String->append("Courtyard");list_Slots->append(SLOT(SLOTcard_Courtyard(bool)));
	card_Cultist=new QToolButton;list_Button->append(card_Cultist);list_String->append("Cultist");list_Slots->append(SLOT(SLOTcard_Cultist(bool)));
	card_Curse=new QToolButton;list_Button->append(card_Curse);list_String->append("Curse");list_Slots->append(SLOT(SLOTcard_Curse(bool)));
	card_Cutpurse=new QToolButton;list_Button->append(card_Cutpurse);list_String->append("Cutpurse");list_Slots->append(SLOT(SLOTcard_Cutpurse(bool)));
	card_DameAnna=new QToolButton;list_Button->append(card_DameAnna);list_String->append("DameAnna");list_Slots->append(SLOT(SLOTcard_DameAnna(bool)));
	card_DameJosephine=new QToolButton;list_Button->append(card_DameJosephine);list_String->append("DameJosephine");list_Slots->append(SLOT(SLOTcard_DameJosephine(bool)));
	card_DameMolly=new QToolButton;list_Button->append(card_DameMolly);list_String->append("DameMolly");list_Slots->append(SLOT(SLOTcard_DameMolly(bool)));
	card_DameNatalie=new QToolButton;list_Button->append(card_DameNatalie);list_String->append("DameNatalie");list_Slots->append(SLOT(SLOTcard_DameNatalie(bool)));
	card_DameSylvia=new QToolButton;list_Button->append(card_DameSylvia);list_String->append("DameSylvia");list_Slots->append(SLOT(SLOTcard_DameSylvia(bool)));
	card_DeathCart=new QToolButton;list_Button->append(card_DeathCart);list_String->append("DeathCart");list_Slots->append(SLOT(SLOTcard_DeathCart(bool)));
	card_Diadem=new QToolButton;list_Button->append(card_Diadem);list_String->append("Diadem");list_Slots->append(SLOT(SLOTcard_Diadem(bool)));
	card_Doctor=new QToolButton;list_Button->append(card_Doctor);list_String->append("Doctor");list_Slots->append(SLOT(SLOTcard_Doctor(bool)));
	card_Duke=new QToolButton;list_Button->append(card_Duke);list_String->append("Duke");list_Slots->append(SLOT(SLOTcard_Duke(bool)));
	card_Dutchy=new QToolButton;list_Button->append(card_Dutchy);list_String->append("Dutchy");list_Slots->append(SLOT(SLOTcard_Dutchy(bool)));
	card_Embargo=new QToolButton;list_Button->append(card_Embargo);list_String->append("Embargo");list_Slots->append(SLOT(SLOTcard_Embargo(bool)));
	card_Envoy=new QToolButton;list_Button->append(card_Envoy);list_String->append("Envoy");list_Slots->append(SLOT(SLOTcard_Envoy(bool)));
	card_Estate=new QToolButton;list_Button->append(card_Estate);list_String->append("Estate");list_Slots->append(SLOT(SLOTcard_Estate(bool)));
	card_Expand=new QToolButton;list_Button->append(card_Expand);list_String->append("Expand");list_Slots->append(SLOT(SLOTcard_Expand(bool)));
	card_Explorer=new QToolButton;list_Button->append(card_Explorer);list_String->append("Explorer");list_Slots->append(SLOT(SLOTcard_Explorer(bool)));
	card_Fairgrounds=new QToolButton;list_Button->append(card_Fairgrounds);list_String->append("Fairgrounds");list_Slots->append(SLOT(SLOTcard_Fairgrounds(bool)));
	card_Familiar=new QToolButton;list_Button->append(card_Familiar);list_String->append("Familiar");list_Slots->append(SLOT(SLOTcard_Familiar(bool)));
	card_FarmingVillage=new QToolButton;list_Button->append(card_FarmingVillage);list_String->append("FarmingVillage");list_Slots->append(SLOT(SLOTcard_FarmingVillage(bool)));
	card_Feast=new QToolButton;list_Button->append(card_Feast);list_String->append("Feast");list_Slots->append(SLOT(SLOTcard_Feast(bool)));
	card_Feodum=new QToolButton;list_Button->append(card_Feodum);list_String->append("Feodum");list_Slots->append(SLOT(SLOTcard_Feodum(bool)));
	card_Festival=new QToolButton;list_Button->append(card_Festival);list_String->append("Festival");list_Slots->append(SLOT(SLOTcard_Festival(bool)));
	card_FishingVillage=new QToolButton;list_Button->append(card_FishingVillage);list_String->append("FishingVillage");list_Slots->append(SLOT(SLOTcard_FishingVillage(bool)));
	card_Followers=new QToolButton;list_Button->append(card_Followers);list_String->append("Followers");list_Slots->append(SLOT(SLOTcard_Followers(bool)));
	card_Forager=new QToolButton;list_Button->append(card_Forager);list_String->append("Forager");list_Slots->append(SLOT(SLOTcard_Forager(bool)));
	card_Forge=new QToolButton;list_Button->append(card_Forge);list_String->append("Forge");list_Slots->append(SLOT(SLOTcard_Forge(bool)));
	card_Fortress=new QToolButton;list_Button->append(card_Fortress);list_String->append("Fortress");list_Slots->append(SLOT(SLOTcard_Fortress(bool)));
	card_FortuneTeller=new QToolButton;list_Button->append(card_FortuneTeller);list_String->append("FortuneTeller");list_Slots->append(SLOT(SLOTcard_FortuneTeller(bool)));
	card_Gardens=new QToolButton;list_Button->append(card_Gardens);list_String->append("Gardens");list_Slots->append(SLOT(SLOTcard_Gardens(bool)));
	card_GhostShip=new QToolButton;list_Button->append(card_GhostShip);list_String->append("GhostShip");list_Slots->append(SLOT(SLOTcard_GhostShip(bool)));
	card_Gold=new QToolButton;list_Button->append(card_Gold);list_String->append("Gold");list_Slots->append(SLOT(SLOTcard_Gold(bool)));
	card_Golem=new QToolButton;list_Button->append(card_Golem);list_String->append("Golem");list_Slots->append(SLOT(SLOTcard_Golem(bool)));
	card_Goons=new QToolButton;list_Button->append(card_Goons);list_String->append("Goons");list_Slots->append(SLOT(SLOTcard_Goons(bool)));
	card_Governor=new QToolButton;list_Button->append(card_Governor);list_String->append("Governor");list_Slots->append(SLOT(SLOTcard_Governor(bool)));
	card_GrandMarket=new QToolButton;list_Button->append(card_GrandMarket);list_String->append("GrandMarket");list_Slots->append(SLOT(SLOTcard_GrandMarket(bool)));
	card_Graverobber=new QToolButton;list_Button->append(card_Graverobber);list_String->append("Graverobber");list_Slots->append(SLOT(SLOTcard_Graverobber(bool)));
	card_GreatHall=new QToolButton;list_Button->append(card_GreatHall);list_String->append("GreatHall");list_Slots->append(SLOT(SLOTcard_GreatHall(bool)));
	card_Hamlet=new QToolButton;list_Button->append(card_Hamlet);list_String->append("Hamlet");list_Slots->append(SLOT(SLOTcard_Hamlet(bool)));
	card_Harem=new QToolButton;list_Button->append(card_Harem);list_String->append("Harem");list_Slots->append(SLOT(SLOTcard_Harem(bool)));
	card_Harvest=new QToolButton;list_Button->append(card_Harvest);list_String->append("Harvest");list_Slots->append(SLOT(SLOTcard_Harvest(bool)));
	card_Haven=new QToolButton;list_Button->append(card_Haven);list_String->append("Haven");list_Slots->append(SLOT(SLOTcard_Haven(bool)));
	card_Herald=new QToolButton;list_Button->append(card_Herald);list_String->append("Herald");list_Slots->append(SLOT(SLOTcard_Herald(bool)));
	card_Herbalist=new QToolButton;list_Button->append(card_Herbalist);list_String->append("Herbalist");list_Slots->append(SLOT(SLOTcard_Herbalist(bool)));
	card_Hermit=new QToolButton;list_Button->append(card_Hermit);list_String->append("Hermit");list_Slots->append(SLOT(SLOTcard_Hermit(bool)));
	card_Hoard=new QToolButton;list_Button->append(card_Hoard);list_String->append("Hoard");list_Slots->append(SLOT(SLOTcard_Hoard(bool)));
	card_HornofPlenty=new QToolButton;list_Button->append(card_HornofPlenty);list_String->append("HornofPlenty");list_Slots->append(SLOT(SLOTcard_HornofPlenty(bool)));
	card_HorseTraders=new QToolButton;list_Button->append(card_HorseTraders);list_String->append("HorseTraders");list_Slots->append(SLOT(SLOTcard_HorseTraders(bool)));
	card_Hovel=new QToolButton;list_Button->append(card_Hovel);list_String->append("Hovel");list_Slots->append(SLOT(SLOTcard_Hovel(bool)));
	card_HuntingGrounds=new QToolButton;list_Button->append(card_HuntingGrounds);list_String->append("HuntingGrounds");list_Slots->append(SLOT(SLOTcard_HuntingGrounds(bool)));
	card_HuntingParty=new QToolButton;list_Button->append(card_HuntingParty);list_String->append("HuntingParty");list_Slots->append(SLOT(SLOTcard_HuntingParty(bool)));
	card_Ironmonger=new QToolButton;list_Button->append(card_Ironmonger);list_String->append("Ironmonger");list_Slots->append(SLOT(SLOTcard_Ironmonger(bool)));
	card_Ironworks=new QToolButton;list_Button->append(card_Ironworks);list_String->append("Ironworks");list_Slots->append(SLOT(SLOTcard_Ironworks(bool)));
	card_Island=new QToolButton;list_Button->append(card_Island);list_String->append("Island");list_Slots->append(SLOT(SLOTcard_Island(bool)));
	card_Jester=new QToolButton;list_Button->append(card_Jester);list_String->append("Jester");list_Slots->append(SLOT(SLOTcard_Jester(bool)));
	card_Journeyman=new QToolButton;list_Button->append(card_Journeyman);list_String->append("Journeyman");list_Slots->append(SLOT(SLOTcard_Journeyman(bool)));
	card_JunkDealer=new QToolButton;list_Button->append(card_JunkDealer);list_String->append("JunkDealer");list_Slots->append(SLOT(SLOTcard_JunkDealer(bool)));
	card_KingsCourt=new QToolButton;list_Button->append(card_KingsCourt);list_String->append("KingsCourt");list_Slots->append(SLOT(SLOTcard_KingsCourt(bool)));
	card_Laboratory=new QToolButton;list_Button->append(card_Laboratory);list_String->append("Laboratory");list_Slots->append(SLOT(SLOTcard_Laboratory(bool)));
	card_Library=new QToolButton;list_Button->append(card_Library);list_String->append("Library");list_Slots->append(SLOT(SLOTcard_Library(bool)));
	card_Lighthouse=new QToolButton;list_Button->append(card_Lighthouse);list_String->append("Lighthouse");list_Slots->append(SLOT(SLOTcard_Lighthouse(bool)));
	card_Loan=new QToolButton;list_Button->append(card_Loan);list_String->append("Loan");list_Slots->append(SLOT(SLOTcard_Loan(bool)));
	card_Lookout=new QToolButton;list_Button->append(card_Lookout);list_String->append("Lookout");list_Slots->append(SLOT(SLOTcard_Lookout(bool)));
	card_Madman=new QToolButton;list_Button->append(card_Madman);list_String->append("Madman");list_Slots->append(SLOT(SLOTcard_Madman(bool)));
	card_Marauder=new QToolButton;list_Button->append(card_Marauder);list_String->append("Marauder");list_Slots->append(SLOT(SLOTcard_Marauder(bool)));
	card_Market=new QToolButton;list_Button->append(card_Market);list_String->append("Market");list_Slots->append(SLOT(SLOTcard_Market(bool)));
	card_MarketSquare=new QToolButton;list_Button->append(card_MarketSquare);list_String->append("MarketSquare");list_Slots->append(SLOT(SLOTcard_MarketSquare(bool)));
	card_Masquerade=new QToolButton;list_Button->append(card_Masquerade);list_String->append("Masquerade");list_Slots->append(SLOT(SLOTcard_Masquerade(bool)));
	card_Masterpiece=new QToolButton;list_Button->append(card_Masterpiece);list_String->append("Masterpiece");list_Slots->append(SLOT(SLOTcard_Masterpiece(bool)));
	card_Menagerie=new QToolButton;list_Button->append(card_Menagerie);list_String->append("Menagerie");list_Slots->append(SLOT(SLOTcard_Menagerie(bool)));
	card_Mercenary=new QToolButton;list_Button->append(card_Mercenary);list_String->append("Mercenary");list_Slots->append(SLOT(SLOTcard_Mercenary(bool)));
	card_MerchantGuild=new QToolButton;list_Button->append(card_MerchantGuild);list_String->append("MerchantGuild");list_Slots->append(SLOT(SLOTcard_MerchantGuild(bool)));
	card_MerchantShip=new QToolButton;list_Button->append(card_MerchantShip);list_String->append("MerchantShip");list_Slots->append(SLOT(SLOTcard_MerchantShip(bool)));
	card_Militia=new QToolButton;list_Button->append(card_Militia);list_String->append("Militia");list_Slots->append(SLOT(SLOTcard_Militia(bool)));
	card_Mine=new QToolButton;list_Button->append(card_Mine);list_String->append("Mine");list_Slots->append(SLOT(SLOTcard_Mine(bool)));
	card_MiningVillage=new QToolButton;list_Button->append(card_MiningVillage);list_String->append("MiningVillage");list_Slots->append(SLOT(SLOTcard_MiningVillage(bool)));
	card_Minion=new QToolButton;list_Button->append(card_Minion);list_String->append("Minion");list_Slots->append(SLOT(SLOTcard_Minion(bool)));
	card_Mint=new QToolButton;list_Button->append(card_Mint);list_String->append("Mint");list_Slots->append(SLOT(SLOTcard_Mint(bool)));
	card_Moat=new QToolButton;list_Button->append(card_Moat);list_String->append("Moat");list_Slots->append(SLOT(SLOTcard_Moat(bool)));
	card_Moneylender=new QToolButton;list_Button->append(card_Moneylender);list_String->append("Moneylender");list_Slots->append(SLOT(SLOTcard_Moneylender(bool)));
	card_Monument=new QToolButton;list_Button->append(card_Monument);list_String->append("Monument");list_Slots->append(SLOT(SLOTcard_Monument(bool)));
	card_Mountebank=new QToolButton;list_Button->append(card_Mountebank);list_String->append("Mountebank");list_Slots->append(SLOT(SLOTcard_Mountebank(bool)));
	card_Mystic=new QToolButton;list_Button->append(card_Mystic);list_String->append("Mystic");list_Slots->append(SLOT(SLOTcard_Mystic(bool)));
	card_NativeVillage=new QToolButton;list_Button->append(card_NativeVillage);list_String->append("NativeVillage");list_Slots->append(SLOT(SLOTcard_NativeVillage(bool)));
	card_Navigator=new QToolButton;list_Button->append(card_Navigator);list_String->append("Navigator");list_Slots->append(SLOT(SLOTcard_Navigator(bool)));
	card_Necropolis=new QToolButton;list_Button->append(card_Necropolis);list_String->append("Necropolis");list_Slots->append(SLOT(SLOTcard_Necropolis(bool)));
	card_Nobles=new QToolButton;list_Button->append(card_Nobles);list_String->append("Nobles");list_Slots->append(SLOT(SLOTcard_Nobles(bool)));
	card_Outpost=new QToolButton;list_Button->append(card_Outpost);list_String->append("Outpost");list_Slots->append(SLOT(SLOTcard_Outpost(bool)));
	card_OvergrownEstate=new QToolButton;list_Button->append(card_OvergrownEstate);list_String->append("OvergrownEstate");list_Slots->append(SLOT(SLOTcard_OvergrownEstate(bool)));
	card_Pawn=new QToolButton;list_Button->append(card_Pawn);list_String->append("Pawn");list_Slots->append(SLOT(SLOTcard_Pawn(bool)));
	card_PearlDiver=new QToolButton;list_Button->append(card_PearlDiver);list_String->append("PearlDiver");list_Slots->append(SLOT(SLOTcard_PearlDiver(bool)));
	card_Peddler=new QToolButton;list_Button->append(card_Peddler);list_String->append("Peddler");list_Slots->append(SLOT(SLOTcard_Peddler(bool)));
	card_PhilosophersStone=new QToolButton;list_Button->append(card_PhilosophersStone);list_String->append("PhilosophersStone");list_Slots->append(SLOT(SLOTcard_PhilosophersStone(bool)));
	card_Pillage=new QToolButton;list_Button->append(card_Pillage);list_String->append("Pillage");list_Slots->append(SLOT(SLOTcard_Pillage(bool)));
	card_PirateShip=new QToolButton;list_Button->append(card_PirateShip);list_String->append("PirateShip");list_Slots->append(SLOT(SLOTcard_PirateShip(bool)));
	card_Platinum=new QToolButton;list_Button->append(card_Platinum);list_String->append("Platinum");list_Slots->append(SLOT(SLOTcard_Platinum(bool)));
	card_Plaza=new QToolButton;list_Button->append(card_Plaza);list_String->append("Plaza");list_Slots->append(SLOT(SLOTcard_Plaza(bool)));
	card_PoorHouse=new QToolButton;list_Button->append(card_PoorHouse);list_String->append("PoorHouse");list_Slots->append(SLOT(SLOTcard_PoorHouse(bool)));
	card_Possession=new QToolButton;list_Button->append(card_Possession);list_String->append("Possession");list_Slots->append(SLOT(SLOTcard_Possession(bool)));
	card_Potion=new QToolButton;list_Button->append(card_Potion);list_String->append("Potion");list_Slots->append(SLOT(SLOTcard_Potion(bool)));
	card_Princess=new QToolButton;list_Button->append(card_Princess);list_String->append("Princess");list_Slots->append(SLOT(SLOTcard_Princess(bool)));
	card_Procession=new QToolButton;list_Button->append(card_Procession);list_String->append("Procession");list_Slots->append(SLOT(SLOTcard_Procession(bool)));
	card_Province=new QToolButton;list_Button->append(card_Province);list_String->append("Province");list_Slots->append(SLOT(SLOTcard_Province(bool)));
	card_Quarry=new QToolButton;list_Button->append(card_Quarry);list_String->append("Quarry");list_Slots->append(SLOT(SLOTcard_Quarry(bool)));
	card_Rabble=new QToolButton;list_Button->append(card_Rabble);list_String->append("Rabble");list_Slots->append(SLOT(SLOTcard_Rabble(bool)));
	card_Rats=new QToolButton;list_Button->append(card_Rats);list_String->append("Rats");list_Slots->append(SLOT(SLOTcard_Rats(bool)));
	card_Rebuild=new QToolButton;list_Button->append(card_Rebuild);list_String->append("Rebuild");list_Slots->append(SLOT(SLOTcard_Rebuild(bool)));
	card_Remake=new QToolButton;list_Button->append(card_Remake);list_String->append("Remake");list_Slots->append(SLOT(SLOTcard_Remake(bool)));
	card_Remodel=new QToolButton;list_Button->append(card_Remodel);list_String->append("Remodel");list_Slots->append(SLOT(SLOTcard_Remodel(bool)));
	card_Rogue=new QToolButton;list_Button->append(card_Rogue);list_String->append("Rogue");list_Slots->append(SLOT(SLOTcard_Rogue(bool)));
	card_RoyalSeal=new QToolButton;list_Button->append(card_RoyalSeal);list_String->append("RoyalSeal");list_Slots->append(SLOT(SLOTcard_RoyalSeal(bool)));
	card_RuinedLibrary=new QToolButton;list_Button->append(card_RuinedLibrary);list_String->append("RuinedLibrary");list_Slots->append(SLOT(SLOTcard_RuinedLibrary(bool)));
	card_RuinedMarket=new QToolButton;list_Button->append(card_RuinedMarket);list_String->append("RuinedMarket");list_Slots->append(SLOT(SLOTcard_RuinedMarket(bool)));
	card_RuinedVillage=new QToolButton;list_Button->append(card_RuinedVillage);list_String->append("RuinedVillage");list_Slots->append(SLOT(SLOTcard_RuinedVillage(bool)));
	card_Saboteur=new QToolButton;list_Button->append(card_Saboteur);list_String->append("Saboteur");list_Slots->append(SLOT(SLOTcard_Saboteur(bool)));
	card_Sage=new QToolButton;list_Button->append(card_Sage);list_String->append("Sage");list_Slots->append(SLOT(SLOTcard_Sage(bool)));
	card_Salvager=new QToolButton;list_Button->append(card_Salvager);list_String->append("Salvager");list_Slots->append(SLOT(SLOTcard_Salvager(bool)));
	card_Scavenger=new QToolButton;list_Button->append(card_Scavenger);list_String->append("Scavenger");list_Slots->append(SLOT(SLOTcard_Scavenger(bool)));
	card_Scout=new QToolButton;list_Button->append(card_Scout);list_String->append("Scout");list_Slots->append(SLOT(SLOTcard_Scout(bool)));
	card_ScryingPool=new QToolButton;list_Button->append(card_ScryingPool);list_String->append("ScryingPool");list_Slots->append(SLOT(SLOTcard_ScryingPool(bool)));
	card_SeaHag=new QToolButton;list_Button->append(card_SeaHag);list_String->append("SeaHag");list_Slots->append(SLOT(SLOTcard_SeaHag(bool)));
	card_SecretChamber=new QToolButton;list_Button->append(card_SecretChamber);list_String->append("SecretChamber");list_Slots->append(SLOT(SLOTcard_SecretChamber(bool)));
	card_ShantyTown=new QToolButton;list_Button->append(card_ShantyTown);list_String->append("ShantyTown");list_Slots->append(SLOT(SLOTcard_ShantyTown(bool)));
	card_Silver=new QToolButton;list_Button->append(card_Silver);list_String->append("Silver");list_Slots->append(SLOT(SLOTcard_Silver(bool)));
	card_SirBailey=new QToolButton;list_Button->append(card_SirBailey);list_String->append("SirBailey");list_Slots->append(SLOT(SLOTcard_SirBailey(bool)));
	card_SirDestry=new QToolButton;list_Button->append(card_SirDestry);list_String->append("SirDestry");list_Slots->append(SLOT(SLOTcard_SirDestry(bool)));
	card_SirMartin=new QToolButton;list_Button->append(card_SirMartin);list_String->append("SirMartin");list_Slots->append(SLOT(SLOTcard_SirMartin(bool)));
	card_SirMichael=new QToolButton;list_Button->append(card_SirMichael);list_String->append("SirMichael");list_Slots->append(SLOT(SLOTcard_SirMichael(bool)));
	card_SirVander=new QToolButton;list_Button->append(card_SirVander);list_String->append("SirVander");list_Slots->append(SLOT(SLOTcard_SirVander(bool)));
	card_Smithy=new QToolButton;list_Button->append(card_Smithy);list_String->append("Smithy");list_Slots->append(SLOT(SLOTcard_Smithy(bool)));
	card_Smugglers=new QToolButton;list_Button->append(card_Smugglers);list_String->append("Smugglers");list_Slots->append(SLOT(SLOTcard_Smugglers(bool)));
	card_Soothsayer=new QToolButton;list_Button->append(card_Soothsayer);list_String->append("Soothsayer");list_Slots->append(SLOT(SLOTcard_Soothsayer(bool)));
	card_Spoils=new QToolButton;list_Button->append(card_Spoils);list_String->append("Spoils");list_Slots->append(SLOT(SLOTcard_Spoils(bool)));
	card_Spy=new QToolButton;list_Button->append(card_Spy);list_String->append("Spy");list_Slots->append(SLOT(SLOTcard_Spy(bool)));
	card_Squire=new QToolButton;list_Button->append(card_Squire);list_String->append("Squire");list_Slots->append(SLOT(SLOTcard_Squire(bool)));
	card_Stash=new QToolButton;list_Button->append(card_Stash);list_String->append("Stash");list_Slots->append(SLOT(SLOTcard_Stash(bool)));
	card_Steward=new QToolButton;list_Button->append(card_Steward);list_String->append("Steward");list_Slots->append(SLOT(SLOTcard_Steward(bool)));
	card_Stonemason=new QToolButton;list_Button->append(card_Stonemason);list_String->append("Stonemason");list_Slots->append(SLOT(SLOTcard_Stonemason(bool)));
	card_Storeroom=new QToolButton;list_Button->append(card_Storeroom);list_String->append("Storeroom");list_Slots->append(SLOT(SLOTcard_Storeroom(bool)));
	card_Survivors=new QToolButton;list_Button->append(card_Survivors);list_String->append("Survivors");list_Slots->append(SLOT(SLOTcard_Survivors(bool)));
	card_Swindler=new QToolButton;list_Button->append(card_Swindler);list_String->append("Swindler");list_Slots->append(SLOT(SLOTcard_Swindler(bool)));
	card_Tactician=new QToolButton;list_Button->append(card_Tactician);list_String->append("Tactician");list_Slots->append(SLOT(SLOTcard_Tactician(bool)));
	card_Talisman=new QToolButton;list_Button->append(card_Talisman);list_String->append("Talisman");list_Slots->append(SLOT(SLOTcard_Talisman(bool)));
	card_Taxman=new QToolButton;list_Button->append(card_Taxman);list_String->append("Taxman");list_Slots->append(SLOT(SLOTcard_Taxman(bool)));
	card_Thief=new QToolButton;list_Button->append(card_Thief);list_String->append("Thief");list_Slots->append(SLOT(SLOTcard_Thief(bool)));
	card_ThroneRoom=new QToolButton;list_Button->append(card_ThroneRoom);list_String->append("ThroneRoom");list_Slots->append(SLOT(SLOTcard_ThroneRoom(bool)));
	card_Torturer=new QToolButton;list_Button->append(card_Torturer);list_String->append("Torturer");list_Slots->append(SLOT(SLOTcard_Torturer(bool)));
	card_Tournament=new QToolButton;list_Button->append(card_Tournament);list_String->append("Tournament");list_Slots->append(SLOT(SLOTcard_Tournament(bool)));
	card_TradeRoute=new QToolButton;list_Button->append(card_TradeRoute);list_String->append("TradeRoute");list_Slots->append(SLOT(SLOTcard_TradeRoute(bool)));
	card_TradingPost=new QToolButton;list_Button->append(card_TradingPost);list_String->append("TradingPost");list_Slots->append(SLOT(SLOTcard_TradingPost(bool)));
	card_Transmute=new QToolButton;list_Button->append(card_Transmute);list_String->append("Transmute");list_Slots->append(SLOT(SLOTcard_Transmute(bool)));
	card_TreasureMap=new QToolButton;list_Button->append(card_TreasureMap);list_String->append("TreasureMap");list_Slots->append(SLOT(SLOTcard_TreasureMap(bool)));
	card_Treasury=new QToolButton;list_Button->append(card_Treasury);list_String->append("Treasury");list_Slots->append(SLOT(SLOTcard_Treasury(bool)));
	card_Tribute=new QToolButton;list_Button->append(card_Tribute);list_String->append("Tribute");list_Slots->append(SLOT(SLOTcard_Tribute(bool)));
	card_TrustySteed=new QToolButton;list_Button->append(card_TrustySteed);list_String->append("TrustySteed");list_Slots->append(SLOT(SLOTcard_TrustySteed(bool)));
	card_University=new QToolButton;list_Button->append(card_University);list_String->append("University");list_Slots->append(SLOT(SLOTcard_University(bool)));
	card_Upgrade=new QToolButton;list_Button->append(card_Upgrade);list_String->append("Upgrade");list_Slots->append(SLOT(SLOTcard_Upgrade(bool)));
	card_Urchin=new QToolButton;list_Button->append(card_Urchin);list_String->append("Urchin");list_Slots->append(SLOT(SLOTcard_Urchin(bool)));
	card_Vagrant=new QToolButton;list_Button->append(card_Vagrant);list_String->append("Vagrant");list_Slots->append(SLOT(SLOTcard_Vagrant(bool)));
	card_Vault=new QToolButton;list_Button->append(card_Vault);list_String->append("Vault");list_Slots->append(SLOT(SLOTcard_Vault(bool)));
	card_Venture=new QToolButton;list_Button->append(card_Venture);list_String->append("Venture");list_Slots->append(SLOT(SLOTcard_Venture(bool)));
	card_Village=new QToolButton;list_Button->append(card_Village);list_String->append("Village");list_Slots->append(SLOT(SLOTcard_Village(bool)));
	card_Vineyard=new QToolButton;list_Button->append(card_Vineyard);list_String->append("Vineyard");list_Slots->append(SLOT(SLOTcard_Vineyard(bool)));
	card_WalledVillage=new QToolButton;list_Button->append(card_WalledVillage);list_String->append("WalledVillage");list_Slots->append(SLOT(SLOTcard_WalledVillage(bool)));
	card_WanderingMinstrel=new QToolButton;list_Button->append(card_WanderingMinstrel);list_String->append("WanderingMinstrel");list_Slots->append(SLOT(SLOTcard_WanderingMinstrel(bool)));
	card_Warehouse=new QToolButton;list_Button->append(card_Warehouse);list_String->append("Warehouse");list_Slots->append(SLOT(SLOTcard_Warehouse(bool)));
	card_Watchtower=new QToolButton;list_Button->append(card_Watchtower);list_String->append("Watchtower");list_Slots->append(SLOT(SLOTcard_Watchtower(bool)));
	card_Wharf=new QToolButton;list_Button->append(card_Wharf);list_String->append("Wharf");list_Slots->append(SLOT(SLOTcard_Wharf(bool)));
	card_WishingWell=new QToolButton;list_Button->append(card_WishingWell);list_String->append("WishingWell");list_Slots->append(SLOT(SLOTcard_WishingWell(bool)));
	card_Witch=new QToolButton;list_Button->append(card_Witch);list_String->append("Witch");list_Slots->append(SLOT(SLOTcard_Witch(bool)));
	card_Woodcutter=new QToolButton;list_Button->append(card_Woodcutter);list_String->append("Woodcutter");list_Slots->append(SLOT(SLOTcard_Woodcutter(bool)));
	card_WorkersVillage=new QToolButton;list_Button->append(card_WorkersVillage);list_String->append("WorkersVillage");list_Slots->append(SLOT(SLOTcard_WorkersVillage(bool)));
	card_Workshop=new QToolButton;list_Button->append(card_Workshop);list_String->append("Workshop");list_Slots->append(SLOT(SLOTcard_Workshop(bool)));
	card_YoungWitch=new QToolButton;list_Button->append(card_YoungWitch);list_String->append("YoungWitch");list_Slots->append(SLOT(SLOTcard_YoungWitch(bool)));
}


//Setup Script; populates the list of cards to choose from
void DominionLinux::createCards(QStringList list)
{
	for( int i = 0; i < list.size(); i++ )
	{
		list_Button->at(i)->setCheckable(true);
		list_Button->at(i)->setText(list.at(i));
		list_Button->at(i)->setMinimumWidth(130);
		ui->verticalLayout_Disabled->addWidget(list_Button->at(i));
		QString img_src("<img src=':/Cards/%1.png' width='375'>");
		img_src = img_src.arg(list.at(i));
		list_Button->at(i)->setToolTip(img_src);
		connect(list_Button->at(i),SIGNAL(clicked(bool)),this,list_Slots->at(i));
	}
}


//This is just a showcase of the qprogressbar overlayed a qtoolbutton with an icon.
void DominionLinux::createExample(QStringList list)
{
	for( int i = 0; i < 20; i++ )
	{

		card_Copper = new QToolButton();
		card_Copper->setMinimumWidth(100);
		card_Copper->setIcon(QIcon("://Cards/Copper.png"));
		card_Copper->setIconSize(QSize(9*15,14*15));
		card_Copper->setFixedSize(9*10,12.5*10);
		if (i<10){ui->horizontalLayout_StackBottom->addWidget(card_Copper);}
		else {ui->horizontalLayout_StackTop->addWidget(card_Copper);}

		progressBar_Example = new QProgressBar();
		progressBar_Example->setParent(card_Copper);
		progressBar_Example->setOrientation(Qt::Vertical);
		progressBar_Example->setFixedSize(9*10,12.5*10);
		progressBar_Example->setFormat("%v / %m");
		progressBar_Example->setMaximum(10);
		progressBar_Example->setValue(5);

	}
}


//Card Functionality generated via python script, "Generate Slot Code" All dominion cards accounted for.
void DominionLinux::SLOTcard_AbandonedMine(bool Checked, bool TryMatchOpponent)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_AbandonedMine);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_AbandonedMine);
	}

}
void DominionLinux::SLOTcard_Adventurer(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Adventurer);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Adventurer);
	}
}
void DominionLinux::SLOTcard_Advisor(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Advisor);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Advisor);
	}
}
void DominionLinux::SLOTcard_Alchemist(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Alchemist);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Alchemist);
	}
}
void DominionLinux::SLOTcard_Altar(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Altar);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Altar);
	}
}
void DominionLinux::SLOTcard_Ambassador(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Ambassador);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Ambassador);
	}
}
void DominionLinux::SLOTcard_Apothecary(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Apothecary);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Apothecary);
	}
}
void DominionLinux::SLOTcard_Apprentice(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Apprentice);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Apprentice);
	}
}
void DominionLinux::SLOTcard_Armory(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Armory);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Armory);
	}
}
void DominionLinux::SLOTcard_BagofGold(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_BagofGold);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_BagofGold);
	}
}
void DominionLinux::SLOTcard_Baker(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Baker);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Baker);
	}
}
void DominionLinux::SLOTcard_BanditCamp(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_BanditCamp);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_BanditCamp);
	}
}
void DominionLinux::SLOTcard_BandofMisfits(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_BandofMisfits);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_BandofMisfits);
	}
}
void DominionLinux::SLOTcard_Bank(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Bank);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Bank);
	}
}
void DominionLinux::SLOTcard_Baron(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Baron);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Baron);
	}
}
void DominionLinux::SLOTcard_Bazaar(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Bazaar);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Bazaar);
	}
}
void DominionLinux::SLOTcard_Beggar(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Beggar);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Beggar);
	}
}
void DominionLinux::SLOTcard_Bishop(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Bishop);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Bishop);
	}
}
void DominionLinux::SLOTcard_BlackMarket(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_BlackMarket);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_BlackMarket);
	}
}
void DominionLinux::SLOTcard_Bridge(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Bridge);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Bridge);
	}
}
void DominionLinux::SLOTcard_Bureaucrat(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Bureaucrat);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Bureaucrat);
	}
}
void DominionLinux::SLOTcard_Butcher(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Butcher);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Butcher);
	}
}
void DominionLinux::SLOTcard_CandlestickMaker(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_CandlestickMaker);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_CandlestickMaker);
	}
}
void DominionLinux::SLOTcard_Caravan(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Caravan);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Caravan);
	}
}
void DominionLinux::SLOTcard_Catacombs(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Catacombs);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Catacombs);
	}
}
void DominionLinux::SLOTcard_Cellar(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Cellar);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Cellar);
	}
}
void DominionLinux::SLOTcard_Chancellor(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Chancellor);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Chancellor);
	}
}
void DominionLinux::SLOTcard_Chapel(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Chapel);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Chapel);
	}
}
void DominionLinux::SLOTcard_City(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_City);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_City);
	}
}
void DominionLinux::SLOTcard_Colony(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Colony);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Colony);
	}
}
void DominionLinux::SLOTcard_Conspirator(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Conspirator);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Conspirator);
	}
}
void DominionLinux::SLOTcard_Contraband(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Contraband);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Contraband);
	}
}
void DominionLinux::SLOTcard_Copper(bool Checked, bool Game)
{
	if (Checked == true && Game == false)
	{

		//ui->verticalLayout_Enabled->addWidget(card_Copper);
	}
	else if (Checked == false)
	{
		//ui->verticalLayout_Disabled->addWidget(card_Copper);
	}
}
void DominionLinux::SLOTcard_Coppersmith(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Coppersmith);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Coppersmith);
	}
}
void DominionLinux::SLOTcard_CouncilRoom(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_CouncilRoom);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_CouncilRoom);
	}
}
void DominionLinux::SLOTcard_Count(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Count);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Count);
	}
}
void DominionLinux::SLOTcard_Counterfeit(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Counterfeit);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Counterfeit);
	}
}
void DominionLinux::SLOTcard_CountingHouse(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_CountingHouse);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_CountingHouse);
	}
}
void DominionLinux::SLOTcard_Courtyard(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Courtyard);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Courtyard);
	}
}
void DominionLinux::SLOTcard_Cultist(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Cultist);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Cultist);
	}
}
void DominionLinux::SLOTcard_Curse(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Curse);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Curse);
	}
}
void DominionLinux::SLOTcard_Cutpurse(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Cutpurse);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Cutpurse);
	}
}
void DominionLinux::SLOTcard_DameAnna(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_DameAnna);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_DameAnna);
	}
}
void DominionLinux::SLOTcard_DameJosephine(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_DameJosephine);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_DameJosephine);
	}
}
void DominionLinux::SLOTcard_DameMolly(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_DameMolly);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_DameMolly);
	}
}
void DominionLinux::SLOTcard_DameNatalie(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_DameNatalie);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_DameNatalie);
	}
}
void DominionLinux::SLOTcard_DameSylvia(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_DameSylvia);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_DameSylvia);
	}
}
void DominionLinux::SLOTcard_DeathCart(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_DeathCart);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_DeathCart);
	}
}
void DominionLinux::SLOTcard_Diadem(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Diadem);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Diadem);
	}
}
void DominionLinux::SLOTcard_Doctor(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Doctor);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Doctor);
	}
}
void DominionLinux::SLOTcard_Duke(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Duke);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Duke);
	}
}
void DominionLinux::SLOTcard_Dutchy(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Dutchy);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Dutchy);
	}
}
void DominionLinux::SLOTcard_Embargo(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Embargo);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Embargo);
	}
}
void DominionLinux::SLOTcard_Envoy(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Envoy);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Envoy);
	}
}
void DominionLinux::SLOTcard_Estate(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Estate);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Estate);
	}
}
void DominionLinux::SLOTcard_Expand(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Expand);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Expand);
	}
}
void DominionLinux::SLOTcard_Explorer(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Explorer);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Explorer);
	}
}
void DominionLinux::SLOTcard_Fairgrounds(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Fairgrounds);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Fairgrounds);
	}
}
void DominionLinux::SLOTcard_Familiar(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Familiar);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Familiar);
	}
}
void DominionLinux::SLOTcard_FarmingVillage(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_FarmingVillage);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_FarmingVillage);
	}
}
void DominionLinux::SLOTcard_Feast(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Feast);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Feast);
	}
}
void DominionLinux::SLOTcard_Feodum(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Feodum);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Feodum);
	}
}
void DominionLinux::SLOTcard_Festival(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Festival);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Festival);
	}
}
void DominionLinux::SLOTcard_FishingVillage(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_FishingVillage);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_FishingVillage);
	}
}
void DominionLinux::SLOTcard_Followers(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Followers);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Followers);
	}
}
void DominionLinux::SLOTcard_Forager(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Forager);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Forager);
	}
}
void DominionLinux::SLOTcard_Forge(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Forge);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Forge);
	}
}
void DominionLinux::SLOTcard_Fortress(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Fortress);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Fortress);
	}
}
void DominionLinux::SLOTcard_FortuneTeller(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_FortuneTeller);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_FortuneTeller);
	}
}
void DominionLinux::SLOTcard_Gardens(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Gardens);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Gardens);
	}
}
void DominionLinux::SLOTcard_GhostShip(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_GhostShip);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_GhostShip);
	}
}
void DominionLinux::SLOTcard_Gold(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Gold);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Gold);
	}
}
void DominionLinux::SLOTcard_Golem(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Golem);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Golem);
	}
}
void DominionLinux::SLOTcard_Goons(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Goons);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Goons);
	}
}
void DominionLinux::SLOTcard_Governor(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Governor);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Governor);
	}
}
void DominionLinux::SLOTcard_GrandMarket(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_GrandMarket);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_GrandMarket);
	}
}
void DominionLinux::SLOTcard_Graverobber(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Graverobber);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Graverobber);
	}
}
void DominionLinux::SLOTcard_GreatHall(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_GreatHall);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_GreatHall);
	}
}
void DominionLinux::SLOTcard_Hamlet(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Hamlet);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Hamlet);
	}
}
void DominionLinux::SLOTcard_Harem(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Harem);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Harem);
	}
}
void DominionLinux::SLOTcard_Harvest(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Harvest);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Harvest);
	}
}
void DominionLinux::SLOTcard_Haven(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Haven);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Haven);
	}
}
void DominionLinux::SLOTcard_Herald(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Herald);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Herald);
	}
}
void DominionLinux::SLOTcard_Herbalist(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Herbalist);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Herbalist);
	}
}
void DominionLinux::SLOTcard_Hermit(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Hermit);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Hermit);
	}
}
void DominionLinux::SLOTcard_Hoard(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Hoard);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Hoard);
	}
}
void DominionLinux::SLOTcard_HornofPlenty(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_HornofPlenty);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_HornofPlenty);
	}
}
void DominionLinux::SLOTcard_HorseTraders(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_HorseTraders);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_HorseTraders);
	}
}
void DominionLinux::SLOTcard_Hovel(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Hovel);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Hovel);
	}
}
void DominionLinux::SLOTcard_HuntingGrounds(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_HuntingGrounds);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_HuntingGrounds);
	}
}
void DominionLinux::SLOTcard_HuntingParty(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_HuntingParty);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_HuntingParty);
	}
}
void DominionLinux::SLOTcard_Ironmonger(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Ironmonger);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Ironmonger);
	}
}
void DominionLinux::SLOTcard_Ironworks(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Ironworks);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Ironworks);
	}
}
void DominionLinux::SLOTcard_Island(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Island);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Island);
	}
}
void DominionLinux::SLOTcard_Jester(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Jester);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Jester);
	}
}
void DominionLinux::SLOTcard_Journeyman(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Journeyman);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Journeyman);
	}
}
void DominionLinux::SLOTcard_JunkDealer(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_JunkDealer);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_JunkDealer);
	}
}
void DominionLinux::SLOTcard_KingsCourt(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_KingsCourt);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_KingsCourt);
	}
}
void DominionLinux::SLOTcard_Laboratory(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Laboratory);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Laboratory);
	}
}
void DominionLinux::SLOTcard_Library(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Library);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Library);
	}
}
void DominionLinux::SLOTcard_Lighthouse(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Lighthouse);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Lighthouse);
	}
}
void DominionLinux::SLOTcard_Loan(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Loan);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Loan);
	}
}
void DominionLinux::SLOTcard_Lookout(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Lookout);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Lookout);
	}
}
void DominionLinux::SLOTcard_Madman(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Madman);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Madman);
	}
}
void DominionLinux::SLOTcard_Marauder(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Marauder);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Marauder);
	}
}
void DominionLinux::SLOTcard_Market(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Market);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Market);
	}
}
void DominionLinux::SLOTcard_MarketSquare(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_MarketSquare);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_MarketSquare);
	}
}
void DominionLinux::SLOTcard_Masquerade(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Masquerade);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Masquerade);
	}
}
void DominionLinux::SLOTcard_Masterpiece(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Masterpiece);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Masterpiece);
	}
}
void DominionLinux::SLOTcard_Menagerie(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Menagerie);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Menagerie);
	}
}
void DominionLinux::SLOTcard_Mercenary(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Mercenary);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Mercenary);
	}
}
void DominionLinux::SLOTcard_MerchantGuild(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_MerchantGuild);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_MerchantGuild);
	}
}
void DominionLinux::SLOTcard_MerchantShip(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_MerchantShip);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_MerchantShip);
	}
}
void DominionLinux::SLOTcard_Militia(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Militia);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Militia);
	}
}
void DominionLinux::SLOTcard_Mine(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Mine);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Mine);
	}
}
void DominionLinux::SLOTcard_MiningVillage(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_MiningVillage);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_MiningVillage);
	}
}
void DominionLinux::SLOTcard_Minion(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Minion);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Minion);
	}
}
void DominionLinux::SLOTcard_Mint(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Mint);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Mint);
	}
}
void DominionLinux::SLOTcard_Moat(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Moat);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Moat);
	}
}
void DominionLinux::SLOTcard_Moneylender(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Moneylender);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Moneylender);
	}
}
void DominionLinux::SLOTcard_Monument(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Monument);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Monument);
	}
}
void DominionLinux::SLOTcard_Mountebank(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Mountebank);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Mountebank);
	}
}
void DominionLinux::SLOTcard_Mystic(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Mystic);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Mystic);
	}
}
void DominionLinux::SLOTcard_NativeVillage(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_NativeVillage);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_NativeVillage);
	}
}
void DominionLinux::SLOTcard_Navigator(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Navigator);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Navigator);
	}
}
void DominionLinux::SLOTcard_Necropolis(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Necropolis);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Necropolis);
	}
}
void DominionLinux::SLOTcard_Nobles(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Nobles);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Nobles);
	}
}
void DominionLinux::SLOTcard_Outpost(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Outpost);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Outpost);
	}
}
void DominionLinux::SLOTcard_OvergrownEstate(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_OvergrownEstate);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_OvergrownEstate);
	}
}
void DominionLinux::SLOTcard_Pawn(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Pawn);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Pawn);
	}
}
void DominionLinux::SLOTcard_PearlDiver(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_PearlDiver);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_PearlDiver);
	}
}
void DominionLinux::SLOTcard_Peddler(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Peddler);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Peddler);
	}
}
void DominionLinux::SLOTcard_PhilosophersStone(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_PhilosophersStone);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_PhilosophersStone);
	}
}
void DominionLinux::SLOTcard_Pillage(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Pillage);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Pillage);
	}
}
void DominionLinux::SLOTcard_PirateShip(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_PirateShip);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_PirateShip);
	}
}
void DominionLinux::SLOTcard_Platinum(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Platinum);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Platinum);
	}
}
void DominionLinux::SLOTcard_Plaza(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Plaza);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Plaza);
	}
}
void DominionLinux::SLOTcard_PoorHouse(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_PoorHouse);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_PoorHouse);
	}
}
void DominionLinux::SLOTcard_Possession(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Possession);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Possession);
	}
}
void DominionLinux::SLOTcard_Potion(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Potion);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Potion);
	}
}
void DominionLinux::SLOTcard_Princess(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Princess);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Princess);
	}
}
void DominionLinux::SLOTcard_Procession(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Procession);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Procession);
	}
}
void DominionLinux::SLOTcard_Province(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Province);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Province);
	}
}
void DominionLinux::SLOTcard_Quarry(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Quarry);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Quarry);
	}
}
void DominionLinux::SLOTcard_Rabble(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Rabble);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Rabble);
	}
}
void DominionLinux::SLOTcard_Rats(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Rats);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Rats);
	}
}
void DominionLinux::SLOTcard_Rebuild(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Rebuild);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Rebuild);
	}
}
void DominionLinux::SLOTcard_Remake(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Remake);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Remake);
	}
}
void DominionLinux::SLOTcard_Remodel(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Remodel);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Remodel);
	}
}
void DominionLinux::SLOTcard_Rogue(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Rogue);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Rogue);
	}
}
void DominionLinux::SLOTcard_RoyalSeal(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_RoyalSeal);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_RoyalSeal);
	}
}
void DominionLinux::SLOTcard_RuinedLibrary(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_RuinedLibrary);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_RuinedLibrary);
	}
}
void DominionLinux::SLOTcard_RuinedMarket(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_RuinedMarket);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_RuinedMarket);
	}
}
void DominionLinux::SLOTcard_RuinedVillage(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_RuinedVillage);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_RuinedVillage);
	}
}
void DominionLinux::SLOTcard_Saboteur(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Saboteur);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Saboteur);
	}
}
void DominionLinux::SLOTcard_Sage(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Sage);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Sage);
	}
}
void DominionLinux::SLOTcard_Salvager(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Salvager);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Salvager);
	}
}
void DominionLinux::SLOTcard_Scavenger(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Scavenger);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Scavenger);
	}
}
void DominionLinux::SLOTcard_Scout(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Scout);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Scout);
	}
}
void DominionLinux::SLOTcard_ScryingPool(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_ScryingPool);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_ScryingPool);
	}
}
void DominionLinux::SLOTcard_SeaHag(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_SeaHag);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_SeaHag);
	}
}
void DominionLinux::SLOTcard_SecretChamber(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_SecretChamber);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_SecretChamber);
	}
}
void DominionLinux::SLOTcard_ShantyTown(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_ShantyTown);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_ShantyTown);
	}
}
void DominionLinux::SLOTcard_Silver(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Silver);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Silver);
	}
}
void DominionLinux::SLOTcard_SirBailey(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_SirBailey);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_SirBailey);
	}
}
void DominionLinux::SLOTcard_SirDestry(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_SirDestry);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_SirDestry);
	}
}
void DominionLinux::SLOTcard_SirMartin(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_SirMartin);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_SirMartin);
	}
}
void DominionLinux::SLOTcard_SirMichael(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_SirMichael);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_SirMichael);
	}
}
void DominionLinux::SLOTcard_SirVander(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_SirVander);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_SirVander);
	}
}
void DominionLinux::SLOTcard_Smithy(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Smithy);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Smithy);
	}
}
void DominionLinux::SLOTcard_Smugglers(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Smugglers);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Smugglers);
	}
}
void DominionLinux::SLOTcard_Soothsayer(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Soothsayer);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Soothsayer);
	}
}
void DominionLinux::SLOTcard_Spoils(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Spoils);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Spoils);
	}
}
void DominionLinux::SLOTcard_Spy(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Spy);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Spy);
	}
}
void DominionLinux::SLOTcard_Squire(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Squire);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Squire);
	}
}
void DominionLinux::SLOTcard_Stash(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Stash);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Stash);
	}
}
void DominionLinux::SLOTcard_Steward(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Steward);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Steward);
	}
}
void DominionLinux::SLOTcard_Stonemason(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Stonemason);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Stonemason);
	}
}
void DominionLinux::SLOTcard_Storeroom(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Storeroom);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Storeroom);
	}
}
void DominionLinux::SLOTcard_Survivors(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Survivors);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Survivors);
	}
}
void DominionLinux::SLOTcard_Swindler(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Swindler);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Swindler);
	}
}
void DominionLinux::SLOTcard_Tactician(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Tactician);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Tactician);
	}
}
void DominionLinux::SLOTcard_Talisman(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Talisman);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Talisman);
	}
}
void DominionLinux::SLOTcard_Taxman(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Taxman);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Taxman);
	}
}
void DominionLinux::SLOTcard_Thief(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Thief);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Thief);
	}
}
void DominionLinux::SLOTcard_ThroneRoom(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_ThroneRoom);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_ThroneRoom);
	}
}
void DominionLinux::SLOTcard_Torturer(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Torturer);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Torturer);
	}
}
void DominionLinux::SLOTcard_Tournament(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Tournament);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Tournament);
	}
}
void DominionLinux::SLOTcard_TradeRoute(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_TradeRoute);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_TradeRoute);
	}
}
void DominionLinux::SLOTcard_TradingPost(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_TradingPost);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_TradingPost);
	}
}
void DominionLinux::SLOTcard_Transmute(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Transmute);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Transmute);
	}
}
void DominionLinux::SLOTcard_TreasureMap(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_TreasureMap);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_TreasureMap);
	}
}
void DominionLinux::SLOTcard_Treasury(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Treasury);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Treasury);
	}
}
void DominionLinux::SLOTcard_Tribute(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Tribute);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Tribute);
	}
}
void DominionLinux::SLOTcard_TrustySteed(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_TrustySteed);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_TrustySteed);
	}
}
void DominionLinux::SLOTcard_University(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_University);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_University);
	}
}
void DominionLinux::SLOTcard_Upgrade(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Upgrade);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Upgrade);
	}
}
void DominionLinux::SLOTcard_Urchin(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Urchin);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Urchin);
	}
}
void DominionLinux::SLOTcard_Vagrant(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Vagrant);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Vagrant);
	}
}
void DominionLinux::SLOTcard_Vault(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Vault);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Vault);
	}
}
void DominionLinux::SLOTcard_Venture(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Venture);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Venture);
	}
}
void DominionLinux::SLOTcard_Village(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Village);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Village);
	}
}
void DominionLinux::SLOTcard_Vineyard(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Vineyard);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Vineyard);
	}
}
void DominionLinux::SLOTcard_WalledVillage(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_WalledVillage);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_WalledVillage);
	}
}
void DominionLinux::SLOTcard_WanderingMinstrel(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_WanderingMinstrel);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_WanderingMinstrel);
	}
}
void DominionLinux::SLOTcard_Warehouse(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Warehouse);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Warehouse);
	}
}
void DominionLinux::SLOTcard_Watchtower(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Watchtower);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Watchtower);
	}
}
void DominionLinux::SLOTcard_Wharf(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Wharf);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Wharf);
	}
}
void DominionLinux::SLOTcard_WishingWell(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_WishingWell);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_WishingWell);
	}
}
void DominionLinux::SLOTcard_Witch(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Witch);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Witch);
	}
}
void DominionLinux::SLOTcard_Woodcutter(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Woodcutter);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Woodcutter);
	}
}
void DominionLinux::SLOTcard_WorkersVillage(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_WorkersVillage);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_WorkersVillage);
	}
}
void DominionLinux::SLOTcard_Workshop(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_Workshop);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_Workshop);
	}
}
void DominionLinux::SLOTcard_YoungWitch(bool Checked)
{
	if (Checked == true)
	{
		ui->verticalLayout_Enabled->addWidget(card_YoungWitch);
	}
	else if (Checked == false)
	{
		ui->verticalLayout_Disabled->addWidget(card_YoungWitch);
	}
}



/*The following code will only need to be changed if a new **CARD TYPE** is added.
 *For example, if a new card that had duration~action~reaction as its type, you would:
 *a) Goto the designer, and add a new spinbox named "flag_DurationActionReaction"
 *b) Position that spinbox on the invisible dock, "dockWidget_Invisible"
 *   so it isnt seen on the ui
 *c) place code "ui->flag_DurationActionReaction->step" + "Up();" and "Down();"
 *   in the 3 slots below for actions, reactions, and duration.
 *d) goto https://docs.google.com/spreadsheet/ccc?key=0AmXdRsCSWUwWdFYtUERoeXRHbXZxODMtMENRczJZalE#gid=15
 *   And add the new card to that database.
 */
void DominionLinux::on_checkBox_Action_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Action->stepUp();
		ui->flag_ActionLooter->stepUp();
		ui->flag_ActionPrize->stepUp();
		ui->flag_ActionShelter->stepUp();
		ui->flag_AttackActionKnight->stepUp();
		ui->flag_AttackActionLooter->stepUp();
		ui->flag_AttackActionPrize->stepUp();
		ui->flag_AttackAction->stepUp();
		ui->flag_DurationAction->stepUp();
		ui->flag_ReactionAction->stepUp();
		ui->flag_ReactionShelter->stepUp();
		ui->flag_RuinsAction->stepUp();
		ui->flag_VictoryAction->stepUp();
	}
	else {
		ui->flag_Action->stepDown();
		ui->flag_ActionLooter->stepDown();
		ui->flag_ActionPrize->stepDown();
		ui->flag_ActionShelter->stepDown();
		ui->flag_AttackActionKnight->stepDown();
		ui->flag_AttackActionLooter->stepDown();
		ui->flag_AttackActionPrize->stepDown();
		ui->flag_AttackAction->stepDown();
		ui->flag_DurationAction->stepDown();
		ui->flag_ReactionAction->stepDown();
		ui->flag_ReactionShelter->stepDown();
		ui->flag_RuinsAction->stepDown();
		ui->flag_VictoryAction->stepDown();
	}
}
void DominionLinux::on_checkBox_Attack_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Attack->stepUp();
		ui->flag_AttackAction->stepUp();
		ui->flag_AttackActionKnight->stepUp();
		ui->flag_AttackActionLooter->stepUp();
		ui->flag_AttackActionPrize->stepUp();
		ui->flag_AttackVictoryKnightAction->stepUp();
	}
	else {
		ui->flag_Attack->stepDown();
		ui->flag_AttackAction->stepDown();
		ui->flag_AttackActionKnight->stepDown();
		ui->flag_AttackActionLooter->stepDown();
		ui->flag_AttackActionPrize->stepDown();
		ui->flag_AttackVictoryKnightAction->stepDown();
	}
}
void DominionLinux::on_checkBox_Curse_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Curse->stepUp();
	}
	else {
		ui->flag_Curse->stepDown();
	}
}
void DominionLinux::on_checkBox_Duration_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Duration->stepUp();
		ui->flag_DurationAction->stepUp();
	}
	else {
		ui->flag_Duration->stepDown();
		ui->flag_DurationAction->stepDown();
	}
}
void DominionLinux::on_checkBox_Knight_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Knight->stepUp();
		ui->flag_AttackActionKnight->stepUp();
		ui->flag_AttackVictoryKnightAction->stepUp();
	}
	else {
		ui->flag_Knight->stepDown();
		ui->flag_AttackActionKnight->stepDown();
		ui->flag_AttackVictoryKnightAction->stepDown();
	}
}
void DominionLinux::on_checkBox_Looter_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Looter->stepUp();
		ui->flag_ActionLooter->stepUp();
		ui->flag_AttackActionLooter->stepUp();
	}
	else {
		ui->flag_Looter->stepDown();
		ui->flag_ActionLooter->stepDown();
		ui->flag_AttackActionLooter->stepDown();
	}
}
void DominionLinux::on_checkBox_Prize_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Prize->stepUp();
		ui->flag_AttackActionPrize->stepUp();
		ui->flag_TreasurePrize->stepUp();
		ui->flag_AttackActionPrize->stepUp();
	}
	else {
		ui->flag_Prize->stepDown();
		ui->flag_AttackActionPrize->stepDown();
		ui->flag_TreasurePrize->stepDown();
		ui->flag_AttackActionPrize->stepDown();
	}
}
void DominionLinux::on_checkBox_Reaction_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Reaction->stepUp();
		ui->flag_ReactionAction->stepUp();
		ui->flag_ReactionShelter->stepUp();
	}
	else {
		ui->flag_Reaction->stepDown();
		ui->flag_ReactionAction->stepDown();
		ui->flag_ReactionShelter->stepDown();
	}
}
void DominionLinux::on_checkBox_Ruins_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Ruins->stepUp();
		ui->flag_RuinsAction->stepUp();
	}
	else {
		ui->flag_Ruins->stepDown();
		ui->flag_RuinsAction->stepDown();
	}
}
void DominionLinux::on_checkBox_Shelter_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Shelter->stepUp();
		ui->flag_ActionShelter->stepUp();
		ui->flag_VictoryShelter->stepUp();
		ui->flag_ReactionShelter->stepUp();
	}
	else {
		ui->flag_Shelter->stepDown();
		ui->flag_ActionShelter->stepDown();
		ui->flag_VictoryShelter->stepDown();
		ui->flag_ReactionShelter->stepDown();
	}
}
void DominionLinux::on_checkBox_Treasure_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Treasure->stepUp();
		ui->flag_TreasurePrize->stepUp();
		ui->flag_VictoryTreasure->stepUp();
	}
	else {
		ui->flag_Treasure->stepDown();
		ui->flag_TreasurePrize->stepDown();
		ui->flag_VictoryTreasure->stepDown();
	}
}
void DominionLinux::on_checkBox_Victory_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Victory->stepUp();
		ui->flag_VictoryAction->stepUp();
		ui->flag_VictoryShelter->stepUp();
		ui->flag_VictoryTreasure->stepUp();
		ui->flag_AttackVictoryKnightAction->stepUp();
	}
	else {
		ui->flag_Victory->stepDown();
		ui->flag_VictoryAction->stepDown();
		ui->flag_VictoryShelter->stepDown();
		ui->flag_VictoryTreasure->stepDown();
		ui->flag_AttackVictoryKnightAction->stepDown();
	}
}



//This code will only need to be changed if new cards from Rio Grande are released, or custom cards are added.
void DominionLinux::on_flag_Action_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Adventurer->setHidden(true);
		card_Advisor->setHidden(true);
		card_Alchemist->setHidden(true);
		card_Altar->setHidden(true);
		card_Apothecary->setHidden(true);
		card_Apprentice->setHidden(true);
		card_Armory->setHidden(true);
		card_Baker->setHidden(true);
		card_BandofMisfits->setHidden(true);
		card_BanditCamp->setHidden(true);
		card_Baron->setHidden(true);
		card_Bazaar->setHidden(true);
		card_Bishop->setHidden(true);
		card_BlackMarket->setHidden(true);
		card_Bridge->setHidden(true);
		card_Butcher->setHidden(true);
		card_CandlestickMaker->setHidden(true);
		card_Catacombs->setHidden(true);
		card_Cellar->setHidden(true);
		card_Chancellor->setHidden(true);
		card_Chapel->setHidden(true);
		card_City->setHidden(true);
		card_Conspirator->setHidden(true);
		card_Coppersmith->setHidden(true);
		card_CouncilRoom->setHidden(true);
		card_Count->setHidden(true);
		card_CountingHouse->setHidden(true);
		card_Courtyard->setHidden(true);
		card_Doctor->setHidden(true);
		card_Embargo->setHidden(true);
		card_Envoy->setHidden(true);
		card_Expand->setHidden(true);
		card_Explorer->setHidden(true);
		card_FarmingVillage->setHidden(true);
		card_Feast->setHidden(true);
		card_Festival->setHidden(true);
		card_Forager->setHidden(true);
		card_Forge->setHidden(true);
		card_Fortress->setHidden(true);
		card_Golem->setHidden(true);
		card_Governor->setHidden(true);
		card_GrandMarket->setHidden(true);
		card_Graverobber->setHidden(true);
		card_Hamlet->setHidden(true);
		card_Harvest->setHidden(true);
		card_Herald->setHidden(true);
		card_Herbalist->setHidden(true);
		card_Hermit->setHidden(true);
		card_HuntingGrounds->setHidden(true);
		card_HuntingParty->setHidden(true);
		card_Ironmonger->setHidden(true);
		card_Ironworks->setHidden(true);
		card_Journeyman->setHidden(true);
		card_JunkDealer->setHidden(true);
		card_KingsCourt->setHidden(true);
		card_Laboratory->setHidden(true);
		card_Library->setHidden(true);
		card_Lookout->setHidden(true);
		card_Madman->setHidden(true);
		card_Market->setHidden(true);
		card_Masquerade->setHidden(true);
		card_Menagerie->setHidden(true);
		card_MerchantGuild->setHidden(true);
		card_Mine->setHidden(true);
		card_MiningVillage->setHidden(true);
		card_Mint->setHidden(true);
		card_Moneylender->setHidden(true);
		card_Monument->setHidden(true);
		card_Mystic->setHidden(true);
		card_NativeVillage->setHidden(true);
		card_Navigator->setHidden(true);
		card_Pawn->setHidden(true);
		card_PearlDiver->setHidden(true);
		card_Peddler->setHidden(true);
		card_Plaza->setHidden(true);
		card_PoorHouse->setHidden(true);
		card_Possession->setHidden(true);
		card_Procession->setHidden(true);
		card_Rats->setHidden(true);
		card_Rebuild->setHidden(true);
		card_Remake->setHidden(true);
		card_Remodel->setHidden(true);
		card_Sage->setHidden(true);
		card_Salvager->setHidden(true);
		card_Scavenger->setHidden(true);
		card_Scout->setHidden(true);
		card_ShantyTown->setHidden(true);
		card_Smithy->setHidden(true);
		card_Smugglers->setHidden(true);
		card_Squire->setHidden(true);
		card_Steward->setHidden(true);
		card_Stonemason->setHidden(true);
		card_Storeroom->setHidden(true);
		card_ThroneRoom->setHidden(true);
		card_Tournament->setHidden(true);
		card_TradeRoute->setHidden(true);
		card_TradingPost->setHidden(true);
		card_Transmute->setHidden(true);
		card_TreasureMap->setHidden(true);
		card_Treasury->setHidden(true);
		card_Tribute->setHidden(true);
		card_University->setHidden(true);
		card_Upgrade->setHidden(true);
		card_Vagrant->setHidden(true);
		card_Vault->setHidden(true);
		card_Village->setHidden(true);
		card_WalledVillage->setHidden(true);
		card_WanderingMinstrel->setHidden(true);
		card_Warehouse->setHidden(true);
		card_WishingWell->setHidden(true);
		card_Woodcutter->setHidden(true);
		card_WorkersVillage->setHidden(true);
		card_Workshop->setHidden(true);
	}
	else {
		card_Adventurer->setHidden(false);
		card_Advisor->setHidden(false);
		card_Alchemist->setHidden(false);
		card_Altar->setHidden(false);
		card_Apothecary->setHidden(false);
		card_Apprentice->setHidden(false);
		card_Armory->setHidden(false);
		card_Baker->setHidden(false);
		card_BandofMisfits->setHidden(false);
		card_BanditCamp->setHidden(false);
		card_Baron->setHidden(false);
		card_Bazaar->setHidden(false);
		card_Bishop->setHidden(false);
		card_BlackMarket->setHidden(false);
		card_Bridge->setHidden(false);
		card_Butcher->setHidden(false);
		card_CandlestickMaker->setHidden(false);
		card_Catacombs->setHidden(false);
		card_Cellar->setHidden(false);
		card_Chancellor->setHidden(false);
		card_Chapel->setHidden(false);
		card_City->setHidden(false);
		card_Conspirator->setHidden(false);
		card_Coppersmith->setHidden(false);
		card_CouncilRoom->setHidden(false);
		card_Count->setHidden(false);
		card_CountingHouse->setHidden(false);
		card_Courtyard->setHidden(false);
		card_Doctor->setHidden(false);
		card_Embargo->setHidden(false);
		card_Envoy->setHidden(false);
		card_Expand->setHidden(false);
		card_Explorer->setHidden(false);
		card_FarmingVillage->setHidden(false);
		card_Feast->setHidden(false);
		card_Festival->setHidden(false);
		card_Forager->setHidden(false);
		card_Forge->setHidden(false);
		card_Fortress->setHidden(false);
		card_Golem->setHidden(false);
		card_Governor->setHidden(false);
		card_GrandMarket->setHidden(false);
		card_Graverobber->setHidden(false);
		card_Hamlet->setHidden(false);
		card_Harvest->setHidden(false);
		card_Herald->setHidden(false);
		card_Herbalist->setHidden(false);
		card_Hermit->setHidden(false);
		card_HuntingGrounds->setHidden(false);
		card_HuntingParty->setHidden(false);
		card_Ironmonger->setHidden(false);
		card_Ironworks->setHidden(false);
		card_Journeyman->setHidden(false);
		card_JunkDealer->setHidden(false);
		card_KingsCourt->setHidden(false);
		card_Laboratory->setHidden(false);
		card_Library->setHidden(false);
		card_Lookout->setHidden(false);
		card_Madman->setHidden(false);
		card_Market->setHidden(false);
		card_Masquerade->setHidden(false);
		card_Menagerie->setHidden(false);
		card_MerchantGuild->setHidden(false);
		card_Mine->setHidden(false);
		card_MiningVillage->setHidden(false);
		card_Mint->setHidden(false);
		card_Moneylender->setHidden(false);
		card_Monument->setHidden(false);
		card_Mystic->setHidden(false);
		card_NativeVillage->setHidden(false);
		card_Navigator->setHidden(false);
		card_Pawn->setHidden(false);
		card_PearlDiver->setHidden(false);
		card_Peddler->setHidden(false);
		card_Plaza->setHidden(false);
		card_PoorHouse->setHidden(false);
		card_Possession->setHidden(false);
		card_Procession->setHidden(false);
		card_Rats->setHidden(false);
		card_Rebuild->setHidden(false);
		card_Remake->setHidden(false);
		card_Remodel->setHidden(false);
		card_Sage->setHidden(false);
		card_Salvager->setHidden(false);
		card_Scavenger->setHidden(false);
		card_Scout->setHidden(false);
		card_ShantyTown->setHidden(false);
		card_Smithy->setHidden(false);
		card_Smugglers->setHidden(false);
		card_Squire->setHidden(false);
		card_Steward->setHidden(false);
		card_Stonemason->setHidden(false);
		card_Storeroom->setHidden(false);
		card_ThroneRoom->setHidden(false);
		card_Tournament->setHidden(false);
		card_TradeRoute->setHidden(false);
		card_TradingPost->setHidden(false);
		card_Transmute->setHidden(false);
		card_TreasureMap->setHidden(false);
		card_Treasury->setHidden(false);
		card_Tribute->setHidden(false);
		card_University->setHidden(false);
		card_Upgrade->setHidden(false);
		card_Vagrant->setHidden(false);
		card_Vault->setHidden(false);
		card_Village->setHidden(false);
		card_WalledVillage->setHidden(false);
		card_WanderingMinstrel->setHidden(false);
		card_Warehouse->setHidden(false);
		card_WishingWell->setHidden(false);
		card_Woodcutter->setHidden(false);
		card_WorkersVillage->setHidden(false);
		card_Workshop->setHidden(false);
	}
}
void DominionLinux::on_flag_Curse_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Curse->setHidden(true);
	}
	else {
		card_Curse->setHidden(false);
	}
}
void DominionLinux::on_flag_Prize_valueChanged(int arg1)
{
	if (arg1 != 0){
		//card_->setHidden(true);
	}
	else {
		//card_->setHidden(false);
	}
}
void DominionLinux::on_flag_Knight_valueChanged(int arg1)
{
	if (arg1 != 0){
		//card_->setHidden(true);
	}
	else {
		//card_->setHidden(false);
	}
}
void DominionLinux::on_flag_Ruins_valueChanged(int arg1)
{
	if (arg1 != 0){
		//card_->setHidden(true);
	}
	else {
		//card_->setHidden(false);
	}
}
void DominionLinux::on_flag_Attack_valueChanged(int arg1)
{
	if (arg1 != 0){
		//card_->setHidden(true);
	}
	else {
		//card_->setHidden(false);
	}
}
void DominionLinux::on_flag_Duration_valueChanged(int arg1)
{
	if (arg1 != 0){
		//card_->setHidden(true);
	}
	else {
		//card_->setHidden(false);
	}
}
void DominionLinux::on_flag_Looter_valueChanged(int arg1)
{
	if (arg1 != 0){
		//card_->setHidden(true);
	}
	else {
		//card_->setHidden(false);
	}
}
void DominionLinux::on_flag_Reaction_valueChanged(int arg1)
{
	if (arg1 != 0){
		//card_->setHidden(true);
	}
	else {
		//card_->setHidden(false);
	}
}
void DominionLinux::on_flag_Shelter_valueChanged(int arg1)
{
	if (arg1 != 0){
		//card_->setHidden(true);
	}
	else {
		//card_->setHidden(false);
	}
}
void DominionLinux::on_flag_Victory_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Colony->setHidden(true);
		card_Dutchy->setHidden(true);
		card_Estate->setHidden(true);
		card_Province->setHidden(true);
		card_Duke->setHidden(true);
		card_Fairgrounds->setHidden(true);
		card_Feodum->setHidden(true);
		card_Gardens->setHidden(true);
		card_Vineyard->setHidden(true);
	}
	else {
		card_Colony->setHidden(false);
		card_Dutchy->setHidden(false);
		card_Estate->setHidden(false);
		card_Province->setHidden(false);
		card_Duke->setHidden(false);
		card_Fairgrounds->setHidden(false);
		card_Feodum->setHidden(false);
		card_Gardens->setHidden(false);
		card_Vineyard->setHidden(false);
	}
}
void DominionLinux::on_flag_ActionLooter_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_DeathCart->setHidden(true);
	}
	else {
		card_DeathCart->setHidden(false);
	}
}
void DominionLinux::on_flag_ActionPrize_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_BagofGold->setHidden(true);
		card_Princess->setHidden(true);
		card_TrustySteed->setHidden(true);
	}
	else {
		card_BagofGold->setHidden(false);
		card_Princess->setHidden(false);
		card_TrustySteed->setHidden(false);
	}
}
void DominionLinux::on_flag_ActionShelter_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Necropolis->setHidden(true);
	}
	else {
		card_Necropolis->setHidden(false);
	}
}
void DominionLinux::on_flag_AttackAction_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Ambassador->setHidden(true);
		card_Bureaucrat->setHidden(true);
		card_Cutpurse->setHidden(true);
		card_Familiar->setHidden(true);
		card_FortuneTeller->setHidden(true);
		card_GhostShip->setHidden(true);
		card_Goons->setHidden(true);
		card_Jester->setHidden(true);
		card_Mercenary->setHidden(true);
		card_Militia->setHidden(true);
		card_Minion->setHidden(true);
		card_Mountebank->setHidden(true);
		card_Pillage->setHidden(true);
		card_PirateShip->setHidden(true);
		card_Rabble->setHidden(true);
		card_Rogue->setHidden(true);
		card_Saboteur->setHidden(true);
		card_ScryingPool->setHidden(true);
		card_SeaHag->setHidden(true);
		card_Soothsayer->setHidden(true);
		card_Spy->setHidden(true);
		card_Swindler->setHidden(true);
		card_Taxman->setHidden(true);
		card_Thief->setHidden(true);
		card_Torturer->setHidden(true);
		card_Urchin->setHidden(true);
		card_Witch->setHidden(true);
		card_YoungWitch->setHidden(true);	}
	else {
		card_Ambassador->setHidden(false);
		card_Bureaucrat->setHidden(false);
		card_Cutpurse->setHidden(false);
		card_Familiar->setHidden(false);
		card_FortuneTeller->setHidden(false);
		card_GhostShip->setHidden(false);
		card_Goons->setHidden(false);
		card_Jester->setHidden(false);
		card_Mercenary->setHidden(false);
		card_Militia->setHidden(false);
		card_Minion->setHidden(false);
		card_Mountebank->setHidden(false);
		card_Pillage->setHidden(false);
		card_PirateShip->setHidden(false);
		card_Rabble->setHidden(false);
		card_Rogue->setHidden(false);
		card_Saboteur->setHidden(false);
		card_ScryingPool->setHidden(false);
		card_SeaHag->setHidden(false);
		card_Soothsayer->setHidden(false);
		card_Spy->setHidden(false);
		card_Swindler->setHidden(false);
		card_Taxman->setHidden(false);
		card_Thief->setHidden(false);
		card_Torturer->setHidden(false);
		card_Urchin->setHidden(false);
		card_Witch->setHidden(false);
		card_YoungWitch->setHidden(false);	}
}
void DominionLinux::on_flag_AttackActionKnight_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_DameAnna->setHidden(true);
		card_DameMolly->setHidden(true);
		card_DameNatalie->setHidden(true);
		card_DameSylvia->setHidden(true);
		card_SirBailey->setHidden(true);
		card_SirDestry->setHidden(true);
		card_SirMartin->setHidden(true);
		card_SirMichael->setHidden(true);
		card_SirVander->setHidden(true);	}
	else {
		card_DameAnna->setHidden(true);
		card_DameMolly->setHidden(true);
		card_DameNatalie->setHidden(true);
		card_DameSylvia->setHidden(true);
		card_SirBailey->setHidden(true);
		card_SirDestry->setHidden(true);
		card_SirMartin->setHidden(true);
		card_SirMichael->setHidden(true);
		card_SirVander->setHidden(true);	}
}
void DominionLinux::on_flag_AttackActionLooter_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Cultist->setHidden(true);
		card_Marauder->setHidden(true);
	}
	else {
		card_Cultist->setHidden(false);
		card_Marauder->setHidden(false);
	}
}
void DominionLinux::on_flag_AttackActionPrize_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Followers->setHidden(true);
	}
	else {
		card_Followers->setHidden(false);
	}
}
void DominionLinux::on_flag_AttackVictoryKnightAction_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_DameJosephine->setHidden(true);
	}
	else {
		card_DameJosephine->setHidden(false);
	}
}
void DominionLinux::on_flag_DurationAction_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Caravan->setHidden(true);
		card_FishingVillage->setHidden(true);
		card_Haven->setHidden(true);
		card_Lighthouse->setHidden(true);
		card_MerchantShip->setHidden(true);
		card_Outpost->setHidden(true);
		card_Tactician->setHidden(true);
		card_Wharf->setHidden(true);
	}
	else {
		card_Caravan->setHidden(false);
		card_FishingVillage->setHidden(false);
		card_Haven->setHidden(false);
		card_Lighthouse->setHidden(false);
		card_MerchantShip->setHidden(false);
		card_Outpost->setHidden(false);
		card_Tactician->setHidden(false);
		card_Wharf->setHidden(false);
	}
}
void DominionLinux::on_flag_ReactionAction_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Beggar->setHidden(true);
		card_HorseTraders->setHidden(true);
		card_MarketSquare->setHidden(true);
		card_Moat->setHidden(true);
		card_SecretChamber->setHidden(true);
		card_Watchtower->setHidden(true);
	}
	else {
		card_Beggar->setHidden(false);
		card_HorseTraders->setHidden(false);
		card_MarketSquare->setHidden(false);
		card_Moat->setHidden(false);
		card_SecretChamber->setHidden(false);
		card_Watchtower->setHidden(false);
	}
}
void DominionLinux::on_flag_ReactionShelter_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Hovel->setHidden(true);
	}
	else {
		card_Hovel->setHidden(false);
	}
}
void DominionLinux::on_flag_RuinsAction_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_AbandonedMine->setHidden(true);
		card_RuinedLibrary->setHidden(true);
		card_RuinedMarket->setHidden(true);
		card_RuinedVillage->setHidden(true);
		card_Survivors->setHidden(true);
	}
	else {
		card_AbandonedMine->setHidden(false);
		card_RuinedLibrary->setHidden(false);
		card_RuinedMarket->setHidden(false);
		card_RuinedVillage->setHidden(false);
		card_Survivors->setHidden(false);
	}
}
void DominionLinux::on_flag_Treasure_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Copper->setHidden(true);
		card_Gold->setHidden(true);
		card_Platinum->setHidden(true);
		card_Potion->setHidden(true);
		card_Silver->setHidden(true);
		card_Bank->setHidden(true);
		card_Contraband->setHidden(true);
		card_Counterfeit->setHidden(true);
		card_Hoard->setHidden(true);
		card_HornofPlenty->setHidden(true);
		card_Loan->setHidden(true);
		card_Masterpiece->setHidden(true);
		card_PhilosophersStone->setHidden(true);
		card_Quarry->setHidden(true);
		card_RoyalSeal->setHidden(true);
		card_Spoils->setHidden(true);
		card_Stash->setHidden(true);
		card_Talisman->setHidden(true);
		card_Venture->setHidden(true);
	}
	else {
		card_Copper->setHidden(false);
		card_Gold->setHidden(false);
		card_Platinum->setHidden(false);
		card_Potion->setHidden(false);
		card_Silver->setHidden(false);
		card_Bank->setHidden(false);
		card_Contraband->setHidden(false);
		card_Counterfeit->setHidden(false);
		card_Hoard->setHidden(false);
		card_HornofPlenty->setHidden(false);
		card_Loan->setHidden(false);
		card_Masterpiece->setHidden(false);
		card_PhilosophersStone->setHidden(false);
		card_Quarry->setHidden(false);
		card_RoyalSeal->setHidden(false);
		card_Spoils->setHidden(false);
		card_Stash->setHidden(false);
		card_Talisman->setHidden(false);
		card_Venture->setHidden(false);
	}
}
void DominionLinux::on_flag_TreasurePrize_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Diadem->setHidden(true);

	}
	else {
		card_Diadem->setHidden(false);

	}
}
void DominionLinux::on_flag_VictoryAction_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_GreatHall->setHidden(true);
		card_Island->setHidden(true);
		card_Nobles->setHidden(true);

	}
	else {
		card_GreatHall->setHidden(false);
		card_Island->setHidden(false);
		card_Nobles->setHidden(false);
	}
}
void DominionLinux::on_flag_VictoryShelter_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_OvergrownEstate->setHidden(true);
	}
	else {
		card_OvergrownEstate->setHidden(false);
	}
}
void DominionLinux::on_flag_VictoryTreasure_valueChanged(int arg1)
{
	if (arg1 != 0){
		card_Harem->setHidden(true);
	}
	else {
		card_Harem->setHidden(false);
	}
}



//This code does not need to be touched. Its the enabler for the "Play" push button
void DominionLinux::on_checkBox_2Players_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Play->stepUp();
	}
	else {ui->flag_Play->stepDown();}
}
void DominionLinux::on_checkBox_3Players_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Play->stepUp();
	}
	else {ui->flag_Play->stepDown();}
}
void DominionLinux::on_checkBox_4Players_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Play->stepUp();
	}
	else {ui->flag_Play->stepDown();}
}
void DominionLinux::on_checkBox_5Players_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Play->stepUp();
	}
	else {ui->flag_Play->stepDown();}
}
void DominionLinux::on_checkBox_6Players_toggled(bool Checked)
{
	if (Checked == true){
		ui->flag_Play->stepUp();
	}
	else {ui->flag_Play->stepDown();}
}
void DominionLinux::on_flag_Play_valueChanged(int arg1)
{
	if (arg1 > 0){
		ui->pushButtonPlay->setEnabled(true);
	}
	else {ui->pushButtonPlay->setEnabled(false);}
}

void DominionLinux::on_StartSignal_clicked()
{

}
