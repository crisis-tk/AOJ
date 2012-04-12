#include <stdio.h>

int main(void)
{
    char str[21];
    scanf("%s", str);

    int len = 0;
    while (str[len]) {
        len++;
    }
    while (len != 0) {
        len--;
        printf("%c", str[len]);
     }
    puts("");

    return 0;
}
