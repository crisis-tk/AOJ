#include <stdio.h>

int main(void)
{
    int a[4], b[4];

    while ( scanf("%d %d %d %d\n%d %d %d %d",
                  &a[0],&a[1],&a[2],&a[3],&b[0],&b[1],&b[2],&b[3]) != EOF ) {

        int hit=0, blow=0;
        int i, j;

        for (i=0; i < 4; i++) {
            for (j=0; j < 4; j++) {
                if ( a[i] == b[j] ) {
                    if ( i == j )
                        hit++;
                    else
                        blow++;
                }
            }
        }
        printf("%d %d\n", hit, blow);
    }
    
    return 0;
}
