#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0, i;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i)
    {
        int a;
        scanf("%d", &a);
        if(a == 2) ++cnt;
        if(cnt == 3) break;
    }
    printf("%d", i);
    return 0;
}