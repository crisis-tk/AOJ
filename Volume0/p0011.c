#include <stdio.h>

#define NUM 30

int lines[NUM] = {0};

void swap(int a, int b)
{
    int temp = lines[a];
    lines[a] = lines[b];
    lines[b] = temp;
}

int main(void)
{
    int w;
    scanf("%d", &w);

    int i;
    for (i = 0; i < w; i++) {
        lines[i] = i+1;
    }

    int n;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int a,b;
        scanf("%d,%d", &a, &b);
        swap(a-1, b-1);
    }

    for (i = 0; i < w; i++) {
        printf("%d\n", lines[i]);
    }
    
    return 0;
}
