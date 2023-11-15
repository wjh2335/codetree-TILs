#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt[11] = {0, }, sum = 0;
    scanf("%d %d", &a, &b);
    while(a > 1)
    {
        ++cnt[a % b];
        a /= b;
    }
    for(int i = 0; i < b; ++i) sum += (cnt[i] * cnt[i]);
    printf("%d", sum);
    return 0;
}