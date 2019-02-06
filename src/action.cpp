#include <action.h>

Action::Action()
{
    toHit = vector<Dice>();
    savingThrows = vector<pair<Attribute, StatusEffect>>();
    damage = vector<pair<DamageType, Dice>>();
}

void Action::evaluate(Creature_Stats* caster, Creature_Stats* target) const
{
    // TODO
}
