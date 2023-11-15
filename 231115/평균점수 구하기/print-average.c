#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    float sum = 0;
    for(int i = 0; i < 8; ++i)
    {
        float a;
        scanf("%f", &a);
        sum += a;
    }
    printf("%.1f", sum / 8);
    return 0;
}