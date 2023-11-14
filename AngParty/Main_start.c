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

#define MAGIC_KEY 224 //화살표 들어올때 선행되어 들어오는 숫자 (방향키는 컴퓨터 입장에서 224-> 72 or 75 or 77 or 80 의 형태로 입력됨)
#define SPACE 32 //스페이스 키 값




void main_start() {

    PlaySound(TEXT("메인화면bgm.wav"), NULL, SND_ASYNC | SND_LOOP);  //노래 재생


    printf("                                                                                                                                                                                                                   \n");
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
                break;
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
