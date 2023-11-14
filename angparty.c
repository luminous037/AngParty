
#include<stdio.h>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>
#include <mmsystem.h>
#include<conio.h>

#pragma comment(lib,"winmm.lib")

#define width 220
#define height 80

#define MAGIC_KEY 224 //화살표 들어올때 선행되어 들어오는 숫자 (방향키는 컴퓨터 입장에서 224-> 72 or 75 or 77 or 80 의 형태로 입력됨)
#define SPACE 32 //스페이스 키 값



void setConsoleSize() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SMALL_RECT windowSize = { 0, 0, (SHORT)(width - 1), (SHORT)(height - 1) };
    SetConsoleWindowInfo(hConsole, TRUE, &windowSize);

    COORD bufferSize = { (SHORT)width, (SHORT)height };
    SetConsoleScreenBufferSize(hConsole, bufferSize);
}


void gotoxy(int x, int y) //커서 이동 함수 (가우둘 코드 참고)
{
    COORD pos;
    pos.X = 2 * x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

enum KEYBOARD { //열거형, 명명된 값의 집합, 고정된 상수들의 집합 (가우둘 코드참고)
    UP = 72, LEFT = 75, RIGHT = 77, DOWN = 80
};

int Key_input(int n) {  //입력 받은 방향키 (가우둘)
    if (n == MAGIC_KEY) { //(스페이스바 입력)
        switch (getch()) {
        case UP: return 1;
        case DOWN: return 2;
        case RIGHT:return 3;
        case LEFT: return 4;
        }
    }
    return 0;
}

void Console_size() {
    char temp[50];
    sprintf(temp, "Mode con cols=%d lines=%d", width, height);
    system(temp);
}

void CursorView(char show) { //커서 숨기는 함수 (0이면 숨김, 1이면 보임)
    HANDLE  hConsole;
    CONSOLE_CURSOR_INFO ConsoleCursor;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    ConsoleCursor.bVisible = show;
    ConsoleCursor.dwSize = 1;

    SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

void main_start() {

    PlaySound(TEXT("메인화면bgm.wav"), NULL, SND_ASYNC | SND_LOOP);  //노래 재생

    printf(" \n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                                                                                     zZZZZZz   ZZZ ZZZ   ZZZ  ZZZ ZZZZZZZZZ ZZZ   ZZZZZZ  ZZZ                                                                      \n");
    printf("                                                                                    ZZZZZZZZZ  ZZZ ZZZ   ZZZ  ZZZ ZZZZZZZZZ ZZZ ZZZZZZZZZ ZZZ                                                                      \n");
    printf("                                         ZZZZZZZZZZZZ                               ZZ     ZZ  ZZZZZZZZZZZZZ  ZZZ ZZ        ZZZ ZZ     ZZ ZZZ                                                                      \n");
    printf("                                      ZZZZ          Z                               ZZZZZZZZZ  ZZZ ZZZ   ZZZ  ZZZ ZZ        ZZZ ZZZZZZZZZ ZZZ                                                                      \n");
    printf("                                      ZZ ZZZZZZZZZZZZZZZZZZZ           zZZZZZ        zZZZZZz   ZZZ ZZZ   ZZZZZZZZ ZZZZZZZZZZZZZ  ZZZZZZZ  ZZZ                                                                      \n");
    printf("                                      ZZ  ZZZ        Z     ZZZZZZ ZZZZZZ    Z        zZZZZZZZZZZZ  ZZZ   ZZZ  ZZZ ZZ        ZZZ           ZZZ                                                                      \n");
    printf("                                    ZZZZ  ZZ        ZZ          ZZZZZ       Z       ZZZ       ZZZZ ZZZ   ZZZ  ZZZ ZZ        ZZZ           ZZZ                                                                      \n");
    printf("                                 ZZZE  ZZZZZZZZZZZZZZ                       Z       ZZZEZZZZZZZZZZ ZZZZZZZZZ  ZZZ ZZZZZZZZZ ZZZ ZZZZZZZZZZZZZ                                                                      \n");
    printf("                               ZZZ                                          Zz       ZZZZZZZZZZZ   ZZZZZZZZZ  ZZZ ZZZZZZZZZ ZZZ ZZZZZZZZZZ ZZ                                                                      \n");
    printf("                     ZZZZZZZZZZZ                                            ZZ                                                                                                                                     \n");
    printf("                     Z                                                      ZZ                                                                                                                                     \n");
    printf("                     Z                                                      ZZZ                                                                                                                                    \n");
    printf("                     Z                                                        ZZ              ZZZZZZZZZZZZZZZ ZZZZZZZ ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZj   ZZZZZZZZZZZZZZZZZZZZZZ ZZZZZZZZZ             \n");
    printf("                    ZZZ                                      ZZZ            ZZZZZ            Z              Z Z     Z                      Z                 Z    Z  Z             ZZZ     Z Z      Z              \n");
    printf("                 ZZZ  ZZ               ZZZ                   ZZZ         ZZZ     Z          Z               ZZ     Z                      Z                 Z    Z  Z              Z Z     Z Z     Z               \n");
    printf("            ZZZZZZ     Z               ZZZ       ZZ ZZ ZZ                    ZZZZZ         ZZZZZZZZZZZZ    Z Z     Z   ZZZZZZZZZZZZZZZZ ZZZZ     ZZZZZ     ZZ    Z  Z   ZZZZZZZZZZZ Z      ZZ      Z               \n");
    printf("          ZZZ          ZZ                         ZZZ ZZ                   ZZZ   ZZ                   Z    Z Z     Z                     ZZ Z    Z  Z    ZZZ    Z  Z    ZZ          Z     Z Z     Z                \n");
    printf("         ZZ            ZZZZZZZ                                                    Z         ZZZZZZZZZB    Z Z     ZzzzzzzzzzzzzzzzzzzzzzzZ  Z    Z  Z    Z Z    ZZZZ   ZZ           Z     Z Z     Z                \n");
    printf("         Z             Z                                                   ZZZZZZZZ        Z              Z Z     ZzzzzzzzzzzzzzzzzzzzzzzZZ Z    Z  Z    Z Z       Z    ZZZZZZZZZ  ZZ    Z Z      Z                \n");
    printf("         Z             Z   ZZZ                                                   ZZ        Z              Z Z    Z                      ZZ Z    Z  Z    Z Z       Z             Z  Z     Z Z     Z                 \n");
    printf("         Z             ZZZZZ                                                     ZZ       Z     ZZZZZZZZZZZZ     ZZZZZZZZZZZZZZZZZZZZZZZZ  Z    Z  Z    Z Z     ZZZ    zZZZZZZZZZ ZZ    EZ ZZZZZZZ                 \n");
    printf("         ZZ             Z    ZZ                                             ZZZZZZ        Z     Z          Z     Z                      Z Z    Z  Z    Z Z     Z Z    Z          ZZ     Z                          \n");
    printf("          ZZ            ZZ ZZ                                            ZZZZZZZZZ        Z     Z          Z    ZZ    ZzzzzzzzzzzzZ    ZZ Z    Z  Z    Z Z    Z  Z    Z          Z     Z  ZZZZZ                    \n");
    printf("           ZZ            ZZ                 ZZZZZZZ                   ZZZ        ZZ      Z     ZZZZZZZZZZ Z     Z     ZzzzzzzzzzzzZ    ZZZZ   ZZZZZ   ZZZ     Z Z    ZZZZZZZZZZ ZZ    ZZ Z    ZZ                   \n");
    printf("            ZZ            ZZZ           ZZZZ       ZZ                ZZ           ZZ     Z              Z Z     Z                      Z                Z    Z ZZ              ZZZ    Z Z      Z                   \n");
    printf("              ZZZZ                     ZZ           ZZ                            ZZ    Z               ZZ     ZZ                      Z                 Z    Z Z               ZZ    ZZ Z     Z                   \n");
    printf("                 ZZZZZ                ZZ             ZZ                           ZZ    ZZZZZZZZZZZZZZZZZZZZZZZ ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ ZZZZZZZZZZZZZZZZZZ ZZZZ5   ZZZZZ                     \n");
    printf("                     ZZZZZZ                           Z                          ZZ                                                                                                                                \n");
    printf("                          ZZZZZZZZZ                   Z       ZZZZZ             ZZ                                                                                                                                 \n");
    printf("                              ZZZZZZZ                ZZZZZZZZZZ   ZZZ       ZZZZZ                                                                                                                                  \n");
    printf("                                    ZZZ             ZZ              ZZZZZZZZZ                                                                                                                                      \n");
    printf("                                      ZZZ       zZZZz                                                                                                                                                              \n");
    printf("                                        ZZZZZZZZZZ                                                                                                                                                                 \n");
    printf("                                                                                                                                                                                                                   \n");


    gotoxy(width / 2 - 60, height / 2 + 00);
    const char* startText = ">> Press Any Key to start";
    int textLength = strlen(startText);
    int blink = 0;

    while (!_kbhit()) {

        if (_kbhit()) {
            char ch = _getch();
            if (ch != 0 || ch != 0xE0) {
                gotoxy(0, 0);
                for (int i = 0; i < 42; i++) {
                    for (int j = 0; j < 50; j++) {
                        putchar(' ');
                    }
                }
            }
        }
        gotoxy(width / 2 - 60, height / 2 + 00);
        if (blink) {
            printf("%.*s", textLength, startText);
        }
        else {
            for (int i = 0; i < textLength; ++i) {
                putchar(' ');
            }
        }
        blink = !blink;
        Sleep(500); // 500 milliseconds
        gotoxy(width / 2 - 60, height / 2 + 00);
    }

    // Clear the message after a key is pressed
    for (int i = 0; i < textLength; ++i) {
        putchar(' ');
    }

}


// void main_menu() {
//     for (int i = 0; i < 42; i++) {
//         printf("\n");
//     }
//     printf("1. 앙냥이의 손가락 댄스 파티\n");
//     printf("2. 따라해요 앙버터\n");
//     return 0;
// }



int main() {

    setConsoleSize();

    Console_size();//콘솔 크기

    CursorView(0); //커서 숨기기 (수정가능)

    main_start();//메인화면

    // main_menu();
}
