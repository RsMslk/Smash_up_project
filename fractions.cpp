#include <string>
#include <vector>

using namespace std;

#include "Card.h"
#include "Base.h"

Minion* pirate1 = new Minion("Pirate King", 5, special1());
Minion* pirate2 = new Minion("Buccaneer", 4, special2());
Minion* pirate3 = new Minion("Saucy Wench", 3, special3());
Minion* pirate4 = new Minion("First Mate", 2, special4());
Action* action1 = new Action("Dinghy", act1());
Action* action2 = new Action("Broadside", act2());
