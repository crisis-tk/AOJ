#include <stdio.h>

int main(void)
{
    char str[21];
    scanf("%s", str);
    
    int len;
    for (len=0; len<21; len++) {
        if (str[len] == '\0') break;
    }

    for (; len >= 0; len--) {
        putchar(str[len]);
    }
    puts("");

    return 0;
}
