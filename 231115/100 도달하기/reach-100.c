#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[101] = {1, }, cnt = 2;
    scanf("%d", &arr[1]);
    printf("%d %d", arr[0], arr[1]);
    while(1)
    {
        arr[cnt] = arr[cnt - 1] + arr[cnt - 2];
        printf(" %d", arr[cnt]);
        if(arr[cnt++] >= 100) break;
    }
    return 0;
}