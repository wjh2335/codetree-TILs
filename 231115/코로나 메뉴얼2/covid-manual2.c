#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt[4] = {0, };
    for(int i = 0; i <= 2; ++i)
    {
        char c;
        int a;
        scanf("%c %d ", &c, &a);
        if(c == 'Y' && a >= 37) ++cnt[0];
        else if(c == 'N' && a >= 37) ++cnt[1];
        else if(c =='Y' && a < 37) ++cnt[2];
        else ++cnt[3];
    }
    for(int i = 0; i < 4; ++i) printf("%d ", cnt[i]);
    if(cnt[0] >= 2) printf("E");
    return 0;
}