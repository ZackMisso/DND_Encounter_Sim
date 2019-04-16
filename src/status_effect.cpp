#include <status_effect.h>

StatusEffect::StatusEffect()
{
    name = "null";
    flavorText = "";
}

StatusEffect::~StatusEffect() { }

string StatusEffect::getName() const { return name; }
string StatusEffect::getFlavorText() const { return flavorText; }

void StatusEffect::setName(string param) { name = param; }
void StatusEffect::setFlavorText(string param) { flavorText = param; }

///// Instant_Damage /////

Instant_Damage::Instant_Damage(Dice dice, Attribute attribute)
    : damage(dice), attribute(attribute)
{ }

void Instant_Damage::evaluate(pcg32& rng,
                              Creature_Stats* victim,
                              Creature_Stats* caster)
{
    int roll = damage.roll_total(rng) + caster->modifier(attribute);

    victim->takeDamage(roll, type);
}

void Instant_Damage::readFlavorText(string victim_name,
                                    string caster_name,
                                    int value) const
{
    // TODO
}
