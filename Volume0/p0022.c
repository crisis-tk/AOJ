#include <stdio.h>

#define NUM 5000

int main(void)
{
    int n;
    scanf("%d", &n);

    while ( n != 0) {
        int i, a[NUM];
        for (i=0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int  j;
        long max = -100000;
        for (i=0; i < n; i++) {
            int sum = 0;
            for (j=i; j < n; j++) {
                sum += a[j];
                if ( max < sum )
                    max = sum;
            }
        }
        printf("%ld\n", max);

        scanf("%d", &n);
    }
    return 0;
}
