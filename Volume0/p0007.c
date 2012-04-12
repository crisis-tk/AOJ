#include <stdio.h>

int main(void)
{
    int debt = 100000;
    int n;
    scanf("%d", &n);

    for (; n > 0; n--) {
        debt *= 1.05;
        if ( (debt % 1000) != 0 ) {
            debt = debt + 1000 - (debt % 1000);
        }
    }
    printf("%d\n", debt);
    
    return 0;
}
