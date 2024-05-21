#ifndef MAIN_H
#define MAIN_H

#include "gba.h"
#include "stdbool.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

struct Point {
    int row;
    int col;
};

typedef struct {
    struct Point pos;
} Player;

typedef struct {
    struct Point pos;
} Defender;

enum Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};


Player createPlayer(void);
int playFootball(void);
void movePlayer(u32 buttons);
Defender createDefender(int defNumber);

#endif
