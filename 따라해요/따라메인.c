#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <Digitalv.h>
#include <time.h>

// 탁 탁 간격 0.7초
//첫 시작 1초 뒤
//탁탁 탁 탁 탁
//0.45 0.6 0.5 0.65

#define BGM "따라해요 본겜.wav"
#define SHUFFLE1 "북.wav"    //효과음 경로 지정
#define SHUFFLE2 "챙.wav"    //효과음 경로 지정

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


int judge(float t) {
	if (t < 0.7 && t>0.65) {
		score(1);
	}
	else if ((t <= 0.65 && t>=0.6) && (t >= 0.7 && t <= 0.75)) {
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


int main() {
	Play_Music();
	int n;
	float t = time(NULL);
	t = 5.2;
	while (1) {
		n = Key_input(kbhit());

		if (n == 1) {
			SpaceKey();
			judge(5.88-t);
		}

		else if (n == 2) {
			EnterKey();
			judge(5.5 - t);
		}

		else {
			Sleep(100);
			int n = time(NULL);
			printf("%d",n-t);
			return 0;
		}
	}
	return 0;
}
