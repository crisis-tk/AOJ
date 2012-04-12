#include <stdio.h>

void prime(int *primes, int n)
{
    int i,j;
    for (i = 0; i < n; i++) {
        primes[i] = 1;
    }
    for (i = 2; i <= n/2 ; i++) {
        for (j = i * 2; j <= n; j += i ) {
            primes[j] = 0;
        }
    }
}

int main(void)
{
    int n;
    while ( scanf("%d", &n) != EOF ) {
        int primes[n];
        prime(primes, n);

        int i;
        int count = 0;
        for (i = 2; i <= n; i++) {
            if ( primes[i] == 1 )
                count++;
        }
        printf("%d\n", count);
    }    
    return 0;
}
