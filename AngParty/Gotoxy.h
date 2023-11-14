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


enum KEYBOARD { //열거형, 명명된 값의 집합, 고정된 상수들의 집합 (가우둘 코드참고)
    UP = 72, LEFT = 75, RIGHT = 77, DOWN = 80
};

int Key_input(int n) {  //입력 받은 방향키 (가우둘)
    if (n == MAGIC_KEY) { //(스페이스바 입력)
        switch (getch()) {
        case UP: return 1;
        case DOWN: return 2;
        case RIGHT:return 3;
        case LEFT: return 4;
        }
    }
    return 0;
}

#endif
