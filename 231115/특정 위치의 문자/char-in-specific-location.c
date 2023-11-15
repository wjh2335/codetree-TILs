#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    scanf("%c", &c);
    if(c == 'L') printf("0");
    else if(c == 'E') printf("1");
    else if(c == 'B') printf("2");
    else if(c == 'R') printf("3");
    else if(c == 'O') printf("4");
    else if(c == 'S') printf("5");
    else printf("None");
    return 0;
}