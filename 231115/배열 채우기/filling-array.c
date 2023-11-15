#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[11], i;
    for(i = 0; i < 10; ++i)
    {
        scanf("%d", &arr[i]);
        if(!arr[i]) break;
    }
    for(int j = i - 1; j >= 0; --j) printf("%d ", arr[j]);
    return 0;
}