#include <stdio.h>

int main(void)
{
    int d;
    while ( scanf("%d", &d) != EOF ) {
        int  i;
        long sum = 0;
        for (i=0; i < 600; i+=d) {
            sum += i * i * d;
        }
        printf("%ld\n", sum);
    }

    return 0;
}
