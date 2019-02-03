#include <dice.h>

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
