#include <stdio.h>

int main(void)
{
    int n, num[101]={0};

    int i;
    while ( scanf("%d", &n) != EOF ) {
        num[n]++;
    }

    int max=0;
    for (i=1; i<=100; i++) {
        if ( num[i] > max )
            max = num[i];
    }

    for (i=1; i<=100; i++) {
        if ( num[i] == max )
            printf("%d\n", i);
    }
    
    return 0;
}
