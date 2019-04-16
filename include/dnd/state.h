#pragma once

#include <action.h>
#include <creature.h>
#include <status_effect.h>

// TODO: this is too big... move to .cpp file
struct State
{
    State()
    {
        creatures = vector<Creature*>();
        actions = vector<Action*>();
        statusEffects = vector<StatusEffect*>();
    }

    ~State()
    {
        for (int i = 0; i < creatures.size(); ++i)
        {
            delete creatures[i];
        }
        for (int i = 0; i < actions.size(); ++i)
        {
            delete actions[i];
        }
        for (int i = 0; i < statusEffects.size(); ++i)
        {
            delete statusEffects[i];
        }
    }

    bool containsCreature(string name) const
    {
        for (int i = 0; i < creatures.size(); ++i)
        {
            if (creatures[i]->getName() == name)
            {
                return true;
            }
        }

        return false;
    }

    bool containsAction(string name) const
    {
        for (int i = 0; i < actions.size(); ++i)
        {
            if (actions[i]->getName() == name)
            {
                return true;
            }
        }

        return false;
    }

    bool containsStatusEffects(string name) const
    {
        for (int i = 0; i < statusEffects.size(); ++i)
        {
            if (statusEffects[i]->getName() == name)
            {
                return true;
            }
        }

        return false;
    }

    Creature* findCreature(string name) const
    {
        for (int i = 0; i < creatures.size(); ++i)
        {
            if (creatures[i]->getName() == name)
            {
                return creatures[i];
            }
        }

        return nullptr;
    }

    Action* findAction(string name) const
    {
        for (int i = 0; i < actions.size(); ++i)
        {
            if (actions[i]->getName() == name)
            {
                return actions[i];
            }
        }

        return nullptr;
    }

    StatusEffect* findStatusEffects(string name) const
    {
        for (int i = 0; i < statusEffects.size(); ++i)
        {
            if (statusEffects[i]->getName() == name)
            {
                return statusEffects[i];
            }
        }

        return nullptr;
    }

    bool removeCreature(string name)
    {
        for (int i = 0; i < creatures.size(); ++i)
        {
            if (creatures[i]->getName() == name)
            {
                Creature* to_remove = creatures[i];
                creatures[i] = creatures[creatures.size()-1];
                creatures[creatures.size()-1] = to_remove;
                delete creatures[creatures.size()-1];
                creatures.pop_back();

                return true;
            }
        }

        return false;
    }

    bool removeAction(string name)
    {
        for (int i = 0; i < actions.size(); ++i)
        {
            if (actions[i]->getName() == name)
            {
                Action* to_remove = actions[i];
                actions[i] = actions[actions.size()-1];
                actions[actions.size()-1] = to_remove;
                delete actions[actions.size()-1];
                actions.pop_back();

                return true;
            }
        }

        return false;
    }

    bool removeStatusEffect(string name)
    {
        for (int i = 0; i < statusEffects.size(); ++i)
        {
            if (statusEffects[i]->getName() == name)
            {
                StatusEffect* to_remove = statusEffects[i];
                statusEffects[i] = statusEffects[statusEffects.size()-1];
                statusEffects[statusEffects.size()-1] = to_remove;
                delete statusEffects[statusEffects.size()-1];
                statusEffects.pop_back();

                return true;
            }
        }

        return false;
    }

    vector<Creature*> creatures;
    vector<Action*> actions;
    vector<StatusEffect*> statusEffects;
};
