#include <creature.h>

Creature::Creature()
{
    statusEffects = vector<StatusEffect*>();
    actions = vector<Action*>();
    stats = new Creature_Stats();
}

Creature::~Creature()
{
    for (int i = 0; i < actions.size(); ++i)
    {
        delete actions[i];
    }

    for (int i = 0; i < statusEffects.size(); ++i)
    {
        delete statusEffects[i];
    }

    actions.clear();
    statusEffects.clear();
    delete stats;
}

void Creature::parseFromFile(string filename)
{
    // TODO
}

int Creature::roll_health(pcg32& rng) const
{
    // TODO
    return 0;
}

int Creature::roll_initiative(pcg32& rng) const
{
    // TODO
    return 0;
}

int Creature::check_ac() const
{
    // TODO: status effects can potentially change ac
    return stats->base_ac();
}

int Creature::roll_str_save(pcg32& rng) const
{
    // TODO
    return 0;
}

int Creature::roll_dex_save(pcg32& rng) const
{
    // TODO
    return 0;
}

int Creature::roll_con_save(pcg32& rng) const
{
    // TODO
    return 0;
}

int Creature::roll_wis_save(pcg32& rng) const
{
    // TODO
    return 0;
}

int Creature::roll_int_save(pcg32& rng) const
{
    // TODO
    return 0;
}

int Creature::roll_cha_save(pcg32& rng) const
{
    // TODO
    return 0;
}


void Creature::addAction(Action* action) { actions.push_back(action); }
void Creature::addStatusEffect(StatusEffect* effect) { statusEffects.push_back(effect); }

string Creature::getName() const { return name; }

void Creature::setName(string param) { name = param; }
