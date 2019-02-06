#pragma once

#include <action.h>
#include <creature_stats.h>

class Creature
{
public:
    Creature();
    ~Creature();

    void addAction(Action* action);
    void addStatusEffect(StatusEffect* effect);

    void parseFromFile(string filename);

    int roll_health(pcg32& rng) const;
    int roll_initiative(pcg32& rng) const;
    int check_ac() const;

    int roll_str_save(pcg32& rng) const;
    int roll_dex_save(pcg32& rng) const;
    int roll_con_save(pcg32& rng) const;
    int roll_wis_save(pcg32& rng) const;
    int roll_int_save(pcg32& rng) const;
    int roll_cha_save(pcg32& rng) const;

    string getName() const;

    void setName(string param);

protected:
    vector<StatusEffect*> statusEffects;
    vector<Action*> actions;
    Creature_Stats* stats;

    string name;

    // health and initiative are kept separate from creature stats
    // because they are rolled for before the fight and are not static
    // attributes of the creature
    int health;
    int initiative;
};
