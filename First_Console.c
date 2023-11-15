#include <stdio.h>
#include <Windows.h>
#include<io.h>
#include<fcntl.h>

void setUnicodeMode() {
    _setmode(fileno(stdout), _O_U16TEXT); // 유니코드 출력 모드 설정
}

void drawGameWindow() {
    wprintf(L"┌");
    for (int i = 0; i < 218; ++i) {
        wprintf(L"─");
    }
    wprintf(L"┐\n");

    for (int row = 0; row < 160; ++row) {
        if (row % 40 == 0 && row > 0) {
            wprintf(L"├");
            for (int i = 0; i < 218; ++i) {
                wprintf(L"─");
            }
            wprintf(L"┤\n");
        }

        wprintf(L"│");
        for (int col = 0; col < 4; ++col) {
            for (int i = 0; i < 54; ++i) {
                wprintf(L" ");
            }
            wprintf(L"│");
        }
        wprintf(L"\n");
    }

    wprintf(L"└");
    for (int i = 0; i < 218; ++i) {
        wprintf(L"─");
    }
    wprintf(L"┘\n");
}


int main() {
    setUnicodeMode(); // 유니코드 모드 설정

    while (1) {
        system("cls");
        drawGameWindow();
        Sleep(500); // 500밀리초(0.5초) 동안 대기
    }

    return 0;
}
