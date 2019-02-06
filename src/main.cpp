#include <dnd.h>
#include <creature.h>
#include <battleground.h>

int main(int argc, char* argv[])
{
    std::cout << "This is still under construction" << std::endl;

    Creature* one = new Creature();
    Creature* two = new Creature();

    Battleground* sandbox = new Battleground(one, two);

    BattleLog log = BattleLog();
    sandbox->evaluateBattle(log);
    log.printResults();

    delete sandbox;
    delete one;
    delete two;

    return 0;
}
