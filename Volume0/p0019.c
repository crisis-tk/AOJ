#include <stdio.h>

long long unsigned func(int n)
{
    if ( n == 1 ) {
        return n;
    }
    return func(n - 1) * n;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%llu\n", func(n));
    
    return 0;
}
