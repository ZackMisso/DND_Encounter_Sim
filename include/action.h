#pragma once

#include <dnd.h>
#include <dice.h>
#include <status_effect.h>
#include <creature_stats.h>

// need to figure out the best abstraction for this

// should this be an abstraction??? or should this be general

// what is a good name for this???
// struct ActionBit
// {
//     Dice toHit;
//     Attribute attackAttribute;
//     Attribute save;
//     StatusEffect* fail;
//     StatusEffect* pass;
// };

class Action
{
public:
    Action();

    void evaluate(Creature_Stats* caster, Creature_Stats* target) const;

    void setToHit(Dice param);
    void setAttackAttribute(Attribute param);
    void setSave(Attribute param);
    void setPassEffect(StatusEffect* param);
    void setFailEffect(StatusEffect* param);

protected:
    string name;
    string flavorText;

    Dice toHit;
    Attribute attackAttribute;
    Attribute save;
    StatusEffect* fail;
    StatusEffect* pass;
};
