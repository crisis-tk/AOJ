#include <stdio.h>

int main(void)
{
    double v;

    while ( scanf("%lf", &v) != EOF ) {
        double t = v / 9.8;
        double y = 4.9 * t * t;

        int n = 1;
        while ( (5 * n - 5) < y ) {
            n++;
        }
        printf("%d\n", n);
    }
    
    return 0;
}
