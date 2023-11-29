#define _CRT_SCECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <time.h>
#include "Gotoxy.h"
#pragma comment(lib,"winmm.lib")

#define SPACE 32 //스페이스 키 값
#define ENTER 13//엔터 키 값
#define ESC 27 //esc 값

void SetScreen() {
	printf("===========================================================================================================================================================================================================================");
	for (int i = 0; i < 66; i++) {
		for (int j = 0; j < 221; j++) {
			printf(" ");

		}

	}
	printf("\n");
	printf("===========================================================================================================================================================================================================================");

}

void PrintWait() {
	gotoxy(0, 3);
	printf("                       ZZZZZZZ                                                        ZZZZZZ                                        \n");
	printf("                   ZZZZ      ZZ                                                   ZZZZZ    ZZ                                       \n");
	printf("                   ZZZZ  ZZZZZZZZZZZZZ        ZZZZ                               ZZZ   ZZZZZZZZZZZ            ZZZ                   \n");
	printf("                   Z   Z      Z      ZZZZZZZZZ   Z                               Z  ZZZ      Z   ZZZZZ   ZZZZZ  Z                   \n");
	printf("                ZZZZZZZ    ZZZZ                  Z                            ZZZZ  Z       ZZ        ZZZ       ZZ                  \n");
	printf("              ZZ      ZZZZZZ                     Z                          ZZZ   ZZZZZZZZZZz                   ZZ                  \n");
	printf("     ZZZZZZZZZ                                   Z                        ZZZ                                   ZZ                  \n");
	printf("     Z                                           ZZ              ZZZZZZZZZZ                                     ZZ                  \n");
	printf("     Z                                            ZZ             ZZ                                             ZZ                  \n");
	printf("     ZZ                              ZZZ         ZZZZZ            Z                                               ZZ                \n");
	printf("      Z            ZZZ               ZZZ      ZZZZ   ZZ           ZZ                               ZZZ         ZZZZZZ               \n");
	printf("      ZZ           ZZZ      ZZZZZZ                   ZZ            Z             ZZZ               ZZZ              Z  ZZZZ         \n");
	printf("       Z                                 ZZZZZZ  ZZZZZZ             Z            ZZZ      ZZZZZZ                    ZZZZZZZZ        \n");
	printf("      ZZZZZZ        ZZZZZ              ZZZ     Z     ZZ             Z                                            ZZZ       ZZ       \n");
	printf("       Z  ZZ     ZZZZ    ZZ           ZZ        ZZZZZZ             ZZZZZ              ZZZ    ZZZ               ZZZ  ZZZZZZZ  ZZZ    \n");
	printf("       ZZZ     ZZz        ZZ         Z          Z  ZZ              ZZ                ZZZZZZZZZZZZ              Z  ZZ       Z  Z Z   \n");
	printf("       ZZ ZZZ ZZ           Z        ZZ          Z ZZ                ZZZ            zZ            ZZZ           Z ZZ         Z  ZZ   \n");
	printf("        ZZ    Z            Z        ZZ         ZZZ                  ZZ  ZZ       ZZZ  ZZZZZZZZ    Z ZZ      ZZZZZZZZZZZ     Z   Z   \n");
	printf("         ZZ   Z            Z      ZZ             ZZ                  ZZZ       ZZ    Z        ZZ  ZZ Z     ZZ         ZZ    Z  ZZ   \n");
	printf("          Z        ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                   ZZ        ZZZZZZ         Z   ZZ                  Z    Z   Z   \n");
	printf("          Z   ZZZZZ                              ZZZZZ                 ZZ     ZZ      ZZ9      Z    Z                  Z  ZZZ  ZZ   \n");
	printf("          ZZZZZ                                       ZZZ              ZZ               Z    zZZ   Z                  ZZZZZ   ZZ    \n");
	printf("         ZZ                                             ZZ             ZZ               ZZZZZZ    ZZ         ZZ     ZZ      ZZ      \n");
	printf("         Z                                             ZZZ              Z               Z       ZZ            zZZZZZZZZZZZZZ        \n");
	printf("         Z  ZZZZ                               ZZZZZZ   ZZ              ZZ      ZZZZZZZZ ZZZZZZZ                     ZZ             \n");
	printf("         Z     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ        ZZ               Z                                           ZZ             \n");
	printf("         Z                                              Z                ZZ        ZZZZZZZZ                            Z            \n");
	printf("         ZZ                                            Z                  ZZ               ZZ                          Z            \n");
	printf("          ZZ                                        ZZZ                    ZZ               Z                          Z            \n");
	printf("           ZZZZZZZZZZZZ                       ZZZZZZZ                       ZZ              Z           ZZZZZZZ      ZZ             \n");
	printf("                       ZZZZZZZZZZZZZZZZZZZZZZZZZ                             ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ      ZZZZZZ               \n");
}

void PrintDrum2(){

	gotoxy(0, 3);
	printf("                     ZZZZZZZZZZ                                                       ZZZZZZ                                        \n");
	printf("                   ZZZZ   ZZZZZZZZ             ZZZ                                ZZZZZ    ZZ                                       \n");
	printf("                   ZZ  ZZZZ    Z  ZZZZZZZ ZZZZZZ  Z                              ZZZ   ZZZZZZZZZZZ            ZZZ                   \n");
	printf("                 zZZZ  Z      ZZ        ZZZZ      Z                              Z  ZZZ      Z   ZZZZZ   ZZZZZ  Z                   \n");
	printf("               ZZZ   ZZZZZZZZZz                   Z                           ZZZZ  Z       ZZ        ZZZ       ZZ                  \n");
	printf("      ZZZZZZZZZz                                  Z                         ZZZ   ZZZZZZZZZZz                   ZZ                  \n");
	printf("     ZZ                                           Z                       ZZZ                                   ZZ                  \n");
	printf("     ZZ                                ZZ         ZZ             ZZZZZZZZZZ                                     ZZ                  \n");
	printf("      Z              ZZZ              Z  Z         ZZZ           ZZ                                             ZZ                  \n");
	printf("      Zz            Z   Z   Z  ZZ  Z   ZZ      ZZZZZ ZZ           Z                                               ZZ                \n");
	printf("       Z             ZZZ     ZZ  ZZ                   ZZ          ZZ                               ZZZ         ZZZZZZ               \n");
	printf("       ZZ                    Z    Z             ZZZZZZZZ           Z             ZZZ               ZZZ              Z  ZZZZ         \n");
	printf("       ZZZZZz                Z    Z                   Z             Z            ZZZ      ZZZZZZ                    ZZZZZZZZ        \n");
	printf("       Z                       ZZZ                    Z             Z                                            ZZZ       ZZ       \n");
	printf("       ZZZZZ                                      ZZZZ             ZZZZZ              ZZZ    ZZZ               ZZZ  ZZZZZZZ  ZZZ   \n");
	printf("       Z   Z                                      ZZ               ZZ                ZZZZZZZZZZZZ              Z  ZZ       Z  Z Z   \n");
	printf("        ZZZZ                                      ZZ                ZZZ            zZ            ZZZ           Z ZZ         Z  ZZ   \n");
	printf("         ZZ               ZZ        Z            ZZ                 ZZ  ZZ       ZZZ  ZZZZZZZZ    Z ZZ      ZZZZZZZZZZZ     Z   Z  \n");
	printf("           Z              ZZZZZZZZZZZZ         zZ  Z                 ZZZ       ZZ    Z        ZZ  ZZ Z     ZZ         ZZ    Z  ZZ   \n");
	printf("           Z   ZZ         Z          zZ        ZZZZZZz                ZZ        ZZZZZZ         Z   ZZ                  Z    Z   Z   \n");
	printf("           Z ZZZZZ       ZZ           ZZZ     ZZ     ZZZ               ZZ     ZZ      ZZ9      Z    Z                  Z  ZZZ  ZZ   \n");
	printf("          ZZ     ZZZZZZZZZ             ZZZZZZZ         ZZ              ZZ               Z    zZZ   Z                  ZZZZZ   ZZ    \n");
	printf("         ZZ                                             ZZ             ZZ               ZZZZZZ    ZZ         ZZ     ZZ      ZZ      \n");
	printf("         Z                                             ZZZ              Z               Z       ZZ            zZZZZZZZZZZZZZ        \n");
	printf("         Z  ZZZZ                               ZZZZZZ   ZZ              ZZ      ZZZZZZZZ ZZZZZZZ                     ZZ             \n");
	printf("         Z     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ        ZZ               Z                                           ZZ             \n");
	printf("         Z                                              Z                ZZ        ZZZZZZZZ                            Z            \n");
	printf("         ZZ                                            Z                  ZZ               ZZ                          Z            \n");
	printf("          ZZ                                        ZZZ                    ZZ               Z                          Z            \n");
	printf("           ZZZZZZZZZZZZ                       ZZZZZZZ                       ZZ              Z           ZZZZZZZ      ZZ             \n");
	printf("                       ZZZZZZZZZZZZZZZZZZZZZZZZZ                             ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ      ZZZZZZ               \n");
}



void PrintTam2() {
	gotoxy(0, 3);
	printf("                       ZZZZZZZ                                                        ZZZZZZ         ZZ          ZZZZ               \n");
	printf("                   ZZZZ      ZZ                                                    ZZZZZZ   ZZ       ZZ              Z              \n");
	printf("                   ZZZZ  ZZZZZZZZZZZZZ        ZZZZ                                ZZZ   zZZZZZZZZZZ           zZZ    ZZ             \n");
	printf("                   Z   Z      Z      ZZZZZZZZZ   Z                               ZZZZZZD    ZZ  ZZZZZZ  ZZZZZZ ZZ    Z              \n");
	printf("                ZZZZZZZ    ZZZZ                  Z                               ZZZZZ        WZZ        ZZZ       Z                \n");
	printf("              ZZ      ZZZZZZ                     Z                          ZZZ   zZZZZZZZZE                    Z                   \n");
	printf("     ZZZZZZZZZ                                   Z                 ZZZZZZZZZZ                                   Z                   \n");
	printf("     Z                                           ZZ              ZZ                                            Z                    \n");
	printf("     Z                                            ZZ             ZZ                               Z            ZZ                   \n");
	printf("     ZZ                              ZZZ         ZZZZZ            ZZ                              ZZZZ           EZZ                \n");
	printf("      Z            ZZZ               ZZZ      ZZZZ   ZZ            Z                     ZZZZZ               EZZZZ ZZ               \n");
	printf("      ZZ           ZZZ      ZZZZZZ                   ZZ            ZZ           ZZZZZ     Z  ZZ                    ZZ               \n");
	printf("       Z                                 ZZZZZZ  ZZZZZZ            ZZ            ZZ      ZZZZ   EZZZ   ZZZZZ      ZZ                \n");
	printf("      ZZZZZZ        ZZZZZ              ZZZ     Z     ZZ            ZZZZZ                      ZZZ   ZZZZZ   Z     ZZ                \n");
	printf("       Z  ZZ     ZZZZ    ZZ           ZZ        ZZZZZZ             ZZ                     ZZZZ    ZZZ    ZZZZ     Z                 \n");
	printf("       ZZZ     ZZz        ZZ         Z          Z  ZZ              ZZZZZZ               ZZ          ZZZZ   ZZZZZ ZZ                 \n");
	printf("       ZZ ZZZ ZZ           Z        ZZ          Z ZZ               ZZ                   Z            zZ ZZ   Z  ZZ                  \n");
	printf("        ZZ    Z            Z        ZZ         ZZZ                 ZZZZZ              ZZ   ZZZZZZZ   Z  ZZ  ZZZZZZ                  \n");
	printf("         ZZ   Z            Z      ZZ             ZZ                 ZZ             ZZZZZZZZZ      Z   Z  Z    Z   Z                 \n");
	printf("          Z        ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                  ZZ           Z         Zz    ZZ  ZZ Z    Z    Z                \n");
	printf("          Z   ZZZZZ                              ZZZZZ                Z                     ZZ     Z   Z Z    Z   ZZ                \n");
	printf("          ZZZZZ                                       ZZZ              Z                      Z     Z   Z Z   Z    ZZ               \n");
	printf("         ZZ                                             ZZ             ZZ                     Z    Zz   Z Z Z       Z               \n");
	printf("         Z                                             ZZZ             ZZ                   ZZZZZZZ    Z    Z  ZZZ  Z               \n");
	printf("         Z  ZZZZ                               ZZZZZZ   ZZ              Z             ZZZZZZ        ZZZZZZZZ        ZZ              \n");
	printf("         Z     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ        ZZ              ZZ        ZZZZZZZ  ZZZZZZZZZ Z  ZZZ          ZZ             \n");
	printf("         Z                                              Z                ZZ              ZZ                          zZ             \n");
	printf("         ZZ                                            Z                  ZZ              ZZ       Zz                ZZ             \n");
	printf("          ZZ                                        ZZZ                    Z              ZZ              ZZ        ZZ              \n");
	printf("           ZZZZZZZZZZZZ                       ZZZZZZZ                       ZZ            ZZ   ZZZZZZZZZZZZZZZZZZZZZZ               \n");
	printf("                       ZZZZZZZZZZZZZZZZZZZZZZZZZ                             ZZZZZZZZZZZZZZZZZZZZZ                                  \n");

}


void Play_Music() {
	PlaySound(TEXT("followmestart.wav"), NULL, SND_ASYNC);  //노래 재생
	return;
}


void Draw_buk() { //인터페이스 북(플레이어)
	printf("퉁! ");
}

int Keyinput(int n) {  //입력 받은 키
	if (n == SPACE || n == ENTER) {
		Draw_buk();
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
		printf("Good!");
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
				if (input_time >= 2.1 && input_time <= 3) {
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
		if (check(i) > 3) {
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
		if (i >= n) break;
		if (check(i) > 3) {
			score(3);
			printf("%d\n", i);
			i++;
		}
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
	int i = 0;
	while (1) {
		if (_kbhit()) {
			_getch();
		}
		num = rand() % 2; // 북 or 챙
		srand(time(NULL));
		if (num == 0) {  //0이면 챙 제시
			PrintTam2();
			printf("심벌즈 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)
			QueryPerformanceCounter(&t[i]);
			order[index] = SPACE;
			Sleep(150);
			PrintWait();
		}
		else if (num == 1) { //1 이면 북 제시
			PrintDrum2();
			printf("북 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)

			QueryPerformanceCounter(&t[i]);
			order[index] = ENTER;
			Sleep(150);
			PrintWait();
		}
		index++;
		if (_kbhit()) {
			_getch();
		}
		
		if (i == 3) break;
		else Sleep(740); //탁 -> 탁 사이 시간
		
		i++;
		

	
	}
	if (_kbhit()) {
		_getch();
	}
	PlayerKey1(index);
}

int route2() { //5박자
	int num;
	int index = 0;
	int i = 0;
	while (1) {
		if (_kbhit()) {
			_getch();
		}
		num = rand() % 2; // 북 or 챙
		srand(time(NULL));
		if (num == 0) {  //0이면 챙 제시
			PrintTam2();
			printf("심벌즈  "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)
			QueryPerformanceCounter(&t[i]);
			order[index] = SPACE;
			Sleep(150);
			PrintWait();
		}
		else if (num == 1) { //1 이면 북 제시
			PrintDrum2();
			printf("북 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)
			QueryPerformanceCounter(&t[i]);
			order[index] = ENTER;
			Sleep(150);
			PrintWait();
		}
		index++;
		if (_kbhit()) {
			_getch();
		}
		
		if (i == 0) Sleep(320);
		else if (i == 4) break;
		else if (i == 1) Sleep(500);
		else if (i == 2) Sleep(440);
		else Sleep(700);
		i++;
	}
	if (_kbhit()) {
		_getch();
	}
	PlayerKey2(index);
}


void Showbit() {
	QueryPerformanceFrequency(&frequency);
	for (int i = 0; i < 4; i++) {
		if (_kbhit()) {
			_getch();
		}
		if (i == 0) Sleep(1200);
		route1();
		
		printf("\n");

		if (_kbhit()) {
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
	gotoxy(0,1);
	printf("박자에 맞춰 앙냥이를 따라해보세요!!\n");
	printf("준비가 되었다면 esc를 입력해주세요\n");
	while (1) {
		if (_kbhit()) {
			int k = _getch();
			if (k == ESC) break;
			else  Keyinput(k);
		}
	}
	return;
}

int main() {

	SetScreen();
	PrintWait();


	tuto();
	follow();
	return 0;
}
