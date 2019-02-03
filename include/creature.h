#pragma once

#include <action.h>

class Creature
{
public:
    Creature();
    ~Creature();

    int str_modifier() const;
    int dex_modifier() const;
    int con_modifier() const;
    int wis_modifier() const;
    int int_modifier() const;
    int cha_modifier() const;

protected:
    vector<Action*> actions;

    // scores
    int strength;
    int dexterity;
    int constitution;
    int wisdom;
    int intelligence;
    int charisma;
};
