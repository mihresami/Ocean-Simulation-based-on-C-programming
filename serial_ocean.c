#include <stdio.h>

void red_black_ordering(int **grid, int dim, int value) {
    float temp;
    int offset = 0;
    if (!value) {
        for (int i = 1; i < dim - 1; i++) {
            offset = (i + 1) % 2;
            for (int j = 1 + offset; j < dim - 1; j = j + 2) {
                temp = grid[i][j];
                grid[i][j] = 0.2 * (grid[i][j] + grid[i][j-1] + grid[i][j+1] + grid[i-1][j] + grid[i+1][j]);
            }
        }
    }
    else {
        for (int i = 1; i < dim - 1; i++) {
            offset = i % 2;
            for (int j = 1 + offset; j < dim - 1; j = j + 2) {
                temp = grid[i][j];
                grid[i][j] = 0.2 * (grid[i][j] + grid[i][j-1] + grid[i][j+1] + grid[i-1][j] + grid[i+1][j]);
            }
        }
    }
}

void ocean (int **grid, int dim, int timesteps)
{
    int RED = 0, BLACK = 1;
    for (int i = 0; i < timesteps; i++) {
		red_black_ordering(grid, dim, RED);
		red_black_ordering(grid, dim, BLACK);
    }
    /********************* the red-black algortihm (start)************************/
    /*
    In odd timesteps, calculate indeces with - and in even timesteps, calculate indeces with * 
    See the example of 6x6 matrix, A represents the corner elements. 
        A A A A A A
        A - * - * A
        A * - * - A
        A - * - * A
        A * - * - A
        A A A A A A 
    */

    // TODO: PUT YOUR CODE HERE

    /////////////////////// the red-black algortihm (end) ///////////////////////////
}
