// Implements Game of Fifteen (generalized to d x d)

#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Constants
#define DIM_MIN 3
#define DIM_MAX 9
#define COLOR "\033[32m"

// Board
int board[DIM_MAX][DIM_MAX]; //initializes integer for the dimensions of the board represnted by a 2D array

// Dimensions
int d; //d<max, d>min

// Saved locations of the blank tile
int blank_row;
int blank_col;

// Prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);
void swap(int *a, int *b);
void print_grid_row(int d);
void print_tile(int tile);

int main(int argc, string argv[])
{
    // Ensure proper usage
    if (argc != 2) // row by column
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // Ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // Open log
    FILE *file = fopen("log1.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // Greet user with instructions
    greet();
    // Initialize the board
    init();

    // Accept moves until game is won
    while (true)
    {
        // Clear the screen
        clear();

        // Draw the current state of the board
        draw();

        // Log the current state of the board (for testing)

             for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // check for win
        if (won())
        {
            printf("Yay, you won!\n");
            break;
        }

        // prompt for move
         printf("Tile to move: ");
        int tile = get_int();

        // quit if user inputs 0 (for testing)
        if (tile == 0)

      break;


        // log move (for testing)

        fprintf(file, "%i\n", tile);

        fflush(file);

        // move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(50000);
        }
 for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }

        }

        // sleep thread for animation's sake
        usleep(50000);
}

    // close log
    fclose(file);

    // success
    return 0;
}
// Clears screen using ANSI escape sequences
void clear(void)

{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

// Greets player
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(2000000);
}

// Initializes the game's board with tiles numbered 1 through d*d - 1
// (i.e., fills 2D array with values but does not actually print them)
void init(void)

    {
    int total = d * d; // Get Total number of spaces

    for (int i = 0; i < d; i++) // Add tiles to board
    {
        for (int n= 0; n< d; n++) // iterate over tiles
        {
            board[i][n] = --total;  // Decrement value by one and assign to array
        }
    }
    if ((d*d)%2==0)  // Swap 2 and 1 if even number of spaces
    {
        board[d - 1][d - 3] = 1;
        board[d - 1][d - 2] = 2;
    }
}
 // Prints the board in its current state.


// Prints the board in its current state
void draw(void)
{
    // Loop through board array
    for (int i = 0; i < d; i++)
    {
        for (int n= 0; n< d; n++)
        {
            // Print line instead of zero
            if (board[i][n] == 0)
            {
                printf("  _");
            }
            else
            {
                printf("%3i", board[i][n]);
            }
        }

        printf("\n\n");
    }
}
//If tile borders empty space, moves tile and returns true, else returns false.

bool move(int tile)
{

    if (tile > d * d - 1 || tile < 1)// Check if the tile is valid
    {
        return false;
    }

    // Search board for row, and column
    int row = 0, column = 0, row_blanktile=0, column_blanktile=0;
    bool can_move = false; //making sure the tile can move from its position
    for (int i = 0; i < d; i++) //loops through dimensions and finds the tile and empty tile
    {
        for (int n = 0; n < d; n++)
{
     if (board[i][n] == tile) // finds the tile
            {
                row=i;
                column=n;
}
    if(board[i][n] == 0) // finds the empty tile
    {
        row_blanktile=i;
        column_blanktile=n;
    }

}}
if (row_blanktile == row || column_blanktile==column) // checks if the tile can move
{
     if(row_blanktile==row) // if the column/row is the same, it can move
     {
         if(column_blanktile-column == 1 || column-column_blanktile == 1) // check if adjacent
         {
             can_move=true;
         }

     }
      if(column_blanktile==column) // if the column/row is the same, it can move
     {
         if(row_blanktile-row == 1 || row-row_blanktile == 1) // check if tile is adjacent
         {
             can_move=true;
         }

     }

}
if (can_move)
{
   //switch
   board[row_blanktile][column_blanktile]=tile; //values of the tiles switch (value vs blank)
   board[row][column] = 0;
return true;
}
else
{
     // cannot move into that position
    return false;
}
return false;
}

// Returns true if game is won (i.e., board is in winning configuration), else false
bool won(void)
{
int counter=0; // d=4 how many columns/rows total
for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < d; j++)
        {
            // Check if last spot and if not correct value
            if (++counter != (d * d) && board[i][j] != counter)
            {
                return false;
            }
        }
    }

    return true;
}

