#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define MAGIC_KEY 224 //화살표 들어올때 선행되어 들어오는 숫자
#define SPACE 32 //스페이스 키 값

void gotoxy(int x, int y) {
	COORD Pos; //x,y 가지고 있는 구조체
	Pos.X = 2 * x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos); //콘설 커서 위치 알려줌
	//STD_OUTPUT_HANDLE <= 윈도우 베이스 기본 출력 의미
	//GetStdHandle(STR_OUTPUT_HANDLE) => 출력용 핸들 가져옴
}

enum KEYBOARD { //열거형, 명명된 값의 집합, 고정된 상수들의 집합
	UP = 72, LEFT = 75, RIGHT = 77, DOWN = 80
};
