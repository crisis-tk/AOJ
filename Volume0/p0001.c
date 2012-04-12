#include <stdio.h>

void sort(int *hils, int n)
{
    int i,j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (hils[i] < hils[j]) {
                int tmp = hils[i];
                hils[i] = hils[j];
                hils[j] = tmp;
            }
        }
    }
}

int main(void)
{
    int hils[10];

    int i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &hils[i]);
    }
    
    sort(hils, 10);
    
    for (i = 0; i < 3; i++) {
        printf("%d\n", hils[i]);
    }
    return 0;
}
