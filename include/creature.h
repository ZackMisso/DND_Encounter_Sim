#pragma once

#include <action.h>
#include <creature_stats.h>

class Creature
{
public:
    Creature();
    ~Creature();

    void addAction(Action* action);

    void parseFromFile(string filename);

protected:
    vector<StatusEffect>* currentStatusEffects;
    vector<Action*> actions;
    Creature_Stats* stats;
};
