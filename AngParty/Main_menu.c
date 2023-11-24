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
#define ENTER 13
#define ESC 27



void main_menu() {

	gotoxy(2, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	gotoxy(0, 0);

	SetScreen();


	gotoxy(2, 2);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);


	printf("<ESC> to exit");
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
	printf("         ZZZZZZZZZZZ  ZZZZZ   ZZZZZ   ZZZZZZZZ     ZZZZZZZZ    ZZZZZZZZZZ    ZZZZZZZZ         ZZZZZZ ZZZZ   ZZZZZ  ZZZZZZZZZZ       ZZZZZ  ZZZZZ        ZZZZZ ZZZZZ  ZZZZ  ZZZZ    ZZZZZZZ              \n");
	printf("                                                                                                                                    ZZZZZZZZZZZZ                                                        \n");
	printf("                                                                                                                                     zZZZZZZZZZ                                                         \n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	printf("        ! ( Use <↑> & <↓> button to control )");
	printf("                                                                                                                                                                                                        \n");
	printf("                                                                                                                                                                                                        \n");
	printf("                                                                                                                                                                                                        \n");

	printf("\n");
	printf("\n");
	printf("\n");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	gotoxy(17, 26);
	printf("\n");
	printf("                   ________________________________________________________________________________________________________________________________________________________________________________________________________ \n");
	printf("                  |                                                                                                                                                                                   _______              |\n");
	printf("                  |   ZZZZZ ZZZZZZZZZ ZZZZZZZZZ ZZZZZ    ZZZ   ZZZ ZZZ   ZZZZZZZZZZZ    ZZZZZ       ZZZZZZ   ZZZZ  ZZZZ ZZZZ ZZZZZ ZZZZZZZZZ ZZZZZ ZZZZZ         ZZ           ZZ          ♪          Z       Z             |\n");
	printf("                  |   ZZZZZZZZZZZZZZZ ZZZZZZZZZ ZZZZZ  ZZZZZZZZZZZ ZZZ ZZZZZZZZZZZZZZZ  ZZZZZ     ZZZZZZZZZZ ZZZZ  ZZZZ ZZZZ ZZZZZ ZZZZZZZZZ ZZZZZ ZZZZZ        ZZZZZZZZZZZZZZ ZZ    ♬                ZZZZZ    Z           |\n");
	printf("                  |   ZZZZZ ZZZZ ZZZZ ZZZZZZZZZ ZZZZZ  ZZZZZZZZZZZ ZZZ ZZZZZZZZZZZZZZZ  ZZZZZ     ZZZZ  ZZZZ ZZZZZ ZZZZ ZZZZ ZZZZZ ZZZZZZZZZ ZZZZZ ZZZZZ       Z                 Z   ________                Z   Z         |\n");
	printf("                  |   ZZZZ  ZZZZ ZZZZ      ZZZZ ZZZZZ   zzzzz  ZZZ ZZZ ZZZZZ      ZZZZ  ZZZZZ     ZZZZ  ZZZZ ZZZZZ ZZZZZZZZZZZZZZZ ZZZZZ     ZZZZZ ZZZZZ      Z                   ZZZ        ZZZZ___          Z   Z        |\n");
	printf("                  |   ZZZZ  ZZZZ ZZZZZZZZZZZZZZ ZZZZZZZZZZZZZZ ZZZZZZZ ZZZZZZZZZZZZZZZ  ZZZZZ      ZZZZZZZZ  ZZZZ  ZZZZZZZZZZZZZZZ ZZZZZZZZ ZZZZZZ ZZZZZ      Z   ■      ■        Z               Z           Z   Z        |\n");
	printf("                  |   ZZZZ  ZZZZ ZZZZZZZZZZZZZZ ZZZZZZZZZZ ZZZ ZZZZZZZ ZZZZZZZZZZZZZZZ  ZZZZZ                      ZZZZ ZZZZZZZZZZ ZZZZZZZZ ZZZZZZ ZZZZZ      Z     w_w_w         Z                  Z      Z    Z         |\n");
	printf("                  |   ZZZZ  ZZZZ ZZZZ ZZZZZZZZZ ZZZZZZZZZZ ZZZ ZZZ ZZZ   ZZZZZZZZZZZZ   ZZZZZ      ZZZZZZZZZZZZZ   ZZZZ ZZZZZZZZZZ ZZZZZ    ZZZZZZ ZZZZZ       Z_________________Z                    ZZZZZZ    Z          |\n");
	printf("                  |   ZZZZ  ZZZZ ZZZZ ZZZZZZ    ZZZZZ  ZZZ ZZZ ZZZ ZZZ   ZZZZZ  ZZZZZ             ZZZZZ     ZZZZZ  ZZZZ ZZZZ ZZZZZ ZZZZZ     ZZZZZ               Z                        ZZZ         Z_______ZZ           |\n");
	printf("                  |   ZZZZZ ZZZZ ZZZZ ZZZZZZZZZZZZZZZ  ZZZZZZZ ZZZ ZZZ ZZZZZZZZZZZZZZZ  zZZZz     ZZZZZzzzzzZZZZZ  ZZZZZZZZZ ZZZZZ ZZZZZZZZZ ZZZZZ zZZZz    ♬    Z                      Z             Z                    |\n");
	printf("                  |   ZZZZZZZZZZZZZZZ ZZZZZZZZZZZZZZZ   ZZZZZ  ZZZ ZZZ ZZZZZZZZZZZZZZZ  ZZZZZ      ZZZZZZZZZZZZZ   ZZZZZZZZZ ZZZZZ ZZZZZZZZZ ZZZZZ ZZZZZ          ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ                    |\n");
	printf("                  |________________________________________________________________________________________________________________________________________________________________________________________________________|\n");
	printf("                                                                                                                                                                                                                            \n");
	printf("                                                                                                                                                                                                                            \n");
	printf("                                                                                                                                                                                                                           \n");
	printf("                   ________________________________________________________________________________________________________________________________________________________________________________________________________ \n");
	printf("                  |                                                                                                                                                                                                        |\n");
	printf("                  |    ZZZZZZ   ZZZ  ZZZZZ   ZZZZZ   zZZZZZZ  ZZZZ  ZZZZZZZ  ZZZZ          ZZZZZ     ZZZZZZZZZ ZZZZ  ZZZZZZZZ ZZZZ      ZZZZZ ZZZ  ZZZ     ZZZZZZ     ZZZZZZZZZZZZZZ ZZZZZZZZZ ZZZZZ         ZZZZZZZZZZ    |\n");
	printf("                  |  ZZZZZZZZZ  ZZZ  ZZZZZ   ZZZZZZzZZZZZZZZZ ZZZZ ZZZZZZZZZ ZZZZ         ZZZZZZZ    ZZZZZZZZZ ZZZZ       ZZZ ZZZZZZ    ZZZZZ ZZZ  ZZZ     ZZZZZZ     ZZZZZZZZZZZZZZ ZZZZZZZZZ ZZZZZ        ZZZZZZ   ZZ    |\n");
	printf("                  |  ZZZZ  ZZZZ ZZZZ ZZZZZZZ ZZZZZZzZZZZ ZZZZ ZZZZ ZZZZ ZZZZ ZZZZ       ZZZZZZZZZZZ  ZZZZZZZZZ ZZZZ  ZZZZZZZZ ZZZZZZ    ZZZ   ZZZZZZZZ    ZZZZZZZZ     ZZZ  ZZZ ZZZZ ZZZZZZZZZ ZZZZZ        Z        ZZ    |\n");
	printf("                  |  ZZZZZZZZZ  ZZZ  ZZZZZZZ ZZZZZZ ZZZZ ZZZZ ZZZZ ZZZZ ZZZZ ZZZZ     ZZZZZZ   ZZZZZ     ZZZZZ ZZZZZ ZZZZ     ZZZZ      ZZZZZ ZZZZZZZZ  ZZZZZZZZZZZZ   ZZZ  ZZZ ZZZZZZZZZZ     ZZZZZ        Z        ZZ    |\n");
	printf("                  |    ZZZZZZ   ZZZ                 ZZZZ ZZZZ ZZZZ ZZZZZZZZZ ZZZZ          ZZZZZ         ZZZZZ ZZZZZ ZZZZZZZZ ZZZZ      ZZZZZ ZZZ  ZZZ ZZZZZZZZZZZZZZ  ZZZ  ZZZ ZZZZZZZZZZZZZZ ZZZZZ        Z        ZZ    |\n");
	printf("                  |   ZZZZZZZZZZZZ    ZZZZZZZZZZZZ  ZZZZ ZZZZ ZZZZ  ZZZZZZZ  ZZZZ     ZZZZZZZZZZZZZZ    ZZZZZ  ZZZZ                           ZZZ  ZZZ ZZZZZ    ZZZZZ  ZZZ  ZZZ ZZZZZZZZZZZZZZ ZZZZZ        Z       ZZZ    |\n");
	printf("                  |  ZZZZ      ZZZZ  ZZZZZ    ZZZZZ ZZZZ ZZZZ ZZZZ           ZZZZ     ZZZ             ZZZZZZZ  ZZZZ  ZZZZZZZZZZZZZZ     ZZZZ                           ZZZ  ZZZ ZZZZ ZZZZZ     ZZZZZ        Z     ZZZZZ    |\n");
	printf("                  |  ZZZZZZZZZZZZZZ  ZZZZZZZZZZZZZZ ZZZZZZZZZ ZZZZ ZZZZZZZZZ ZZZZ     ZZZZZZZZZZZZZZ ZZZZZZZ   ZZZZ  ZZZZZZZZZZZZZZ     ZZZZZZZZZZZZZZ ZZZZZZZZZZZZZZ ZZZZZZZZZ ZZZZ ZZZZZZZZZ ZZZZZ    ZZZZZ     ZZZZ     |\n");
	printf("                  |   ZZZZZZZZZZZZ    ZZZZZZZZZZZZ   ZZZZZZZ  ZZZZ ZZZZZZZZZ ZZZZ     ZZZZZZZZZZZZZZ ZZZZZ     ZZZZ           ZZZZZ     ZZZZZZZZZZZZZZ ZZZZZZZZZZZZZZ ZZZZZZZZZZZZZZ ZZZZZZZZZ ZZZZZ    zZZZ               |\n");
	printf("                  |________________________________________________________________________________________________________________________________________________________________________________________________________|\n");

	gotoxy(17, 28);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	printf("\n");
	printf("■■\n");
	printf("■■■\n");
	printf("■■■■\n");
	printf("■■■■■\n");
	printf("■■■■■■\n");
	printf("■■■■■\n");
	printf("■■■■\n");
	printf("■■■\n");
	printf("■■\n");

	while (1) //키보드 움직임
	{
		int key;
		int num=1;
		if (_kbhit())
		{
			key = _getch();

			if (key == ESC) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				gotoxy(0, 0);
				

				SetScreen();
				int n=exitscreen();
				if (n == 1) {
					PlaySound(TEXT("gameover.wav"), NULL, SND_ASYNC | SND_LOOP);
					gotoxy(0, 0);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
					SetScreen();
					Sleep(1300);
					return 1;
				}
				else if(n==2){
					gotoxy(0, 0);
					return 2;
			}

			}

			if (key == 224 || key == 0)
			{
				key = _getch();
				switch (key)
				{
				case 72: //상
					PlaySound(TEXT("followmestart.wav"), NULL, SND_ASYNC | SND_LOOP);
					num = 1;

					gotoxy(17, 45);

					printf("\n");
					printf("  \n");
					printf("   \n");
					printf("    \n");
					printf("     \n");
					printf("      \n");
					printf("     \n");
					printf("    \n");
					printf("   \n");
					printf("  \n");


					gotoxy(17, 28);
					printf("\n");
					printf("■■\n");
					printf("■■■\n");
					printf("■■■■\n");
					printf("■■■■■\n");
					printf("■■■■■■\n");
					printf("■■■■■\n");
					printf("■■■■\n");
					printf("■■■\n");
					printf("■■\n");
					break;
				case 80: //하

					PlaySound(TEXT("fingerparty.wav"), NULL, SND_ASYNC | SND_LOOP);
					num = 2;
	
					gotoxy(17, 28);
					printf("\n");
					printf("  \n");
					printf("   \n");
					printf("    \n");
					printf("     \n");
					printf("      \n");
					printf("     \n");
					printf("    \n");
					printf("   \n");
					printf("  \n");

					gotoxy(17, 45);
					printf("\n");
					printf("■■\n");
					printf("■■■\n");
					printf("■■■■\n");
					printf("■■■■■\n");
					printf("■■■■■■\n");
					printf("■■■■■\n");
					printf("■■■■\n");
					printf("■■■\n");
					printf("■■\n");
					break;
				default:
					break;
				}


			}
			if (key == ENTER) {
				Ang1();
			}
		}
	}
}
