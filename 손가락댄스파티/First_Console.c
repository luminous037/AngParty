#include <stdio.h>
#include <Windows.h>
#include<io.h> //_setmode함수와 '_O_U16TEXT' 상수 사용
#include<fcntl.h> // _setmode함수와 '_O_U16TEXT' 상수 사용

void setUnicodeMode() {
    _setmode(fileno(stdout), _O_U16TEXT); // 유니코드 출력 모드 설정
}

// 네모난 창을 그리는 함수
void drawGameWindow() {
    
    // 위쪽 줄 출력
    wprintf(L"┌");
    for (int i = 0; i < 218; ++i) {
        wprintf(L"─");
    }
    wprintf(L"┐\n");

    //가운데 부분 출력(구간을 나누는 선, 선과의 너비)
    for (int row = 16; row < 80; ++row) { 
        wprintf(L"│"); 
        for (int col = 0; col < 4; ++col) { // 각 행에 4개의 열을 그림
            for (int i = 0; i < 30; ++i) { // 각 행의 너비 
                wprintf(L" ");
            }
            wprintf(L"│");
        }
        wprintf(L"\n");
    }

    //아랫줄 출력
    wprintf(L"└");
    for (int i = 0; i < 218; ++i) {
        wprintf(L"─");
    }
    wprintf(L"┘\n");
}



int main() {
    setUnicodeMode(); // 유니코드 모드 설정

    system("cls"); // 콘솔 화면 지우기
    drawGameWindow(); // 콘솔 창 그리기
    
    return 0;
}
