#pragma once
#ifndef Gotoxy
#define Gotoxy


#define MAGIC_KEY 224
#define SPACE 32 

#include<Windows.h>
#include<conio.h>


void gotoxy(int x, int y) //커서 이동 함수 (가우둘 코드 참고)
{
    COORD pos;
    pos.X = 2 * x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

#endif
