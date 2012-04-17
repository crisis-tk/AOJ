#include <stdio.h>

int main(void)
{
    int x;
    while ( scanf("%d", &x) != EOF ) {
        int weight[10] = {0};

        int i, j = 0;
        for (i = 512; i >= 1; i/=2) {
            if (x >= i) {
                x -= i;
                weight[j] = i;
                j++;
            }
        }
        for (j = j-1; j >= 1; j--) {
            printf("%d ", weight[j]);
        }
        printf("%d\n", weight[j]);
    }
    
    return 0;
}
