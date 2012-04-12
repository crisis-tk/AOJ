#include <stdio.h>

int main(void)
{
    int  month[12]   = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char week[7][10] = { "Thursday", "Friday", "Saturday", "Sunday",
                         "Monday", "Tuesday", "Wednesday"};

    int m, d;
    while (1) {
        scanf("%d %d", &m, &d);
        if (m == 0 && d == 0)
            break;

        int i, days = 0;
        for (i = 1; i < m; i++) {
            days += month[i-1];
        }
        days += d;

        printf("%s\n", week[(days-1)%7]);
    }
    
    return 0;
}
