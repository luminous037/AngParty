#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <time.h>


#pragma comment(lib,"winmm.lib")
#define SPACE 32 //스페이스 키 값
#define ENTER 13//엔터 키 값

void Play_Music() {
	PlaySound(TEXT("followmestart.wav"), NULL, SND_ASYNC);  //노래 재생
	return;
}

int main() {
	timeBeginPeriod(1);

	char score[4][256] = {
		{"Miss"},
		{"Bad"},
		{"Good"},
		{"Perfect!"},
	};

	int timing[] = { 3, 3 + 0.8, 3 + 0.8 * 2, 3 + 0.8 * 3 };

	char score_sum[9][256] = { {" "} };

	double begin;
	double end;
	double checkC = 0;

	int tIndex = 0;

	begin = timeGetTime();

	Play_Music();

	while (1) {
		end = timeGetTime(); // 게임 시작시간
		checkC = (end - begin) / 1000;

		if (_kbhit()) {    // 사용자의 입력에 따라 스코어 부여 및 다음 스테이지로 진행
			if (fabs(timing[tIndex] - checkC) >= 1) {
				strcpy(score_sum[tIndex], score[0]);
			}
			else if (fabs(timing[tIndex] - checkC) <= 0.75 && fabs(timing[tIndex] - checkC) > 0.5) {
				strcpy(score_sum[tIndex], score[1]);
			}
			else if (fabs(timing[tIndex] - checkC) <= 0.5 && fabs(timing[tIndex] - checkC) > 0.25) {
				strcpy(score_sum[tIndex], score[2]);
			}
			else if (fabs(timing[tIndex] - checkC) <= 0.25) {
				strcpy(score_sum[tIndex], score[3]);
			}

			_getch();
			tIndex++;
		}

		if (checkC > 3.8 && tIndex == 0) {
			strcpy(score_sum[tIndex], score[0]);
			tIndex++;
		}
		else if (checkC > 4.6 && tIndex == 1) {
			strcpy(score_sum[tIndex], score[0]);
			tIndex++;
		}
		else if (checkC > 5.4 && tIndex == 2) {
			strcpy(score_sum[tIndex], score[0]);
			tIndex++;
		}
		else if (checkC > 6.2 && tIndex == 3) {
			strcpy(score_sum[tIndex], score[0]);
			tIndex++;
		}
		

		for (int i = 0; i < 4; i++) {
			printf("%s  ", score_sum[i]);
		}

		if (tIndex == 4) {
			break;
		}
	
	}

	system("cls");

	Sleep(6800);

	return 0;
}
