#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <time.h>

#pragma comment(lib,"winmm.lib")
#define SPACE 32 //스페이스 키 값
#define ENTER 13//엔터 키 값

void Play_Music() {
	PlaySound(TEXT("따라해요 본겜.wav"), NULL, SND_ASYNC);  //노래 재생
	return;
}

int Key_input(int n) {  //입력 받은 키
		switch (getch()) { 
		case SPACE: return 1; //space => 1
		case ENTER: return 2; // enter => 2
		}
	}

int sum = 0;
int life = 1;
float t[10]; //입력된 북or챙 출력된 시간 저장
int order[10];

int score(int score)
{
	
	//perfect일 경우
	if (score==1) {
		printf("Perfect!");
		sum += 30;
	}
	//Good일 경우
	else if (score==2) {
		printf("Good!");
		sum += 10;
	}
	//Bad일 경우
	else if (score == 3) {
		printf("Miss..");
		sum += 0;
		life--;
	}

	//생명이 '0'미만이 된 경우
	if (life <0) {
		printf("Game over");
		return 0;
	}

	//점수출력
	printf("Score = %d\n", sum);
}

void judge(float t) { //판정 (현재 임의로 정함)
	if (t > 2.8 && t < 3) {
		score(1);
	}
	else if ((t >= 2.3 && t <= 2.8) && (t >= 3 && t <= 3.5)) {
		score(2);
	}
	else {
		score(3);
	}
}

void SpaceKey() {
	//PlaySound(TEXT("챙.wav"), NULL, SND_ASYNC);  //노래 재생 싱크 안맞음
	printf("챙\n");
}

void EnterKey() {
	//PlaySound(TEXT("북.wav"), NULL, SND_ASYNC);
	printf("북\n"); //Beep(300, 200);
}

void route1(){ //4박자
	int num;
	int index = 0;
	for (int i = 0; i < 4; i++) {
		num = rand()%2; // 북 or 챙
		srand(time(NULL));
		if (num == 0) {  //0이면 챙 제시
			printf("심벌즈 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용
			t[index] = time(NULL);
			order[index] =SPACE;
		}
		else if (num == 1) { //1 이면 북 제시
			printf("북 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용
			t[index] = time(NULL);
			order[index] = ENTER;
		}
		index++;
		if (i == 3) break;
		else Sleep(780); //탁 -> 탁 사이 시간
	}

}

void route2() { //5박자
	int num;
	int index = 0;
	for (int i = 0; i < 5; i++) {
		num = rand() % 2; // 북 or 챙
		srand(time(NULL));
		if (num == 0) {  //0이면 챙 제시
			printf("심벌즈  "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용
			t[index] = time(NULL);
			order[index] = SPACE;
		}
		else if (num == 1) { //1 이면 북 제시
			printf("북 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용
			t[index] = time(NULL);
			order[index] = ENTER;
		}
		index++;
		if (i == 0) Sleep(370);
		else if (i == 4) Sleep(900);
		else Sleep(520);
	}
}

void PlayerKey() {
	int n;
	int num;
	int index = 0;
	for (int i = 0; i < 4;i++) {
		if (time(NULL) - t[index] > 3) printf("GameOver");
		n = Key_input(_kbhit());

		if (n == order[index]) {
			SpaceKey();
			judge(time(NULL) - t[index]);
			index++;
		}

		else if (n == order[index]) {
			EnterKey();
			judge(time(NULL) - t[index]);
			index++;
		}

		else {
			life--;
			if (life < 0) printf("Gameover");
		}
	}
}

void Showbit() {
	for (int i = 0; i < 4; i++) {
		if(i==0) Sleep(1500);
		route1();
		//PlayerKey();
		Sleep(3500);
		route2();
		//PlayerKey();
		Sleep(2850);
	}
	return;
}

int main() {
	Play_Music();
	int n;
	int num;
	int index = 0;
	Showbit();
	//t = 5.2;
	while (1) {
		n = Key_input(kbhit());

		if (n == 1) {
			SpaceKey();
			judge(time(NULL) - t[index]);
			index++;
		}

		else if (n == 2) {
			EnterKey();
			judge(time(NULL) - t[index]);
			index++;
		}

		else {
			Sleep(100);
			int n = time(NULL);
			printf("%d",n-t[index]);
			return 0;
		}
	}
	return 0;
}
