#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum1 = 0, sum2 = 0, cnt = 0;
    for(int i = 0; i < 10; ++i)
    {
        int a;
        scanf("%d", &a);
        if(i % 2) sum1 += a;
        if(!((i + 1) % 3)) { sum2 += a; ++cnt; }
    }
    printf("%d %.1f", sum1, (float)sum2 / (float)cnt);
    return 0;
}