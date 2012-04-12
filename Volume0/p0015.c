#include <stdio.h>
#include <string.h>

#define BUF_LEN 256
#define MAX_LEN 80

void revers_string(char *num)
{
    int center = strlen(num) / 2;

    int i, j = strlen(num)-1;
    for (i=0; (i < center) && (i != j); i++, j--) {
        char temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    int i;
    for (i=0; i < n; i++) {
        char ans[BUF_LEN];
        
        char num1[BUF_LEN];
        char num2[BUF_LEN];

        scanf("%s", num1);
        scanf("%s", num2);

        revers_string(num1);
        revers_string(num2);

        int digit1 = strlen(num1);
        int digit2 = strlen(num2);
        
        int j, carry = 0;
        for (j=0; j < BUF_LEN; j++) {
            int num = 0;
            
            if ( digit1 < 1 && digit2 < 1 && carry == 0)
                break;

            if ( digit1 > 0 )
                num += (num1[j] - 48);
            if ( digit2 > 0 )
                num += (num2[j] - 48);

            ans[j] = (num + carry) % 10 + 48;

            if ( num+carry >= 10 )
                carry = 1;
            else
                carry = 0;

            digit1--;
            digit2--;
        }
        ans[j] = '\0';
        revers_string(ans);

        if ( strlen(ans) > MAX_LEN ) {
            printf("overflow\n");
        }
        else {
            printf("%s\n", ans);
        }
    }
    
    return 0;
}
