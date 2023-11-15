#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, q, arr[101];
    scanf("%d %d", &n, &q);
    for(int i = 0; i < n; ++i) scanf("%d", &arr[i]);
    while(q--)
    {
        int qu;
        scanf("%d", &qu);
        if(qu == 1)
        {
            int a;
            scanf("%d", &a);
            printf("%d\n", arr[a - 1]);
        }
        else if(qu == 2)
        {
            int a, i;
            scanf("%d", &a);
            for(i = 0; i < n; ++i)
            {
                if(arr[i] == a) break;
            }
            printf("%d\n", i == n ? 0 : i + 1);
        }
        else if(qu == 3)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            for(int i = a - 1; i < b; ++i) printf("%d ", arr[i]);
            printf("\n");
        }
    }
    return 0;
}