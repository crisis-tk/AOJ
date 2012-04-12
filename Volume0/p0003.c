#include <stdio.h>

void sort(int *ary)
{
    int i,j;
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (ary[i] > ary[j]) {
                int tmp = ary[i];
                ary[i] = ary[j];
                ary[j] = tmp;
            }
        }
    }
}

int main(void)
{
    int num;
    int tri[3];

    scanf("%d", &num);

    for (; num > 0; num--) {
        scanf("%d %d %d", &tri[0], &tri[1], &tri[2]);
        
        sort(tri);
        
        if ( tri[0]*tri[0] + tri[1]*tri[1] == tri[2]*tri[2] )
            puts("YES");
        else
            puts("NO");
    }
    
    return 0;
}
