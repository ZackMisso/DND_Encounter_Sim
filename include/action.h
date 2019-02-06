#pragma once

#include <dnd.h>
#include <dice.h>
#include <status_effect.h>
#include <creature_stats.h>

// need to figure out the best abstraction for this

// should this be an abstraction??? or should this be general

class Action
{
public:
    Action();

    void evaluate(Creature_Stats* caster, Creature_Stats* target) const;

    // TODO

protected:
    vector<Dice> toHit;
    vector<pair<Attribute, StatusEffect> > savingThrows;
    vector<pair<DamageType, Dice> > damage;
};
