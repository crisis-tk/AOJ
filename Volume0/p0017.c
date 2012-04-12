#include <stdio.h>
#include <string.h>

#define MAX_LEN 80

int find(char *str)
{
    int i;
    for (i = 0; i < strlen(str); i++) {
        if ( strncmp(&str[i], "the", 3) == 0 ) {
            return 1;
        }
        if ( strncmp(&str[i], "this", 4) == 0 ) {
            return 1;
        }
        if ( strncmp(&str[i], "that", 4) == 0 ) {
            return 1;
        }
    }
    return 0;
}

void caesar(char *str)
{
    int i,j;
    for (i = 0; i < 26; i++) {
        for (j = 0; j < strlen(str); j++) {
            if ( str[j] >= 'a' && str[j] < 'z') {
                str[j] += 1;
            }
            else if ( str[j] == 'z' ) {
                str[j] = 'a';
            }
        }

        if ( find(str) == 1 ) {
            break;
        }
    }
}

int main(void)
{
    char str[MAX_LEN+1];

    while ( fgets(str, MAX_LEN, stdin) != NULL ) {
        caesar(str);
        printf("%s", str);        
    }
    
    return 0;
}
