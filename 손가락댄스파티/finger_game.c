#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define height 20

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

void setConsoleSize() {
    // 콘솔 크기 설정 함수
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    setConsoleSize();
    srand(time(NULL));
    
    int key_max;
    int random;

    while (1) {
        system("cls");
        SetScreen();
        
        for (int i = 0; i < height; i++) {
            key_max = rand() % 2;
            random = rand() % 4;
                
                if (random == 0) {
                    gotoxy(10, i);

                    printf("Left "); // 왼쪽 화살표
                }
                else if (random == 1) {
                    gotoxy(20, i);
                    printf("Down "); // 아래쪽 화살표
                }
                else if (random == 2) {
                    gotoxy(30, i);
                    printf("Up "); // 위쪽 화살표
                }
                else if (random == 3) {
                    gotoxy(40, i);
                    printf("Right "); // 오른쪽 화살표
                }

            Sleep(100);
            printf("\n");
        }
    }

    return 0;
}
