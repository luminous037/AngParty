#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#include "Gotoxy.h"



#define width 230
#define height 75

void setConsoleSize() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SMALL_RECT windowSize = { 0, 0, (SHORT)(width - 1), (SHORT)(height - 1) };
	SetConsoleWindowInfo(hConsole, TRUE, &windowSize);

	COORD bufferSize = { (SHORT)width, (SHORT)height };
	SetConsoleScreenBufferSize(hConsole, bufferSize);
}

void Beat_down() {
	int i = 0;
	while (1) {
		gotoxy(0, 0);
		printf("\n");
		i++;
		Sleep(100);
		if (i == 20) {
			return;
		}
	}
}

void printNote(char note, int yPos) {
	for (int i = 0; i < yPos; ++i) {
		printf("\n");
	}
	printf(" %c \n", note);
}

int main() {
	int yPos = 0;
	setConsoleSize();
	//CursorView(0);
	int n = 4, i = 0;
	int key_max;
	int random;

	
	for (i = 0; i < 10; i++) {
	
		key_max = rand() % 2;  //화살표 한 개 출력 or 두개 출력 여부 확인]
		for (int j = 0; j < key_max + 1; j++) {

			random = rand() % 4; // 출력할 화살표 모양을 정함
			srand(time(NULL));

			if (random == n) break; //화살표를 두 번 출력할 경우, 만약 그 두개의 화살표가 같은 모양이면 두번째 화살표는 출력하지 않고 break;

			n = random;

			if (n == 0) {  //위 화살표
				gotoxy(10, 5);
				printf(" up "); //화살표 모양 있어야함
			}
			else if (n == 1) {  //아래 화살표
				gotoxy(20, 5);
				printf("down ");
			}
			else if (n == 2) {  // 오른쪽 화살표
			gotoxy(30, 5);
				printf("right ");
			}
			else if (n == 3) {  //왼쪽 화살표
				gotoxy(40, 5);
				printf("left ");
			}
		}
		gotoxy(0, 0);
		//printf("\n");
		//Beat_down();
		n = 4; //n은 4로 꼭 초기화
		Sleep(500); //0.5초 뒤 이어서 출력
		printf("\n");
	}
	return 0;
}
