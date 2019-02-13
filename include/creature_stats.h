#pragma once

#include <dnd.h>
#include <dice.h>

class Creature_Stats
{
public:
    Creature_Stats();

    int spell_save_dc() const;
    int spell_casting_modifier() const;

    int str_modifier() const;
    int dex_modifier() const;
    int con_modifier() const;
    int wis_modifier() const;
    int int_modifier() const;
    int cha_modifier() const;

    int base_ac() const;

    void takeDamage(int damage, DamageType type);

    void addResistance(DamageType param);
    void addImmunity(DamageType param);
    void addVulnerability(DamageType param);
    void addProficiency(Attribute param);

    int getHealth();
    int getMaxHealth();

    void setLevel(int param);
    void setStrength(int param);
    void setDexterity(int param);
    void setConstitution(int param);
    void setWisdom(int param);
    void setIntelligence(int param);
    void setCharisma(int param);
    void setAC(int param);
    void setSpellCastingAttribute(Attribute param);
    void setHealth(int param);
    void setMaxHealth(int param);

protected:
    vector<DamageType> resistances;
    vector<DamageType> immunities;
    vector<DamageType> vulnerabilities;
    vector<Attribute> proficiencies;

    Attribute spell_casting_attribute;

    Dice health_dice;
    int level;
    int ac;

    // scores
    int strength;
    int dexterity;
    int constitution;
    int wisdom;
    int intelligence;
    int charisma;

    // health related attributes
    int max_health;
    int health;
};
