#define _SRT_SECRURE_NO_WWARNINGS

#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include <mmsystem.h>
#include<conio.h>

#pragma comment(lib,"winmm.lib")

#define width 220
#define height 80

#define MAGIC_KEY 224 
#define SPACE 32 


void main_menu() {
	
	gotoxy(2, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	gotoxy(0, 0);
	DesignStartScreen();

	gotoxy(2,2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

	printf("\n"); printf("\n");
	printf("\n");
	printf("\n");

	printf("         ZZZZZZZZZZZ  ZZZZZ                                                                         ZZZZZ                                                                                               \n");
	printf("        zZZZZZZZZZZZZ ZZZZZ                                                                  ZZZZZ  ZZZZZ                                                                                               \n");
	printf("        ZZZZZZZZZZZZZ ZZZZZ                                                                  ZZZZZ  ZZZZZ                                                                                               \n");
	printf("        ZZZZZZ  ZZZZZ ZZZZZZZZZZZZ   ZZZZZZZZZZ   ZZZZZZZZZZ   ZZZZZZZZZZ   ZZZZZZZZZZ      ZZZZZZZZZZZZZZZZZZZZ   ZZZZZZZZZZ        ZZZZZZZZZZZ  ZZZZZZZZZZZ ZZZZZZZZZZZZZZZZ    ZZZZZZZZZ             \n");
	printf("        ZZZZZZ  ZZZZZ ZZZZZZZZZZZZZ ZZZZZZZZZZZZ ZZZZZZZZZZZZ ZZZZZZZZZZZZ ZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZ ZZZZZZZZZZZZ      ZZZZZZZZZZZZ ZZZZZZZZZZZZ ZZZZZZZZZZZZZZZZZ ZZZZZZZZZZZZZ           \n");
	printf("        ZZZZZZ        ZZZZZZZZZZZZZ ZZZZZ  ZZZZZ ZZZZZ  ZZZZZ ZZZZZ   ZZZ  ZZZZ   ZZZZZ      ZZZZZ  ZZZZZZZZZZZZZ ZZZZZ  ZZZZZ      ZZZZZ  ZZZZZ ZZZZZ  ZZZZZ ZZZZZZZZZZZZZZZZZ ZZZZZ   ZZZZZ           \n");
	printf("        ZZZZZZ  ZZZZZ ZZZZZZ  ZZZZZ ZZZZZ  ZZZZZ ZZZZZ  ZZZZZ ZZZZZZZZ     ZZZZZZZZZZZZ      ZZZZZ  ZZZZZZ  ZZZZZ ZZZZZZZZZZZZ      ZZZZZ  ZZZZZ ZZZZZ  ZZZZZ ZZZZZ  ZZZZ  ZZZZ ZZZZZZZZZZZZZ           \n");
	printf("        ZZZZZZ  ZZZZZ ZZZZZZ  ZZZZZ ZZZZZ  ZZZZZ ZZZZZ  ZZZZZ      ZZZZZZ  ZZZZZ             ZZZZZ  ZZZZZZ  ZZZZZ ZZZZZ             ZZZZZ  ZZZZZ ZZZZZ  ZZZZZ ZZZZZ  ZZZZ  ZZZZ ZZZZZ                   \n");
	printf("        ZZZZZZZZZZZZZ ZZZZZZ  ZZZZZ ZZZZZZZZZZZZ ZZZZZZZZZZZZ ZZZZZ  ZZZZZ ZZZZZ  ZZZZZ      ZZZZZZ ZZZZZZ  ZZZZZ ZZZZZ  ZZZZZ      ZZZZZZZZZZZZ ZZZZZZZZZZZZ ZZZZZ  ZZZZ  ZZZZ ZZZZZ   ZZZZZ           \n");
	printf("        ZZZZZZZZZZZZZ ZZZZZZ  ZZZZZ ZZZZZZZZZZZ  ZZZZZZZZZZZZ ZZZZZZZZZZZZ ZZZZZZZZZZZZ      ZZZZZZZZZZZZZ  ZZZZZ ZZZZZZZZZZZZ             ZZZZZ ZZZZZZZZZZZZ ZZZZZ  ZZZZ  ZZZZ  ZZZZZZZZZZZ            \n");
	printf("          ZZZZZZZZZZ  ZZZZZ   ZZZZZ   ZZZZZZZZ     ZZZZZZZZ    ZZZZZZZZZZ    ZZZZZZZZ         ZZZZZZ ZZZZ   ZZZZZ  ZZZZZZZZZZ       ZZZZZ  ZZZZZ        ZZZZZ ZZZZZ  ZZZZ  ZZZZ    ZZZZZZZ              \n");
	printf("                                                                                                                                    ZZZZZZZZZZZZ                                                        \n");
	printf("                                                                                                                                     zZZZZZZZZZ                                                         \n");

	while (!_kbhit()) {

		if (_kbhit()) {
			char ch = _getch();
			if (ch != 0 || ch != 0xE0) {
				break;
			}
		}
	}

}
