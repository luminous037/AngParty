#define _SRT_SECRURE_NO_WWARNINGS

#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include <mmsystem.h>
#include<conio.h>

#include"Gotoxy.h"


#pragma comment(lib,"winmm.lib")

#define width 230
#define height 75



void setConsoleSize() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SMALL_RECT windowSize = { 0, 0, (SHORT)(width - 1), (SHORT)(height - 1) };
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);

    COORD bufferSize = { (SHORT)width, (SHORT)height };
    SetConsoleScreenBufferSize(hConsole, bufferSize);
}




void CursorView(char show) { //커서 숨기는 함수 (0이면 숨김, 1이면 보임)
    HANDLE  hConsole;
    CONSOLE_CURSOR_INFO ConsoleCursor;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;

    SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void SetScreen() {
    printf("===========================================================================================================================================================================================================================");
    for (int i = 0; i < 66; i++) {
        for (int j = 0; j < 221; j++) {
            printf(" ");

        }

    }
    printf("\n");
    printf("===========================================================================================================================================================================================================================");

}


void clearInputBuffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void fullscreen() {
    SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
}

int main() {



    main_start();//메인화면

 
    while (1) {
        if (_kbhit()) {
            _getch();
        }
        int n = main_menu();
        if (n == 1) {
            PlaySound(TEXT("gameover.wav"), NULL, SND_ASYNC | SND_ASYNC);
            gotoxy(0, 0);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
            SetScreen();
            Sleep(1300);
            break;
        }

        else if (n == 2) main_start();

        else if (n == 3) {
            gotoxy(0, 0);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            SetScreen();
            followmeGame();
        }

        else if (n == 4) {

            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
            gotoxy(0, 0);
            SetScreen();
            danceparty();
        }
    }

    return 0;

}
