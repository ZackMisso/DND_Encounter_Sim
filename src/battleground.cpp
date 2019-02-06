#include <battleground.h>

BattleLog::BattleLog()
{
    winner = -1;
    winner_of_initiative = -1;
    health_one_remaining = -1;
    health_two_remaining = -1;
    duration = -1;
}

void BattleLog::printResults() const
{
    // TODO
}

Battleground::Battleground(Creature* one, Creature* two)
    : one(one), two(two)
{
    // TODO: in the future only use clones of the parameters
}

void Battleground::evaluateBattle(BattleLog& log)
{
    // TODO: this is the meat of the project
}
