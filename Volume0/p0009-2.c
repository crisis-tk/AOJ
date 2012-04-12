#include <stdio.h>
#include <math.h>

#define MAX 1000000

int main(void)
{
    int prime[MAX];
    int i,j;
    
    for (i = 0; i <= MAX; i++) {
        prime[i] = 1;
    }

    for (i = 2; i <= sqrt(MAX)+1; i++) {
        if (prime[i] == 1) {
            for (j = i * 2; j <= MAX; j += i) {
                prime[j] = 0;
            }
        }
    }

    int n, count;
    while ( scanf("%d", &n) != EOF ) {
        count = 0;
        for (i = 2; i <= n; i++) {
            if (prime[i] == 1) {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
