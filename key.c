#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define MAGIC_KEY 224 //화살표 들어올때 선행되어 들어오는 숫자 (방향키는 컴퓨터 입장에서 224-> 72 or 75 or 77 or 80 의 형태로 입력됨)
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

/*
MENU ReadyGame() { // 방향키 입력에 따른 이동
	int y = 0; int x = 0; int input = 0;
	while (1) {
		input = getch();
		if (input == MAGIC_KEY) {// 받은 키가 224 일 경우 한번 더 getch (방향키는 224 -> ? 이 형태라 두번 입력받아야 알 수 있음
			switch (getch()) {
			case UP:--y;
			case DOWN:++y;
			case RIGHT: ++x;
			case LEFT: --x;
				break;
		    }
		}
	}
}
*/

int Key_input(int n) {  //입력 받은 방향키
	if (n == MAGIC_KEY) { //입력받은 숫자가 224일 경우
		switch (getch()) { //방향키 입력일수도 있으니 한번 더 읽음
		case UP: return 1; //UP의 경우(= getch()의 결과가 72인 경우) 1 리턴
		case DOWN: return 2; //DOWN의 경우(= getch()의 결과가 80인 경우) 2 리턴
		case RIGHT:return 3; //RIGHT의 경우(= getch()의 결과가 77인 경우) 3 리턴
		case LEFT: return 4; //LEFT의 경우(= getch()의 결과가 75인 경우) 4 리턴
			}
	}
	return 0;
}

int main() {
	int n;
	while (1) {
		n=Key_input(getch());
		if (n == 1) printf("up "); // 위 방향키 입력의 경우
		else if (n == 2) printf("down "); //아래 방향키 입력의 경우
		else if (n == 3) printf("right "); // 오른쪽 방향키 입력의 경우
		else if (n == 4) printf("left "); //왼쪽 방향키 입력의 경우
		else return 0; // 방향키 외의 다른 입력이 확인될 시 종료
	}
}
