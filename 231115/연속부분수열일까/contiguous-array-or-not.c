#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2, arr1[101], arr2[101], flag;
    scanf("%d %d", &n1, &n2);
    for(int i = 0; i < n1; ++i) scanf("%d", &arr1[i]);
    for(int i = 0; i < n2; ++i) scanf("%d", &arr2[i]);
    for(int i = 0; i < n1 - n2 + 1; ++i)
    {
        flag = 1;
        for(int j = 0; j < n2; ++j)
        {
            if(arr1[i + j] != arr2[j]) flag = 0;
        }
        if(flag) { printf("Yes"); break; }
    }
    if(!flag) printf("No");
    return 0;
}