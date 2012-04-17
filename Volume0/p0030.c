#include <stdio.h>

int count = 0;

/*
 *  深さ優先探索
 *  n:項の数, s:合計, depth:深さ, index:ノードの値
 */
int dfs(int n, int s, int depth, int index)
{
    int sum = s - index;

    /* 深さ(=depth+1) が n と等しい かつ
     * 合計(=sum) が s と等しい とき count++ ;
     */
    if ( depth+1 == n && sum == 0 ) {
        count++;
        return 0;
    }
    
    if ( depth+1 < n ) {
        int i;
        for (i = index+1; i <= 9; i++) {
            dfs(n, sum, depth+1, i);
        }
    }
    return 0;
}

int main(void)
{
    int n, s;

    while(1) {
        scanf("%d %d", &n, &s);

        if ( n == 0 && s == 0) {
            break;
        }

        int i;
        for (i = 0; i <= 9; i++) {
            dfs(n, s, 0, i);
        }
        printf("%d\n", count);

        count = 0;
    }
    
    return 0;
}
