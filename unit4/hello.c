#include <ncurses.h>

int main(void)
{
    //initialize ncurses
    initscr();
    raw();

    //write hello world
    addstr("Hello, world");
    getch();

    //close ncurses
    endwin();
    return 0;
}