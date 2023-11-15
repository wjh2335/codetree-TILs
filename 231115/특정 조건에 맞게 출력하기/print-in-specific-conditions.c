#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    for(int i = 0; i < 100; ++i)
    {
        int a;
        scanf("%d", &a);
        if(!a) break;
        if(a % 2) printf("%d ", a + 3);
        else printf("%d ", a / 2);
    }
    return 0;
}