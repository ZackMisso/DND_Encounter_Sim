#include <creature.h>

Creature::Creature()
{
    actions = vector<Action*>();
    stats = new Creature_Stats();
}

Creature::~Creature()
{
    for (int i = 0; i < actions.size(); ++i)
    {
        delete actions[i];
    }
    delete stats;
}

void Creature::parseFromFile(string filename)
{
    // TODO
}

void Creature::addAction(Action* action) { actions.push_back(action); }
