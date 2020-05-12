#include <string>
#include <vector>

using namespace std;

#include "Card.h"
#include "Base.h"

Card* pirate1 = new Card("Pirate King", 5, special1());
Card* pirate2 = new Card("Buccaneer", 4, special2());
Card* pirate3 = new Card("Saucy Wench", 3, special3());
Card* pirate4 = new Card("First Mate", 2, special4());
Card* action1 = new Card("Dinghy", act1());
Card* action2 = new Card("Broadside", act2());
