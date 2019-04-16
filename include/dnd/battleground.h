#pragma once

#include <dnd.h>
#include <creature.h>

struct BattleLog
{
    BattleLog();

    void printResults() const;

    // parameters
    // TODO - what parameters do I want
    // results
    int winner; // 0 - one, 1 - two
    int winner_of_initiative;
    int health_one_remaining;
    int health_two_remaining;
    int duration;
};

// this is the class that handles all of the battle simulations
class Battleground
{
public:
    Battleground(Creature* one, Creature* two);

    void evaluateBattle(BattleLog& log);

protected:
    Creature* one;
    Creature* two;
};
