#include <creature_stats.h>

Creature_Stats::Creature_Stats()
{
    resistances = vector<DamageType>();
    immunities = vector<DamageType>();
    vulnerabilities = vector<DamageType>();
    proficiencies = vector<Attribute>();

    strength = 10;
    dexterity = 10;
    constitution = 10;
    wisdom = 10;
    intelligence = 10;
    charisma = 10;
}

int Creature_Stats::spell_save_dc() const
{
    int modifier = spell_casting_modifier();
    return 8 + proficiency_bonus(level) + modifier;
}

int Creature_Stats::spell_casting_modifier() const
{
    switch (spell_casting_attribute)
    {
        case Strength: return str_modifier(); // lol
        case Dexterity: return dex_modifier(); // also lol
        case Constitution: return con_modifier(); // more lolz
        case Wisdom: return wis_modifier();
        case Intelligence: return int_modifier();
        case Charisma: return cha_modifier();
    }

    return 0;
}

void Creature_Stats::takeDamage(int damage, DamageType type)
{
    // TODO
}

void Creature_Stats::addResistance(DamageType param) { resistances.push_back(param); }
void Creature_Stats::addImmunity(DamageType param) { immunities.push_back(param); }
void Creature_Stats::addVulnerability(DamageType param) { vulnerabilities.push_back(param); }
void Creature_Stats::addProficiency(Attribute param) { proficiencies.push_back(param); }

int Creature_Stats::str_modifier() const { return ability_modifier(strength); }
int Creature_Stats::dex_modifier() const { return ability_modifier(dexterity); }
int Creature_Stats::con_modifier() const { return ability_modifier(constitution); }
int Creature_Stats::wis_modifier() const { return ability_modifier(wisdom); }
int Creature_Stats::int_modifier() const { return ability_modifier(intelligence); }
int Creature_Stats::cha_modifier() const { return ability_modifier(charisma); }
int Creature_Stats::base_ac() const { return ac; }

int Creature_Stats::getHealth() const { return health; }
int Creature_Stats::getMaxHealth() const { return max_health; }

void Creature_Stats::setSpellCastingAttribute(Attribute param) { spell_casting_attribute = param; }
void Creature_Stats::setLevel(int param) { level = param; }
void Creature_Stats::setStrength(int param) { strength = param; }
void Creature_Stats::setDexterity(int param) { dexterity = param; }
void Creature_Stats::setConstitution(int param) { constitution = param; }
void Creature_Stats::setWisdom(int param) { wisdom = param; }
void Creature_Stats::setIntelligence(int param) { intelligence = param; }
void Creature_Stats::setCharisma(int param) { charisma = param; }
void Creature_Stats::setAC(int param) { ac = param; }
void Creature_Stats::setHealth(int param) { health = param; }
void Creature_Stats::setMaxHealth(int param) { max_health = param; }
