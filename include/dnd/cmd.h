#pragma once

#include <dnd.h>
#include <state.h>

class CMDInterface
{
public:
    static void introText();
    static void info(int level);
    static void run(State* state);
    static void inputLoop(State* state);
    static void actionLoop(State* state, Action* action);
    static void creatureLoop(State* state, Creature* creature);
};
