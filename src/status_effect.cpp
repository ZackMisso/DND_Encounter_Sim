#include <status_effect.h>

StatusEffect::StatusEffect()
{
    name = "null";
    flavorText = "";
}

string StatusEffect::getName() const { return name; }
string StatusEffect::getFlavorText() const { return flavorText; }

void StatusEffect::setName(string param) { name = param; }
void StatusEffect::setFlavorText(string param) { flavorText = param; }

///// Instant_Damage /////

Instant_Damage::Instant_Damage(Dice dice, Attribute attribute)
    : damage(dice), attribute(attribute)
{ }

void Instant_Damage::evaluate(Creature_Stats* victim, Creature_Stats* caster)
{
    // TODO
}
