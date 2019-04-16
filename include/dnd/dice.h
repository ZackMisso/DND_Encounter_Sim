#pragma once

#include <dnd.h>

struct Dice
{
public:
    Dice(); // represents just 1d20 + 0

    // 4d6 + 11 = Dice(4, 6, 11)
    Dice(int number, int size, int modifier);

    int roll_total(pcg32& rng) const;
    vector<int> roll_ind(pcg32& rng) const;

    int number;
    int size;
    int modifier;
};
