#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <time.h>

#pragma comment(lib,"winmm.lib")
#define SPACE 32 //스페이스 키 값
#define ENTER 13//엔터 키 값

int sum = 0;
int life = 1;
//double t[15]; // 입력된 북or챙 출력된 시간 저장
int order[15]; //순서 저장
LARGE_INTEGER frequency, end, t[15];
order[15] = { SPACE,SPACE,SPACE,SPACE };

int score(int score)
{
	//perfect일 경우
	if (score == 1) {
		printf("Perfect!");
		sum += 30;
	}
	//Bad일 경우
	else if (score == 3) {
		printf("Miss..");
		life--;
	}

	//생명이 '0'미만이 된 경우
	if (life < 0) {
		printf("Game over\n");
		return 0; //go Game over
	}

	//점수출력
	printf("Score = %d\n", sum);
}

void PlayerKey1(int n) {
	double input_time;  //player 입력
	int k;
	int i = 0;
	while (1) {
		if (_kbhit()) {    // 사용자의 입력
			k = _getch();
			if (k == order[i]) {
				QueryPerformanceCounter(&end);
				input_time = (end.QuadPart - t[i].QuadPart) / frequency.QuadPart; //입력한 시간
				printf("%.6f ", (double)end.QuadPart / frequency.QuadPart);
				printf("%.6f\n", input_time);
				if (input_time >= 2.8 && input_time <= 3.2) {  //2.8 , 3.2 (2.9 기준)
					score(1);
				}
				else {
					score(3);
				}
				i++;
			}
			if (i == 4) break;
		}
	}
	return;
}

int main() {
	//Showbit();
	QueryPerformanceFrequency(&frequency);
	for (int i = 0; i < 4; i++) {
	    QueryPerformanceCounter(&t[i]);
		printf("%.6f\n", (double)t[i].QuadPart / frequency.QuadPart); //출력한 시간
		Sleep(770);
	}
	PlayerKey1(4);

	return 0;
}
