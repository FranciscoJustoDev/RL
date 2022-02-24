#include "events.h"

int EventRuntimeHandler(int state){
    switch(state){
        case 'MOV':
            return 1;
        case 'CONSUME':
            return 2;
        case 'COMBAT':
            return 3;
        case 'CRAFT':
            return 4;
        case 'INVENTORY':
            return 5;
    }
    return 0;
}