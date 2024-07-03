#include <stdio.h>
#include <ncurses.h>

int main()
{	
	initscr();			/* Start curses mode 		  */
	printw("Hello World !!!\n");	/* Print Hello World		  */
	refresh();			/* Print it on to the real screen */
	getch();			/* Wait for user input */
    getch();
    clear();
    refresh();
    printw("you suck, ur gonna kill me :(\n");
    printw("if you don't press anything, you don't have to kill me!\n");
    getch();
    clear();
    refresh();
    printw("if you really wanna kill me, press Y\n");
    char x = getch();
	endwin();			/* End curses mode		  */

	return 0;
}






