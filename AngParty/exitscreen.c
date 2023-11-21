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

int exitscreen() {

	int return_n = 1;

	PlaySound(NULL, 0, 0);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

	gotoxy(35, 10);

	printf("\n");;
	printf("                                  zZZZZZZZZZ           ZZZZZ               zZZZZZZZ                           ZZZZZZZZZ                                                    \n");
	printf("                                 ZZZZZZZZZZZ           ZZZZZ  ZZZZ        ZZZZZZZZZ                          ZZZZZZZZZZZ                      ZZZZ                        \n");
	printf("                                 ZZZZZZZZZZZ                  ZZZZ       ZZZZZZZZZZ                          ZZZZZZZZZZZ                      ZZZZ                        \n");
	printf("                                 ZZZZZ      ZZZZZ ZZZZZZZZZZ ZZZZZZZ     ZZZZ  ZZZZ  ZZZZZZZZZZz  ZZZZZZZZZZ ZZZZZ  ZZZZ  ZZZZZZZZZZ ZZZZZZZZZZZZZZZZZZZ  ZZZZZ           \n");
	printf("                                 ZZZZZZZZZZZ ZZZZZZZZZ ZZZZZ ZZZZZZZ     ZZZZ  ZZZZ  ZZZZZZZZZZZ ZZZZZZZZZZZ ZZZZZ  ZZZZ ZZZZZZZZZZZ ZZZZZZZZZZZZZZ ZZZZZ ZZZZZ           \n");
	printf("                                 ZZZZZZZZZZZ  ZZZZZZZ  ZZZZZ  ZZZZ       ZZZZ  ZZZZZ ZZZZZ ZZZZZ ZZZZZ ZZZZZ ZZZZZZZZZZZ ZZZZZ  ZZZZ ZZZZZZZ  ZZZZ   ZZZZ ZZZZ            \n");
	printf("                                 ZZZZZ         ZZZZZ   ZZZZZ  ZZZZ      ZZZZZZZZZZZZ ZZZZZ ZZZZZ ZZZZZ ZZZZZ ZZZZZZZZZZZ ZZZZZ  ZZZZ ZZZZZ   ZZZZZ   zZZZZZZZZ            \n");
	printf("                                 ZZZZZ        ZZZZZZZ  ZZZZZ  ZZZZ      ZZZZZZZZZZZZ ZZZZZ ZZZZZ ZZZZZZZZZZZ ZZZZZ       ZZZZZ  ZZZZ ZZZZZ   ZZZZZ    ZZZZZZz             \n");
	printf("                                 ZZZZZZZZZZZ ZZZZZZZZZ ZZZZZ  ZZZZZZ    ZZZZZ   ZZZZ ZZZZZ ZZZZZ  ZZZZZZZZZZ ZZZZZ       ZZZZZZZZZZZ ZZZZZ   ZZZZZZZ   ZZZZZ              \n");
	printf("                                 ZZZZZZZZZZZZZZZ   ZZZZZZZZZ   ZZZZZ    ZZZZZ   ZZZZZZZZZZ ZZZZZ        ZZZZ ZZZZZ            ZZZZZZ ZZZZZ    ZZZZZZ   ZZZZ               \n");
	printf("                                                                                                 ZZZZZZZZZZZ                                         ZZZZZZ               \n");
	printf("                                                                                                  ZZZZZZZZZ                                          ZZZZZ                \n");
	printf("\n");
	printf("\n");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	printf("                                                                              Are you sure you want to exit?");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);

	gotoxy(30, 30);
	printf("\n");
	printf("                                                          ZZZZZZZZZ                                                                                                       \n");
	printf("                                                          Z  Yes  Z                                        No                                                             \n");
	printf("                                                          ZZZZZZZZZ                                                                                                       \n");
	
	int key1;

	

		while (1) //키보드 움직임
		{

			if (_kbhit())
			{
				key1 = _getch();


				if (key1 == 224 || key1 == 0)
				{
					key1 = _getch();

					switch (key1)
					{
					case 75: //left

						PlaySound(TEXT("sweep.wav"), NULL, SND_FILENAME | SND_ASYNC);


						gotoxy(30, 30);
						printf("\n");
						printf("                                                          ZZZZZZZZZ                                                                                                       \n");
						printf("                                                          Z  Yes  Z                                        No                                                             \n");
						printf("                                                          ZZZZZZZZZ                                                                                                       \n");

						return_n = 1;

						break;

					case 77: //riight

						

						PlaySound(TEXT("sweep.wav"), NULL, SND_FILENAME | SND_ASYNC);

						gotoxy(30, 30);

						printf("\n");
						printf("                                                                                                       ZZZZZZZZZZ                                                         \n");
						printf("                                                             Yes                                       Z   No   Z                                                         \n");
						printf("                                                                                                       ZZZZZZZZZZ                                                         \n");


						return_n = 2;

						break;

					}

				}

				else if (key1 == 13) { //enter
					return return_n;
				}


			}
		}

	return return_n;

}
