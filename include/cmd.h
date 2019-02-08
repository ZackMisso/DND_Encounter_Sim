#pragma once

#include <dnd.h>

class CMDInterface
{
public:
    static void introText();
    static void info(int level);
    static void run();
    static void inputLoop();
    static void actionLoop();
    static void creatureLoop();
    // static void parseInput();
};
