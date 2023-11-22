#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#include "Gotoxy.h"

#define width 230
#define height 80

int ArrowType;
COORD pos;

void setConsoleSize() {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SMALL_RECT windowSize = { 0, 0, (SHORT)(width - 1), (SHORT)(height - 1) };
	SetConsoleWindowInfo(hConsole, TRUE, &windowSize);

	COORD bufferSize = { (SHORT)width, (SHORT)height };
	SetConsoleScreenBufferSize(hConsole, bufferSize);
}

// void print_frame(HANDLE handle)
// {
// 	int i;
// 
// 	pos.X = 1;
// 	pos.Y = 1;
// 	SetConsoleCursorPosition(handle, pos);
// 	printf("\u250D\u2501\u2501\u2501\u2501\u2501\u252F\u2501\u2501\u2501\u2501\u2501\u252F\u2501\u2501\u2501\u2501\u2501\u252F\u2501\u2501\u2501\u2501\u2501\u2511");
// 
// 	for (i = 2; i < 25; i++)
// 	{
// 		pos.X = 1;
// 		pos.Y = i;
// 		SetConsoleCursorPosition(handle, pos);
// 		printf("\u2502          \u2502          \u2502          \u2502          \u2502");
// 	}
// 
// 	pos.X = 1;
// 	pos.Y = 25;
// 	SetConsoleCursorPosition(handle, pos);
// 	printf("\u251D\u2501\u2501\u2501\u2501\u2501\u253F\u2501\u2501\u2501\u2501\u2501\u253F\u2501\u2501\u2501\u2501\u2501\u253F\u2501\u2501\u2501\u2501\u2501\u2525");
// 
// 	for (i = 26; i <= 27; i++)
// 	{
// 		pos.X = 1;
// 		pos.Y = i;
// 		SetConsoleCursorPosition(handle, pos);
// 		printf("\u2502          \u2502          \u2502          \u2502          \u2502");
// 	}
// 
// 	pos.X = 1;
// 	pos.Y = 28;
// 	SetConsoleCursorPosition(handle, pos);
// 	printf("\u2515\u2501\u2501\u2501\u2501\u2501\u2537\u2501\u2501\u2501\u2501\u2501\u2537\u2501\u2501\u2501\u2501\u2501\u2537\u2501\u2501\u2501\u2501\u2501\u2519");
// }

// void downNote(int yPos) {
// 	for (int i = 0; i < yPos; ++i) {
// 		printf("\n");
// 	}
// }

int main() {
	setConsoleSize();
	//CursorView(0);
	int n = 4, i = 0;
	//void print_frame(handle);
	int key_max;
	int random;

	while (1) {
		for (i = 0; i < height; i++) {
			//system("cls");
			key_max = rand() % 2;  //화살표 한 개 출력 or 두개 출력 여부 확인]
			
			for (int j = 0; j < key_max + 1; j++) {
				random = rand() % 4; // 출력할 화살표 모양을 정함
				srand(time(NULL));
				
				if (random == n) break; //화살표를 두 번 출력할 경우, 만약 그 두개의 화살표가 같은 모양이면 두번째 화살표는 출력하지 않고 break;

				n = random;
				
				if (n == 0) {  //위 화살표
					gotoxy(10, i % height); // i % height로 y120에 들어가면 0
					printf("up "); //화살표 모양 있어야함
					printf("\n");
				}
				else if (n == 1) {  //아래 화살표
					gotoxy(20, i % height);
					printf("down ");
				}
				else if (n == 2) {  // 오른쪽 화살표
					gotoxy(30, i % height);
					printf("right ");
				}
				else if (n == 3) {  //왼쪽 화살표
					gotoxy(40, i % height);
					printf("left ");
				}
			}
			n = 4; //n은 4로 꼭 초기화
			Sleep(500); //0.5초 뒤 이어서 출력
			printf("\n");
		}
	}
	return 0;
}
