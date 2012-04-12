#include <stdio.h>

int main(void)
{
    int n;

    while ( scanf("%d", &n) != EOF ) {
        if (n <= 36) {
            int count = 0;

            int a,b,c,d;
            for (a=0; a<=9; a++) {
                for (b=0; b<=9; b++) {
                    for (c=0; c<=9; c++) {
                        for (d=0; d<=9; d++) {
                            if ( a + b + c + d == n )
                                count++;
                        }
                    }
                }
            }
        
            printf("%d\n", count);
        }
        else {
            printf("0\n");
        }
    }
    return 0;
}
