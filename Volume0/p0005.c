#include <stdio.h>

long long unsigned euclid(long long unsigned  x, long long unsigned y)
{
    if (x < y) {
        int tmp = x;
        x = y;
        y = tmp;
    }

    int r;
    while ( (r = x % y) != 0) {
        x = y;
        y = r;
    }
    return y;
}

int main(void)
{
    long long unsigned a,b,gcd,lcm;
    while ( scanf("%llu %llu", &a, &b) != EOF ) {
        gcd = euclid(a, b);
        lcm = a * b / gcd;
        printf("%llu %llu\n", gcd, lcm);
    }
    
    return 0;
}
