#pragma once

#include <dnd.h>

// this class needs to be thought out more
class StatusEffect
{
public:
    StatusEffect();

    // whether or not this status effect will affect the creature on their
    // next turn
    bool instantaneous;
};
