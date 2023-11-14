#define _SRT_SECRURE_NO_WWARNINGS

#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include <mmsystem.h>
#include<conio.h>

#include"Gotoxy.h"



#pragma comment(lib,"winmm.lib")

#define width 220
#define height 70



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

void DesignStartScreen() //시작화면 설정
{
    for (int i = 0; i <= height; i++)
    {
        for (int j = 0; j <= width; j++)
        {
            if (i == 1 || i == height)
                printf("=");

            else
                printf(" ");
        }
    }
}




int main() {

    setConsoleSize();

    CursorView(0);

    DesignStartScreen();

    PlaySound(TEXT("메인화면bgm.wav"), NULL, SND_ASYNC | SND_LOOP);

    main_start();//메인화면

    main_menu();

}
