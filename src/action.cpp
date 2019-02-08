#include <action.h>

Action::Action()
{
    toHit = Dice();
    attackAttribute = Attribute::None;
    save = Attribute::None;
    fail = nullptr;
    pass = nullptr;
}

void Action::evaluate(Creature_Stats* caster, Creature_Stats* target) const
{
    // TODO
}

void Action::setToHit(Dice param) { toHit = param; }
void Action::setAttackAttribute(Attribute param) { attackAttribute = param; }
void Action::setSave(Attribute param) { save = param; }
void Action::setPassEffect(StatusEffect* param) { pass = param; }
void Action::setFailEffect(StatusEffect* param) { fail = param; }
