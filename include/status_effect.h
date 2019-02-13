#pragma once

#include <dnd.h>

// status effects will have to probably be hard coded

// TODO: hardcode all status effects
class StatusEffect
{
public:
    StatusEffect();

    virutal void evaluate(Creature_Stats* victim, Creature_Stats* caster) = 0;

    string getName() const;
    string getFlavorText() const;

    void setName(string param);
    void setFlavorText(string param);

protected:
    string name;
    string flavorText;
};

class Instant_Damage : public StatusEffect
{
public:
    Instant_Damage(Dice dice, Attribute attribute);

    virtual void evaluate(Creature_Stats* victim, Creature_Stats* caster);

    static Instant_Damage* creatureInstantDamage(Dice dice, Attribute attribute);

protected:
    Dice damage;
    Attribute attribute;
};
