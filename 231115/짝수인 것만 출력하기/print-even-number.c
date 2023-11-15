#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a;
        scanf("%d", &a);
        if(!(a % 2)) printf("%d ", a);
    }
    return 0;
}