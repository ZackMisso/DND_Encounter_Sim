#include <action.h>

Action::Action()
{
    toHit = Dice();
    attackAttribute = Attribute::None;
    save = Attribute::None;
    fail = nullptr;
    pass = nullptr;
    name = "null";
    flavorText = "";
}

Action::Action(string name) : name(name)
{
    toHit = Dice();
    attackAttribute = Attribute::None;
    save = Attribute::None;
    fail = nullptr;
    pass = nullptr;
    flavorText = "";
}

void Action::evaluate(Creature_Stats* caster, Creature_Stats* target) const
{
    // TODO
}

void Action::info() const
{
    // TODO
}

string Action::getName() const { return name; }
string Action::getFlavorText() const { return flavorText; }

void Action::setToHit(Dice param) { toHit = param; }
void Action::setAttackAttribute(Attribute param) { attackAttribute = param; }
void Action::setSave(Attribute param) { save = param; }
void Action::setPassEffect(StatusEffect* param) { pass = param; }
void Action::setFailEffect(StatusEffect* param) { fail = param; }
void Action::setName(string param) { name = param; }
void Action::setFlavorText(string param) { flavorText = param; }
