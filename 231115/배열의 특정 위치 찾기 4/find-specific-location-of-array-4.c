#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0, cnt = 0;
    for(int i = 0; i < 10; ++i)
    {
        int a;
        scanf("%d", &a);
        if(!a) break;
        if(!(a % 2)) { ++cnt; sum += a; }
    }
    printf("%d %d", cnt, sum);
    return 0;
}