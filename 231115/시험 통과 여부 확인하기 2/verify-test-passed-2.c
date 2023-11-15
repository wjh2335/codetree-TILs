#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int t, cnt = 0;
    scanf("%d", &t);
    while(t--)
    {
        int sum = 0;
        for(int i = 0; i < 4; ++i)
        {
            int a;
            scanf("%d", &a);
            sum += a;
        }
        if(sum >= 240) { printf("pass\n"); ++cnt; }
        else printf("fail\n");
    }
    printf("%d", cnt);
    return 0;
}