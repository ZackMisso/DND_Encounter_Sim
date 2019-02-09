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
