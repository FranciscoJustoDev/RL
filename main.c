#include <ncurses/ncurses.h>>
// include headers here to obtain function declarations
#include "engine.h"
#include "events.h"

int main(void){
	// MAIN SETUP
	initscr();
	int state = 1;

	while (state != 0){
		state = StateHandler(state);
	}
	endwin();
	return 0;
}