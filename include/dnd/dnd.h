#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <pcg32.h>

// this library is planned to never be used by any other project or use many
// third party libraries, so please forgive the laziness

using namespace std;

// global types

enum DamageType
{
    Acid,
    Bludgeoning,
    Cold,
    Fire,
    Force,
    Lightning,
    Necrotic,
    Piercing,
    Poison,
    Psychic,
    Radiant,
    Slashing,
    Thunder
};

enum Attribute
{
    Strength,
    Dexterity,
    Constitution,
    Wisdom,
    Intelligence,
    Charisma,
    None // used for non-spellcasters
};

// useful global methods
// TODO: maybe make these not global???

static int ability_modifier(int score)
{
    int modifier = score / 2 - 5;
    if (modifier < -5) modifier = -5;
    return modifier;
}

static int proficiency_bonus(int level)
{
    return (level / 4) + 2;
}
