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

// useful global methods

// TODO: relook up all damage types
enum DamageType
{
    Burning,
    Cold,
    Slashing,
    Piercing,
    Bludgeoning,
    True,
    Radient,
    Electric
};

enum SavingThrow
{
    Strength,
    Dexterity,
    Constitution,
    Wisdom,
    Intelligence,
    Charisma
};

static int ability_modifier(int score)
{
    int modifier = score / 2 - 5;
    if (modifier < -5) modifier = -5;
    return modifier;
}
