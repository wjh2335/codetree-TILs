#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0, i;
    for(i = 0; i < 10; ++i)
    {
        int a;
        scanf("%d", &a);
        if(!a) break;
        sum += a;
    }
    printf("%d %.1f", sum, (float)sum / (float)i);
    return 0;
}