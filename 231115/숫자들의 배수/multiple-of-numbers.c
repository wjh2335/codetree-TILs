#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0;
    scanf("%d", &n);
    for(int i = 1; i <= 10; ++i)
    {
        printf("%d ", i * n);
        if(!((i * n) % 5)) ++cnt;
        if(cnt == 2) break;
    }
    return 0;
}