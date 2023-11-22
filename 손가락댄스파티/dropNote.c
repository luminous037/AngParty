#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#define ArrowType 4
#define ArrowColums 4

//화면에 화살표 출력
void printNote(char note, int yPos) {
    for (int i = 0; i < yPos; ++i) {
        printf("\n");
    }
    printf(" %c \n", note);
}


int main() {
    char notes[] = { '←', '↓', '↑', '→'}; // 출력할 화살표

    int yPos = 0; // 노트가 출력될 위치
   
    for (int i = 0; i < 120; ++i) {
        
        system("cls"); // 콘솔 창을 지우기

        printNote(notes[i], yPos);

        Sleep(100);
        ++yPos; // 다음 노트는 한 칸 아래로 이동

      
    }

    return 0;
}
