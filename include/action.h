#pragma once

#include <dnd.h>
#include <dice.h>
#include <status_effect.h>

class Action
{
public:
    Action();

    // TODO

protected:
    vector<Dice> toHit;
    vector<pair<SavingThrow, StatusEffect> > savingThrows;
    vector<pair<DamageType, Dice> > damage;
};
