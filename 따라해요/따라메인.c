#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <time.h>


#pragma comment(lib,"winmm.lib")
#define SPACE 32 //스페이스 키 값
#define ENTER 13//엔터 키 값
#define ESC 27 //esc 값

void Play_Music() {
	PlaySound(TEXT("followmestart.wav"), NULL, SND_ASYNC);  //노래 재생
	return;
}

void Draw_sim() { //인터페이스 심벌즈(플레이어)

}

void Draw_buk() { //인터페이스 북(플레이어)

}

int Key_input(int n) {  //입력 받은 키
	switch (getch()) {
	case SPACE: Draw_sim;
	case ENTER: Draw_buk;
	}
}

int sum = 0;
int life = 1;
int order[15]; //순서 저장
LARGE_INTEGER frequency, end, t[15];

int score(int score) //점수
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


double check(int n) {
	QueryPerformanceCounter(&end);
	double time = (end.QuadPart - t[n].QuadPart) / frequency.QuadPart;
	return time;
}

void PlayerKey1(int n) {
	double input_time = 0;  //player 입력
	int k = 0;
	int i = 0;
	while (1) {
		if (_kbhit()) {    // 사용자의 입력
			k = _getch();
			//Key_input(k);
			if (k == order[i]) {
				QueryPerformanceCounter(&end);
				input_time = (end.QuadPart - t[i].QuadPart) / frequency.QuadPart;
				if (input_time >= 2.0 && input_time <= 2.1) { 
					score(1);
				}
				else {
					score(3);
				}
			}
			else if (k != order[i]) {
				score(3);
			}
			i++;
		}
		if (i >= n) break;
		if (check(i) > 2.9) {
			score(3);
			i++;
		}
	}
	while (1) {
		if (check(n - 1) > 2.9) {
			return;
		}
	}
}

void PlayerKey2(int n) {
	Sleep(200);
	double input_time = 0;  //player 입력
	int k = 0;
	int i = 0;
	while (1) {
		if (_kbhit()) {    // 사용자의 입력
			k = _getch();
			//Key_input(k);
			if (k == order[i]) {
				QueryPerformanceCounter(&end);
				input_time = (end.QuadPart - t[i].QuadPart) / frequency.QuadPart;
				if (input_time >= 2.8 && input_time <= 3) {
					score(1);
				}
				else {
					score(3);
				}
			}
			else if (k != order[i]) {
				score(3);
			}
			i++;
		}
		if (check(i) > 3 && i == 0) {
			score(3);
			printf("%d\n", i);
			i++;
		}
		else if (check(i) > 3 && i == 1) {
			score(3);
			printf("%d\n", i);
			i++;
		}
		else if (check(i) > 3 && i == 2) {
			score(3);
			printf("%d\n", i);
			i++;
		}
		else if (check(i) > 3 && i == 3) {
			score(3);
			printf("%d\n", i);
			i++;
		}
		else if (check(i) > 3 && i == 4) {
			score(3);
			printf("%d\n", i);
			i++;
		}
		if (i >= n) break;
	}
	while (1) {
		if (check(n - 1) > 3) {
			return;
		}
	}
}

int route1() { //4박자
	int num;
	int index = 0;
	for (int i = 0; i < 4; i++) {
		if (kbhit()) {
			_getch();
		}
		num = rand() % 2; // 북 or 챙
		srand(time(NULL));
		if (num == 0) {  //0이면 챙 제시
			printf("심벌즈 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)
			QueryPerformanceCounter(&t[i]);
			order[index] = SPACE;
		}
		else if (num == 1) { //1 이면 북 제시
			printf("북 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)
			QueryPerformanceCounter(&t[i]);
			order[index] = ENTER;
		}
		index++;
		if (i == 3) break;
		else Sleep(740); //탁 -> 탁 사이 시간
	}
	if (kbhit()) {
		_getch();
	}
	PlayerKey1(index);
}

int route2() { //5박자
	int num;
	int index = 0;
	for (int i = 0; i < 5; i++) {
		if (kbhit()) {
			_getch();
		}
		num = rand() % 2; // 북 or 챙
		srand(time(NULL));
		if (num == 0) {  //0이면 챙 제시
			printf("심벌즈  "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)
			QueryPerformanceCounter(&t[i]);
			order[index] = SPACE;
		}
		else if (num == 1) { //1 이면 북 제시
			printf("북 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)
			QueryPerformanceCounter(&t[i]);
			order[index] = ENTER;
		}
		index++;
		if (i == 0) Sleep(320);
		else if (i == 4) break;
		else if (i == 1) Sleep(500);
		else if (i == 2) Sleep(440);
		else Sleep(700);
	}
	if (kbhit()) {
		_getch();
	}
	PlayerKey2(index);
}


void Showbit() {
	QueryPerformanceFrequency(&frequency);
	for (int i = 0; i < 4; i++) {
		if (kbhit()) {
			_getch();
		}
		if (i == 0) Sleep(1200);
		route1();
		printf("\n");

		if (kbhit()) {
			_getch();
		}

		Sleep(150);
		route2();
		printf("\n");
		Sleep(200);
	}
	return;
}


int follow() {
	sum = 0;
	int life = 1;
	Play_Music();
	Showbit();
	Sleep(7000);

	return 0;
}

void tuto() {
	PlaySound(TEXT("tuto.wav"), NULL, SND_ASYNC);  //노래 재생
	//튜토리얼 인터페이스
	printf("박자에 맞춰 앙냥이를 따라해보세요!");
	while (1) {
       if (_kbhit()) {
	     int k = _getch();
		 if (k == ESC) break;
	   }
	 }
	return;
}

int main() {
	tuto();
	follow();
	return 0;
}
