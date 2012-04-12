#include <stdio.h>

#define NUM 5

void sort(int *ary)
{
    int i,j;
    for (i = 0; i < NUM-1; i++) {
        for (j = i+1; j < NUM; j++) {
            if ( ary[i] < ary[j] ) {
                int temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
}

int main(void)
{
    int ary[NUM];

    scanf("%d %d %d %d %d", &ary[0], &ary[1], &ary[2], &ary[3], &ary[4]);

    sort(ary);

    printf("%d %d %d %d %d\n", ary[0], ary[1], ary[2], ary[3], ary[4]);

    return 0;
}
