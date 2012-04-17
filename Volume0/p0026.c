#include <stdio.h>

void dropping(int grid[10][10], int x, int y, int size, int (*ink)[2])
{
    grid[y][x]++;

    int i;
    for (i=0; i<size; i++) {
        int dx = x + ink[i][0];
        int dy = y + ink[i][1];

        if ( (dx>=0 && dx<10) && (dy>=0 && dy<10) )
            grid[dy][dx]++;
    }
}

int main(void)
{
    int grid[10][10];

    int i, j;
    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            grid[j][i] = 0;
        }
    }

    int  small[4][2] = { { 0,  1}, {-1,  0}, { 1,  0}, { 0, -1} };
    
    int medium[8][2] = { {-1,  1}, { 0,  1}, { 1,  1}, {-1,  0},
                         { 1,  0}, {-1, -1}, { 0, -1}, { 1, -1} };
    
    int large[12][2] = { { 0,  2}, {-1,  1}, { 0,  1}, { 1,  1},
                         {-2,  0}, {-1,  0}, { 1,  0}, { 2,  0},
                         {-1, -1}, { 0, -1}, { 1, -1}, { 0, -2} };


    int x, y, size;
    while ( scanf("%d,%d,%d", &x, &y, &size) != EOF ) {
        switch (size) {
            case 1:
                dropping(grid, x, y, size*4, small);
                break;
            case 2:
                dropping(grid, x, y, size*4, medium);
                break;
            case 3:
                dropping(grid, x, y, size*4, large);
                break;
            default:
                break;
        }
    }

    int zero = 0;
    int max  = 0;

    for (i=0; i<10; i++) {
        for (j=0; j<10; j++) {
            if (grid[i][j] == 0) {
                zero++;
            }
            if (grid[i][j] > max) {
                max = grid[i][j];
            }
        }
    }
    printf("%d\n%d\n", zero, max);

    /* デバッグ用 */
    /* for (i=0; i<10; i++) { */
    /*     for (j=0; j<10; j++) { */
    /*         printf("%d ", grid[i][j]); */
    /*     } */
    /*     printf("\n"); */
    /* } */
    
    return 0;
}
