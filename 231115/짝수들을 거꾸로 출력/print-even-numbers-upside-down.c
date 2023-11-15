#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[101], n, cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
    {
        int a;
        scanf("%d", &a);
        if(!(a % 2)) arr[cnt++] = a;
    }
    for(int i = cnt - 1; i >= 0; --i) printf("%d ", arr[i]);
    return 0;
}