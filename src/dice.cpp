#include <dice.h>

Dice::Dice()
    : number(1), size(20), modifier(0) { }

Dice::Dice(int number, int size, int modifer)
    : number(number), size(size), modifier(modifier) { }

int Dice::roll_total(pcg32& rng) const
{
    // TODO
}

vector<int> Dice::roll_ind(pcg32& rng) const
{
    // TODO
    return vector<int>();
}
