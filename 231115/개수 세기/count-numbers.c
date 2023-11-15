#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, cnt = 0;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; ++i)
    {
        int a;
        scanf("%d", &a);
        if(a == m) ++cnt;
    }
    printf("%d", cnt);
    return 0;
}