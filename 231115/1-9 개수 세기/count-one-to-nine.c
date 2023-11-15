#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt[10] = {0, }, t;
    scanf("%d", &t);
    while(t--)
    {
        int a;
        scanf("%d", &a);
        ++cnt[a];
    }
    for(int i = 1; i <= 9; ++i)
    {
        printf("%d\n", cnt[i]);
    }
    return 0;
}