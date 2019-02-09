#include <cmd.h>
#include <stdio.h>

void CMDInterface::introText()
{
    cout << "Welcome to the D&D Encounter Simulator" << endl;
    cout << endl;
    cout << "Please configure the combatants before simulation" << endl;
}

void CMDInterface::info(int level)
{
    if (level == 0)
    {
        cout << "##### High Level Commands #####" << endl;
        cout << "> create creature <name>" << endl;
        cout << "> create action <name>" << endl;
        cout << "> edit creature <name>" << endl;
        cout << "> edit action <name>" << endl;
        cout << "> delete action <name>" << endl;
        cout << "> delete creature <name>" << endl;
        cout << "> show creature <name>" << endl;
        cout << "> show action <name>" << endl;
        cout << "> save state" << endl;
        cout << "> fight <creature_name> <creature_name> <T/F(verbose)>" << endl;
        cout << "####################" << endl;
    }

    if (level == 1)
    {
        cout << "#### Action Commands ####" << endl;
        cout << "####################" << endl;
    }

    if (level == 2)
    {
        cout << "#### Creature Commands ####" << endl;
        cout << "####################" << endl;
    }
}

void CMDInterface::run(State* state)
{
    introText();
    cout << endl;
    inputLoop(state);
}

void CMDInterface::inputLoop(State* state)
{
    // TODO: replace string input with a function for abstraction
    cout << "> ";
    string str;
    cin >> str;

    if (str == "info")
    {
        info(0);
    }
    else if (str == "create")
    {
        cin >> str;

        if (str == "creature")
        {
            cin >> str;

            if (state->containsCreature(str))
            {
                cout << "Error: " << str << " already exists as a creature" << endl;
            }
            else
            {
                state->creatures.push_back(new Creature(str));
            }
        }
        else if (str == "action")
        {
            cin >> str;

            if (state->containsAction(str))
            {
                cout << "Error: " << str << " already exists as an action" << endl;
            }
            else
            {
                state->actions.push_back(new Action(str));
            }
        }
        else
        {
            cout << endl;
            cout << "Error: the create command expects to be followed by 'creature' or 'action'" << endl;
            cout << endl;
        }
    }
    else if (str == "edit")
    {
        cin >> str;

        if (str == "creature")
        {
            cin >> str;

            Creature* creature = state->findCreature(str);

            if (creature)
            {
                creatureLoop(state, creature);
            }
            else
            {
                cout << "Error: " << str << " does not exist as a creature" << endl;
            }
        }
        else if (str == "action")
        {
            cin >> str;

            Action* action = state->findAction(str);

            if (action)
            {
                actionLoop(state, action);
            }
            else
            {
                cout << "Error: " << str << " does not exist as an action" << endl;
            }
        }
        else
        {
            cout << "Error: the edit command expects to be followed by 'creature' or 'action'" << endl;
        }
    }
    else if (str == "delete")
    {
        cin >> str;

        if (str == "creature")
        {
            cin >> str;

            if (!state->removeCreature(str))
            {
                cout << "Error: Could not remove creature " << str << endl;
            }
        }
        else if (str == "action")
        {
            cin >> str;

            if (!state->removeAction(str))
            {
                cout << "Error: Could not remove action " << str << endl;
            }
        }
        else
        {
            cout << "Error: the delete command expects to be followed by 'action' or 'creature'" << endl;
        }
    }
    else if (str == "show")
    {
        cin >> str;

        if (str == "creature")
        {
            cin >> str;

            Creature* creature = state->findCreature(str);

            if (creature)
            {
                creature->info();
            }
            else
            {
                cout << "Error: creature " << str << " does not exist" << endl;
            }
        }
        else if (str == "action")
        {
            cin >> str;

            Action* action = state->findAction(str);

            if (action)
            {
                action->info();
            }
            else
            {
                cout << "Error: creature " << str << " does not exist" << endl;
            }
        }
        else
        {
            cout << "Error: the show command expects either 'creature' or 'actioon'" << endl;
        }
    }
    else if (str == "save")
    {
        // TODO: much later
    }
    else if (str == "load")
    {
        // TODO: much later
    }
    else if (str == "fight")
    {
        // TODO: much later
    }
    else if (str == "exit")
    {
        return;
    }
    else
    {
        cout << "Error: unrecognized token: " << str << endl;
    }

    inputLoop(state);
}

void CMDInterface::creatureLoop(State* state, Creature* creature)
{
    cout << ">> ";
    string str;
    cin >> str;

    // TODO
}

void CMDInterface::actionLoop(State* state, Action* action)
{
    cout << ">> ";
    string str;
    cin >> str;

    // TODO
}
