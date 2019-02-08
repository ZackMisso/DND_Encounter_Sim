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

void CMDInterface::run()
{
    introText();
    cout << endl;
    inputLoop();
}

void CMDInterface::inputLoop()
{
    cout << "> ";
    string str;
    cin >> str;

    if (str == "create")
    {
        cin >> str;

        if (str == "creature")
        {
            // TODO
        }
        else if (str == "action")
        {
            cout << "whoop" << endl;
            // TODO
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
        // TODO
    }
    else if (str == "delete")
    {
        // TODO
    }
    else if (str == "show")
    {
        // TODO
    }
    else if (str == "save")
    {
        // TODO
    }
    else if (str == "load")
    {
        // TODO
    }
    else if (str == "fight")
    {
        // TODO
    }
    else if (str == "exit")
    {
        return;
    }
    else
    {
        cout << "Error: unrecognized token: " << str << endl;
    }

    inputLoop();
}

void CMDInterface::creatureLoop()
{
    // TODO
}

void CMDInterface::actionLoop()
{
    // TODO
}
