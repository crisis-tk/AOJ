#include <stdio.h>

int sp = 0;
int stack[10] = {0};

void push(int n)
{
    stack[sp] = n;
    sp++;
}

void pop()
{
    sp--;
    printf("%d\n", stack[sp]);
}

int main(void)
{
    int n;
    while ( scanf("%d", &n) != EOF ) {
        if ( n != 0 ) {
            push(n);
        }
        else {
            pop();
        }
    }

    return 0;
}
