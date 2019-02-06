#include <creature_stats.h>

Creature_Stats::Creature_Stats()
{
    strength = 10;
    dexterity = 10;
    constitution = 10;
    wisdom = 10;
    intelligence = 10;
    charisma = 10;
}

int Creature_Stats::str_modifier() const { return ability_modifier(strength); }
int Creature_Stats::dex_modifier() const { return ability_modifier(dexterity); }
int Creature_Stats::con_modifier() const { return ability_modifier(constitution); }
int Creature_Stats::wis_modifier() const { return ability_modifier(wisdom); }
int Creature_Stats::int_modifier() const { return ability_modifier(intelligence); }
int Creature_Stats::cha_modifier() const { return ability_modifier(charisma); }

void Creature_Stats::setStrength(int param) { strength = param; }
void Creature_Stats::setDexterity(int param) { dexterity = param; }
void Creature_Stats::setConstitution(int param) { constitution = param; }
void Creature_Stats::setWisdom(int param) { wisdom = param; }
void Creature_Stats::setIntelligence(int param) { intelligence = param; }
void Creature_Stats::setCharisma(int param) { charisma = param; }
