#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <time.h>

// 탁 탁 간격 0.8초
//첫 시작 1초 뒤
//탁탁 탁 탁 탁
//0.37 0.8 0.6 0.6
//2.9

//#define BGM "따라해요 본겜.wav"
//#define SHUFFLE1 "북.wav"    //효과음 경로 지정
//#define SHUFFLE2 "챙.wav"    //효과음 경로 지정

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


//MCI_OPEN_PARMS openBgm;
//MCI_PLAY_PARMS playBgm;
//MCI_OPEN_PARMS openShuffleSound;
//MCI_PLAY_PARMS playShuffleSound;
//
//int dwID;
//
//void playingBgm(void) {
//	openBgm.lpstrElementName = "따라해요 본겜.wav";            //파일 오픈
//	mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_OPEN_TYPE, (DWORD)(LPVOID)&openBgm);
//	dwID = openBgm.wDeviceID;
//	mciSendCommand(dwID, MCI_PLAY, MCI_NOTIFY, (DWORD)(LPVOID)&openBgm);    //음악 한 번 재생
//}
//void playingShuffleSound(void) {
//	openShuffleSound.lpstrElementName = SHUFFLE1;    //파일 오픈
//	mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_OPEN_TYPE, (DWORD)(LPVOID)&openShuffleSound);
//	dwID = openShuffleSound.wDeviceID;
//	mciSendCommand(dwID, MCI_PLAY, MCI_NOTIFY, (DWORD)(LPVOID)&openShuffleSound);    //음악을 한 번 재생
//	Sleep(1800);    //효과음이 재생될 때까지 정지했다가
//	mciSendCommand(dwID, MCI_SEEK, MCI_SEEK_TO_START, (DWORD)(LPVOID)NULL);    //음원 재생 위치를 처음으로 초기화
//}
int sum = 0;
int life = 1;
float t[10]; // 입력된 북or챙 출력된 시간 저장
int order[10]; //순서 저장

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
	if (t >= 2.8 && t <= 3.2) {
		score(1);
	}
	else {
		score(3);
	}
}


void SpaceKey() {
	PlaySound(TEXT("챙.wav"), NULL, SND_ASYNC);  //노래 재생 싱크 안맞음
	printf(" 챙\n");
}

void EnterKey() {
	PlaySound(TEXT("북.wav"), NULL, SND_ASYNC);
	printf(" 북\n"); //Beep(300, 200);
}

int route1(){ //4박자
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
	float input_time;
	for (int i = 0; i < index; i++) {
		if (time(NULL) - t[index] == 3.5) return;
		if (time(NULL) - t[i] > 0.75 * 4 + 0.2) {
			i++;
		}
		if (_getch() == order[i]) {
			input_time = time(NULL) - t[i];
			judge(input_time);
			i++;
		}
		else score(3);
	}
	return;
}

int route2() { //5박자
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
		else if (i == 4) {
			Sleep(900);
			return index;
		}
		else Sleep(520);
	}
	/*float input_time; //판정 아직 못함
	for (int i = 0; i < index; i++) {
		if (time(NULL) - t[index] == 3.5) return;
		if (time(NULL) - t[i] > 0.75 * 4 + 0.2) {
			i++;
		}
		if (_getch() == order[i]) {
			input_time = time(NULL) - t[i];
			judge(input_time);
			i++;
		}
		else score(3);
	}
	return;*/
}

void PlayerKey(int n) {
	float input_time;
	for (int i = 0; i < n; i++) {
		if (time(NULL) - t[n] == 3.5) return;
		if (time(NULL) - t[i] > 0.75 * 4+0.2) {
			i++;
		}
		if (_kbhit() == order[i]) {
			input_time = time(NULL) - t[i];
			judge(input_time);
			i++;
		}
		else score(3);
	}
	return;
}

void Showbit() {
	int n, m;
	for (int i = 0; i < 4; i++) {
		if(i==0) Sleep(1500);
		n=route1();
		//PlayerKey(n);
		Sleep(3500);
		m=route2();
		//PlayerKey(m);
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
	/*while (1) {
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
	}*/
	return 0;
}
