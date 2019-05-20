#include <ncurses.h>

int main(void)
{
    //initialize ncurses
    initscr();
    raw();

    //set up colors
    start_color();
    init_pair(false, COLOR_WHITE, COLOR_BLACK);
    init_pair(true, COLOR_BLUE, COLOR_BLACK);

    bool color=false;

    for(int i=2; i<10; i++)
    {
        for (int j=5; j<64; j++)
        {
            attron(COLOR_PAIR(color));
            mvaddch(i, j, 'X');
            attroff(COLOR_PAIR(color));
            //swap colors
            color=!color;
    }
}
getch();

//close ncurses
endwin();
return 0;
}