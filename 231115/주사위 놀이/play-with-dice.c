#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt[7] = {0, };
    for(int i = 0; i < 10; ++i)
    {
        int a;
        scanf("%d", &a);
        ++cnt[a];
    }
    for(int i = 1; i <= 6; ++i)
    {
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}