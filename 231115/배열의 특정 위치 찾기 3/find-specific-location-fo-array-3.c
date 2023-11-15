#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[101], i;
    for(i = 0; i < 100; ++i)
    {
        scanf("%d", &arr[i]);
        if(!arr[i]) break;
    }
    printf("%d", arr[i - 3] + arr[i - 2] + arr[i - 1]);
    return 0;
}