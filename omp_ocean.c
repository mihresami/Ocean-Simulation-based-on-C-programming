#include <stdio.h>
#include <omp.h>

void ocean (int **grid, int dim, int timesteps, int threads)
{
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
