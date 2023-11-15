#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt[11] = {0, };
    while(1)
    {
        int a;
        scanf("%d", &a);
        if(!a) break;
        ++cnt[a / 10];
    }
    for(int i = 1; i <= 9; ++i)
    {
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}