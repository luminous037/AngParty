
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
#define S 115 //s 값

void PrintWait() {
	gotoxy(0, 3);
	printf("                                                                     ZZZZZZZ                                                        ZZZZZZ                                        \n");
	printf("                                                                 ZZZZ      ZZ                                                   ZZZZZ    ZZ                                       \n");
	printf("                                                                 ZZZZ  ZZZZZZZZZZZZZ        ZZZZ                               ZZZ   ZZZZZZZZZZZ            ZZZ                   \n");
	printf("                                                                 Z   Z      Z      ZZZZZZZZZ   Z                               Z  ZZZ      Z   ZZZZZ   ZZZZZ  Z                   \n");
	printf("                                                              ZZZZZZZ    ZZZZ                  Z                            ZZZZ  Z       ZZ        ZZZ       ZZ                  \n");
	printf("                                                            ZZ      ZZZZZZ                     Z                          ZZZ   ZZZZZZZZZZz                   ZZ                  \n");
	printf("                                                   ZZZZZZZZZ                                   Z                        ZZZ                                   ZZ                  \n");
	printf("                                                   Z                                           ZZ              ZZZZZZZZZZ                                     ZZ                  \n");
	printf("                                                   Z                                            ZZ             ZZ                                             ZZ                  \n");
	printf("                                                   ZZ                              ZZZ         ZZZZZ            Z                                               ZZ                \n");
	printf("                                                    Z            ZZZ               ZZZ      ZZZZ   ZZ           ZZ                               ZZZ         ZZZZZZ               \n");
	printf("                                                    ZZ           ZZZ      ZZZZZZ                   ZZ            Z             ZZZ               ZZZ              Z  ZZZZ         \n");
	printf("                                                     Z                                 ZZZZZZ  ZZZZZZ             Z            ZZZ      ZZZZZZ                    ZZZZZZZZ        \n");
	printf("                                                    ZZZZZZ        ZZZZZ              ZZZ     Z     ZZ             Z                                            ZZZ       ZZ       \n");
	printf("                                                     Z  ZZ     ZZZZ    ZZ           ZZ        ZZZZZZ             ZZZZZ              ZZZ    ZZZ               ZZZ  ZZZZZZZ  ZZZ    \n");
	printf("                                                     ZZZ     ZZz        ZZ         Z          Z  ZZ              ZZ                ZZZZZZZZZZZZ              Z  ZZ       Z  Z Z   \n");
	printf("                                                     ZZ ZZZ ZZ           Z        ZZ          Z ZZ                ZZZ            zZ            ZZZ           Z ZZ         Z  ZZ   \n");
	printf("                                                      ZZ    Z            Z        ZZ         ZZZ                  ZZ  ZZ       ZZZ  ZZZZZZZZ    Z ZZ      ZZZZZZZZZZZ     Z   Z   \n");
	printf("                                                       ZZ   Z            Z      ZZ             ZZ                  ZZZ       ZZ    Z        ZZ  ZZ Z     ZZ         ZZ    Z  ZZ   \n");
	printf("                                                        Z        ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                   ZZ        ZZZZZZ         Z   ZZ                  Z    Z   Z   \n");
	printf("                                                        Z   ZZZZZ                              ZZZZZ                 ZZ     ZZ      ZZ9      Z    Z                  Z  ZZZ  ZZ   \n");
	printf("                                                        ZZZZZ                                       ZZZ              ZZ               Z    zZZ   Z                  ZZZZZ   ZZ    \n");
	printf("                                                       ZZ                                             ZZ             ZZ               ZZZZZZ    ZZ         ZZ     ZZ      ZZ      \n");
	printf("                                                       Z                                             ZZZ              Z               Z       ZZ            zZZZZZZZZZZZZZ        \n");
	printf("                                                       Z  ZZZZ                               ZZZZZZ   ZZ              ZZ      ZZZZZZZZ ZZZZZZZ                     ZZ             \n");
	printf("                                                       Z     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ        ZZ               Z                                           ZZ             \n");
	printf("                                                       Z                                              Z                ZZ        ZZZZZZZZ                            Z            \n");
	printf("                                                       ZZ                                            Z                  ZZ               ZZ                          Z            \n");
	printf("                                                        ZZ                                        ZZZ                    ZZ               Z                          Z            \n");
	printf("                                                         ZZZZZZZZZZZZ                       ZZZZZZZ                       ZZ              Z           ZZZZZZZ      ZZ             \n");
	printf("                                                                     ZZZZZZZZZZZZZZZZZZZZZZZZZ                             ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ      ZZZZZZ               \n");
	printf("                                                                                                                                                                                  \n");
	printf("                                                                                                                                                                                  \n");

}

void PrintDrum2() {

	gotoxy(0, 3);
	printf("                                                                   ZZZZZZZZZZ                                                       ZZZZZZ                                        \n");
	printf("                                                                 ZZZZ   ZZZZZZZZ             ZZZ                                ZZZZZ    ZZ                                       \n");
	printf("                                                                 ZZ  ZZZZ    Z  ZZZZZZZ ZZZZZZ  Z                              ZZZ   ZZZZZZZZZZZ            ZZZ                   \n");
	printf("                                                               zZZZ  Z      ZZ        ZZZZ      Z                              Z  ZZZ      Z   ZZZZZ   ZZZZZ  Z                   \n");
	printf("                                                             ZZZ   ZZZZZZZZZz                   Z                           ZZZZ  Z       ZZ        ZZZ       ZZ                  \n");
	printf("                                                    ZZZZZZZZZz                                  Z                         ZZZ   ZZZZZZZZZZz                   ZZ                  \n");
	printf("                                                   ZZ                                           Z                       ZZZ                                   ZZ                  \n");
	printf("                                                   ZZ                                ZZ         ZZ             ZZZZZZZZZZ                                     ZZ                  \n");
	printf("                                                    Z              ZZZ              Z  Z         ZZZ           ZZ                                             ZZ                  \n");
	printf("                                                    Zz            Z   Z   Z  ZZ  Z   ZZ      ZZZZZ ZZ           Z                                               ZZ                \n");
	printf("                                                     Z             ZZZ     ZZ  ZZ                   ZZ          ZZ                               ZZZ         ZZZZZZ               \n");
	printf("                                                     ZZ                    Z    Z             ZZZZZZZZ           Z             ZZZ               ZZZ              Z  ZZZZ         \n");
	printf("                                                     ZZZZZz                Z    Z                   Z             Z            ZZZ      ZZZZZZ                    ZZZZZZZZ        \n");
	printf("                                                     Z                       ZZZ                    Z             Z                                            ZZZ       ZZ       \n");
	printf("                                                     ZZZZZ                                      ZZZZ             ZZZZZ              ZZZ    ZZZ               ZZZ  ZZZZZZZ  ZZZ    \n");
	printf("                                                     Z   Z                                      ZZ               ZZ                ZZZZZZZZZZZZ              Z  ZZ       Z  Z Z   \n");
	printf("                                                      ZZZZ                                      ZZ                ZZZ            zZ            ZZZ           Z ZZ         Z  ZZ   \n");
	printf("                                                       ZZ               ZZ        Z            ZZ                 ZZ  ZZ       ZZZ  ZZZZZZZZ    Z ZZ      ZZZZZZZZZZZ     Z   Z   \n");
	printf("                                                         Z              ZZZZZZZZZZZZ         zZ  Z                 ZZZ       ZZ    Z        ZZ  ZZ Z     ZZ         ZZ    Z  ZZ   \n");
	printf("                                                         Z   ZZ         Z          zZ        ZZZZZZz                ZZ        ZZZZZZ         Z   ZZ                  Z    Z   Z   \n");
	printf("                                                         Z ZZZZZ       ZZ           ZZZ     ZZ     ZZZ               ZZ     ZZ      ZZ9      Z    Z                  Z  ZZZ  ZZ   \n");
	printf("                                                        ZZ     ZZZZZZZZZ             ZZZZZZZ         ZZ              ZZ               Z    zZZ   Z                  ZZZZZ   ZZ    \n");
	printf("                                                       ZZ                                             ZZ             ZZ               ZZZZZZ    ZZ         ZZ     ZZ      ZZ      \n");
	printf("                                                       Z                                             ZZZ              Z               Z       ZZ            zZZZZZZZZZZZZZ        \n");
	printf("                                                       Z  ZZZZ                               ZZZZZZ   ZZ              ZZ      ZZZZZZZZ ZZZZZZZ                     ZZ             \n");
	printf("                                                       Z     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ        ZZ               Z                                           ZZ             \n");
	printf("                                                       Z                                              Z                ZZ        ZZZZZZZZ                            Z            \n");
	printf("                                                       ZZ                                            Z                  ZZ               ZZ                          Z            \n");
	printf("                                                        ZZ                                        ZZZ                    ZZ               Z                          Z            \n");
	printf("                                                         ZZZZZZZZZZZZ                       ZZZZZZZ                       ZZ              Z           ZZZZZZZ      ZZ             \n");
	printf("                                                                     ZZZZZZZZZZZZZZZZZZZZZZZZZ                             ZZZZZZZZZZZZZZZZZZZZZZZZZZZZ      ZZZZZZ               \n");
}



void PrintTam2() {
	gotoxy(0, 3);
	printf("                                                                     ZZZZZZZ                                                        ZZZZZZ         ZZ          ZZZZ               \n");
	printf("                                                                 ZZZZ      ZZ                                                    ZZZZZZ   ZZ       ZZ              Z              \n");
	printf("                                                                 ZZZZ  ZZZZZZZZZZZZZ        ZZZZ                                ZZZ   zZZZZZZZZZZ           zZZ    ZZ             \n");
	printf("                                                                 Z   Z      Z      ZZZZZZZZZ   Z                               ZZZZZZD    ZZ  ZZZZZZ  ZZZZZZ ZZ    Z              \n");
	printf("                                                              ZZZZZZZ    ZZZZ                  Z                               ZZZZZ        WZZ        ZZZ       Z                \n");
	printf("                                                            ZZ      ZZZZZZ                     Z                          ZZZ   zZZZZZZZZE                    Z                   \n");
	printf("                                                   ZZZZZZZZZ                                   Z                 ZZZZZZZZZZ                                   Z                   \n");
	printf("                                                   Z                                           ZZ              ZZ                                            Z                    \n");
	printf("                                                   Z                                            ZZ             ZZ                               Z            ZZ                   \n");
	printf("                                                   ZZ                              ZZZ         ZZZZZ            ZZ                              ZZZZ           EZZ                \n");
	printf("                                                    Z            ZZZ               ZZZ      ZZZZ   ZZ            Z                     ZZZZZ               EZZZZ ZZ               \n");
	printf("                                                    ZZ           ZZZ      ZZZZZZ                   ZZ            ZZ           ZZZZZ     Z  ZZ                    ZZ               \n");
	printf("                                                     Z                                 ZZZZZZ  ZZZZZZ            ZZ            ZZ      ZZZZ   EZZZ   ZZZZZ      ZZ                \n");
	printf("                                                    ZZZZZZ        ZZZZZ              ZZZ     Z     ZZ            ZZZZZ                      ZZZ   ZZZZZ   Z     ZZ                \n");
	printf("                                                     Z  ZZ     ZZZZ    ZZ           ZZ        ZZZZZZ             ZZ                     ZZZZ    ZZZ    ZZZZ     Z                 \n");
	printf("                                                     ZZZ     ZZz        ZZ         Z          Z  ZZ              ZZZZZZ               ZZ          ZZZZ   ZZZZZ ZZ                 \n");
	printf("                                                     ZZ ZZZ ZZ           Z        ZZ          Z ZZ               ZZ                   Z            zZ ZZ   Z  ZZ                  \n");
	printf("                                                      ZZ    Z            Z        ZZ         ZZZ                 ZZZZZ              ZZ   ZZZZZZZ   Z  ZZ  ZZZZZZ                  \n");
	printf("                                                       ZZ   Z            Z      ZZ             ZZ                 ZZ             ZZZZZZZZZ      Z   Z  Z    Z   Z                 \n");
	printf("                                                        Z        ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                  ZZ           Z         Zz    ZZ  ZZ Z    Z    Z                \n");
	printf("                                                        Z   ZZZZZ                              ZZZZZ                Z                     ZZ     Z   Z Z    Z   ZZ                \n");
	printf("                                                        ZZZZZ                                       ZZZ              Z                      Z     Z   Z Z   Z    ZZ               \n");
	printf("                                                       ZZ                                             ZZ             ZZ                     Z    Zz   Z Z Z       Z               \n");
	printf("                                                       Z                                             ZZZ             ZZ                   ZZZZZZZ    Z    Z  ZZZ  Z               \n");
	printf("                                                       Z  ZZZZ                               ZZZZZZ   ZZ              Z             ZZZZZZ        ZZZZZZZZ        ZZ              \n");
	printf("                                                       Z     ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ        ZZ              ZZ        ZZZZZZZ  ZZZZZZZZZ Z  ZZZ          ZZ             \n");
	printf("                                                       Z                                              Z                ZZ              ZZ                          zZ             \n");
	printf("                                                       ZZ                                            Z                  ZZ              ZZ       Zz                ZZ             \n");
	printf("                                                        ZZ                                        ZZZ                    Z              ZZ              ZZ        ZZ              \n");
	printf("                                                         ZZZZZZZZZZZZ                       ZZZZZZZ                       ZZ            ZZ   ZZZZZZZZZZZZZZZZZZZZZZ               \n");
	printf("                                                                     ZZZZZZZZZZZZZZZZZZZZZZZZZ                             ZZZZZZZZZZZZZZZZZZZZZ                                  \n");

}

void Play_Music() {
	PlaySound(TEXT("followmestart.wav"), NULL, SND_ASYNC);  //노래 재생
	return;
}


int sum;
int life = 1;
int order[15]; //순서 저장
LARGE_INTEGER frequency, end, t[15];
char finalscore[1000];

int score(int score) //점수
{
	//Good!일 경우
	if (score == 1) {
		gotoxy(50, 50);
		printf(" Good!");
		sum += 30;
	}
	//Bad일 경우
	else if (score == 3) {
		gotoxy(50, 50);
		printf("Miss..");
		life--;
	}

	//생명이 '0'미만이 된 경우
	//if (life < 0) {
	//	printf("Game over\n");
	//	return 0; //go Game over
	//}

	//점수출력
	gotoxy(50, 53);
	printf("Score = %d    \n", sum);
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
			if (k == ESC) {
				SetScreen();
				exitscreen();
			}
			if (k == order[i]) {
				QueryPerformanceCounter(&end);
				input_time = (end.QuadPart - t[i].QuadPart) / frequency.QuadPart;
				if (input_time >= 2.0 && input_time <= 2.8) { //2.0에서 움직이면 판정이 다 miss가 뜸
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
		if (i >= n) { 
			break;
		}
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

	double input_time = 0;  //player 입력
	int k = 0;
	int i = 0;
	while (1) {
		if (_kbhit()) {    // 사용자의 입력
			k = _getch();
			if (k == ESC) {
				SetScreen();
				exitscreen();
			}
			if (k == order[i]) {
				QueryPerformanceCounter(&end);
				input_time = (end.QuadPart - t[i].QuadPart) / frequency.QuadPart;
				if (i == 4) {
					if (input_time >= 2.0 && input_time <= 2.8) score(1);
					else score(3);
				}
				else if (i == 2 || i == 3) {
					if (input_time >= 2.0 && input_time <= 2.8) score(1);
					else score(3);
				}
				else if (input_time >= 2.2 && input_time <= 3) {
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
		if (i == 0) {
			if (check(i) > 3.0) {
				score(3);
				i++;
			}
		}
		else if (check(i) > 3.0) {
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

int route1() { //4박자
	int num;
	int index = 0;
	int i = 0;

	while (1) {
		if (_kbhit()) {
			if (_getch() == ESC) {
				main();
			}
			_getch();
		}
		num = rand() % 2; // 북 or 챙
		if (num == 0) {  //0이면 챙 제시
			PrintTam2();
			QueryPerformanceCounter(&t[i]);
			order[index] = ENTER;
			Sleep(130);
			PrintWait();
		}
		else if (num == 1) { //1 이면 북 제시
			PrintDrum2();
			QueryPerformanceCounter(&t[i]);
			order[index] = SPACE;
			Sleep(130);
			PrintWait();
		}
		index++;
		if (_kbhit()) {
			_getch();
		}
		if (i == 3) break;
		else Sleep(580); //탁 -> 탁 사이 시간
		i++;
	}
	if (_kbhit()) {
		_getch();
	}
	FILE* RIGHT = fopen("yourturn.txt", "r");
	int x = 30;  // X 좌표
	int y = 20;
	gotoxy(x, y);
	char buffer[256];
	while (fgets(buffer, sizeof(buffer), RIGHT) != NULL) {

		printf("%s", buffer);
		y++;  // 다음 줄로 이동
		gotoxy(x, y);
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
		if (num == 0) {  //0이면 챙 제시
			PrintTam2();
			//printf("심벌즈  "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)
			QueryPerformanceCounter(&t[i]);
			order[index] = ENTER;
			Sleep(130);
			PrintWait();
		}
		else if (num == 1) { //1 이면 북 제시
			PrintDrum2();
			//printf("북 "); // 이 곳에 대충 함수 만들어서 앙냥이 움직이는 거 넣어주세용(앙냥이 인터페이스)
			QueryPerformanceCounter(&t[i]);
			order[index] = SPACE;;
			Sleep(130);
			PrintWait();
		}
		index++;
		if (_kbhit()) {
			_getch();
		}
		if (i == 0) Sleep(320);
		else if (i == 4) break;
		else if (i == 1) Sleep(500);
		else if (i == 2) Sleep(420);
		else Sleep(700);
		i++;
	}
	if (_kbhit()) {
		_getch();
	}
	FILE* RIGHT = fopen("yourturn.txt", "r");
	int x = 30;  // X 좌표
	int y = 20;
	gotoxy(x, y);
	char buffer[256];
	while (fgets(buffer, sizeof(buffer), RIGHT) != NULL) {

		printf("%s", buffer);
		y++;  // 다음 줄로 이동
		gotoxy(x, y);
	}
	PlayerKey2(index);
}


void Showbit() {
	srand(time(NULL));
	for (int i = 0; i < 4; i++) {
		if (_kbhit()) {
			_getch();
		}
		if (i == 0) Sleep(800);
		else Sleep(500);

		route1();

		if (_kbhit()) {
			_getch();
		}

		Sleep(300);

		route2();
	}
	return;
}

void scorescreen() {

	gotoxy(0, 0);
	SetScreen();

	FILE* RIGHT = fopen("finalscore.txt", "r");
	int x = 30;  // X 좌표
	int y = 20;
	gotoxy(x, y);
	char buffer[256];
	while (fgets(buffer, sizeof(buffer), RIGHT) != NULL) {

		printf("%s", buffer);
		y++;  // 다음 줄로 이동
		gotoxy(x, y);
	}

	gotoxy(42, 29);

	printf("               < Press ESC to exit >");

	printf("\n");
	printf("\n");
	printf("\n");
	printf("                                                                                        ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ \n");
	printf("                                                                                        Z                                             Z \n");
	printf("                                                                                        Z                                             Z \n");
	printf("                                                                                        Z                     %d                     Z \n",sum);
	printf("                                                                                        Z                                             Z \n");
	printf("                                                                                        Z                                             Z \n");
	printf("                                                                                        ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ \n");
	printf("                                                                                              Z    Z  ZZZZZ        ZZZZZZDZ    ZZ       \n");
	printf("                                                                                           ZZZZ    ZZZ                    Z    ZZZZZ    \n");
	printf("                                                                                           Z  Z    ZZ                     Z    ZZ Z     \n");
	printf("                                                                                            Z Z    ZZ                     Z    ZZZ      \n");
	printf("                                                                                            Z Z    ZZ  ZZ           ZZ    Z    ZZ       \n");
	printf("                                                                                             ZZ    ZZ  ZZ           ZZ    Z    ZZ       \n");
	printf("                                                                                             ZZ    ZZ     ZZ__Z__ZZ       Z    ZZ       \n");
	printf("                                                                                             ZZ    ZZ     Z       Z       Z    ZZ       \n");
	printf("                                                                                             ZZ    ZZ     Z       Z       Z    ZZ       \n");
	printf("                                                                                              ZZZ  ZZ     ZZ     ZZ       Z   ZZZZ      \n");
	printf("                                                                                             ZZ  Z ZZ       ZZZZZ         Z  Z   ZZ     \n");
	printf("                                                                                             Z   ZZZZ                     ZZZZ   ZZ     \n");
	printf("                                                                                              ZZ                                ZZ      \n");
	printf("                                                                                               ZZ                              ZZ       \n");
	while (1) {
		char ch = _getch();
		if (ch == ESC) {
			return;
		}
	}

	
}

int follow() {

	sum = 0;
	Play_Music();
	Showbit();
	
	Sleep(3000);
	scorescreen();

	return 0;
}

void tuto() {
	PlaySound(TEXT("tuto.wav"), NULL, SND_ASYNC);  //노래 재생
	//튜토리얼 인터페이스
	printf("박자에 맞춰 앙냥이를 따라해보세요!!\n");
	printf("준비가 되었다면 s를 입력해주세요                                            [SPACE]                                                      [ENTER] \n");
	while (1) {
		if (_kbhit()) {
			int k = _getch();
			if (k == S) break;
		}
	}
	return;
}



int followmeGame() {

	gotoxy(0, 0);
	sum = 0;
	QueryPerformanceFrequency(&frequency);
	SetScreen();
	PrintWait();

	tuto();
	gotoxy(0, 36);
	printf("                                                                                                                                                                                  \n");
	printf("                                                                                                                                                                                  \n");
	follow();

	while (1) {
		if (_kbhit()) {
			_getch();
		}
		else break;
	}
	return 0;
}
