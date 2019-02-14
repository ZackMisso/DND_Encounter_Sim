#pragma once

#include <dnd.h>
#include <creature_stats.h>

// status effects will have to probably be hard coded

// TODO: hardcode all status effects
class StatusEffect
{
public:
    StatusEffect();

    virtual void evaluate(pcg32& rng,
                          Creature_Stats* victim,
                          Creature_Stats* caster) = 0;

    virtual void readFlavorText(string victim_name,
                                string caster_name,
                                int value) const = 0;

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

    virtual void evaluate(pcg32& rng,
                          Creature_Stats* victim,
                          Creature_Stats* caster);

    // um should this have a unique parameter object?
    virtual void readFlavorText(string victim_name,
                                string caster_name,
                                int value) const;

    static Instant_Damage* creatureInstantDamage(Dice dice, Attribute attribute);

protected:
    Dice damage;
    Attribute attribute;
    DamageType type;
};
