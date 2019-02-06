#pragma once

#include <dnd.h>

class Creature_Stats
{
public:
    Creature_Stats();

    int str_modifier() const;
    int dex_modifier() const;
    int con_modifier() const;
    int wis_modifier() const;
    int int_modifier() const;
    int cha_modifier() const;

    void setStrength(int param);
    void setDexterity(int param);
    void setConstitution(int param);
    void setWisdom(int param);
    void setIntelligence(int param);
    void setCharisma(int param);

protected:
    // scores
    int strength;
    int dexterity;
    int constitution;
    int wisdom;
    int intelligence;
    int charisma;
};
