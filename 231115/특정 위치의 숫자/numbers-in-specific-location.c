#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    for(int i = 0; i < 10; ++i)
    {
        int a;
        scanf("%d", &a);
        if(i == 2 || i == 4 || i == 9) sum += a;
    }
    printf("%d", sum);
    return 0;
}