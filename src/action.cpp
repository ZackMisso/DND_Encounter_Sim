#include <action.h>

Action::Action()
{
    toHit = vector<Dice>();
    savingThrows = vector<pair<SavingThrow, StatusEffect>>();
    damage = vector<pair<DamageType, Dice>>();
}
