#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < 10; ++i)
    {
        int a;
        scanf("%d", &a);
        if(i % 2) sum1 += a;
        else sum2 += a;
    }
    printf("%d", (sum1 > sum2) ? (sum1 - sum2) : (sum2 - sum1));
    return 0;
}