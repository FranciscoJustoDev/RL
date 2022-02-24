#include "engine.h"

typedef struct Scene{
    int fps;
    char name[15];
    char group[15];
}Scene;


int StateHandler(int state){
    switch (state)
    {
    case 1:
        // menu state
        // access only menu scenes, events, etc
        break;
    case 2:
        // game state
        break;
    }
    return 0; // Exits
}