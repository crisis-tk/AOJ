#include <stdio.h>

int main(void)
{
    int x,y;
    while( scanf("%d %d", &x, &y) != EOF ) {
        int count = 0;
        int sum   = x + y;
        for (count=0; sum > 0; count++) {
            sum /= 10;
        }
        printf("%d\n", count);
    }
    
    return 0;
}
