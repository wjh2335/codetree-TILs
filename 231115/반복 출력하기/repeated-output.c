#include <iostream>

using namespace std;

// n개의 줄에 걸쳐 특정 문자열을 출력하는 함수입니다.
void PrintString(int n) {
    for(int i = 0; i < n; i++) {
        cout << "12345^&*()_" << endl;
    }
}

int main() {
    // 변수 선언 및 입력:
    int row_num;
    cin >> row_num;

    PrintString(row_num);

    return 0;
}