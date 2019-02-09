#pragma once

#include <dnd.h>

// status effects will have to probably be hard coded

// TODO: hardcode all status effects
class StatusEffect
{
public:
    StatusEffect();

    // // whether or not this status effect will affect the creature on their
    // // next turn
    // bool instantaneous;

    // TODO

    string getName() const;
    string getFlavorText() const;

    void setName(string param);
    void setFlavorText(string param);

protected:
    string name;
    string flavorText;
};
