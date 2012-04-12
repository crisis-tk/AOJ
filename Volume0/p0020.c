#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char str[256];
    fgets(str, sizeof(str), stdin);

    int i;
    for (i=0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    printf("%s", str);
    
    return 0;
}
