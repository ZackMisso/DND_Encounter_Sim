#include <creature.h>

Creature::Creature()
{
    actions = vector<Action*>();

    strength = 10;
    dexterity = 10;
    constitution = 10;
    wisdom = 10;
    intelligence = 10;
    charisma = 10;
}

int Creature::str_modifier() const
{
    return ability_modifier(strength);
}

int Creature::dex_modifier() const
{
    return ability_modifier(dexterity);
}

int Creature::con_modifier() const
{
    return ability_modifier(constitution);
}

int Creature::wis_modifier() const
{
    return ability_modifier(wisdom);
}

int Creature::int_modifier() const
{
    return ability_modifier(intelligence);
}

int Creature::cha_modifier() const
{
    return ability_modifier(charisma);
}
