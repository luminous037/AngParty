#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

#define NOTE_DURATION 200

void playNote(int frequency) {
    Beep(frequency, NOTE_DURATION);
}

void printNote(char note, int yPos) {
    for (int i = 0; i < yPos; ++i) {
        printf("\n");
    }
    printf(" %c \n", note);
}

int main() {
    char notes[] = { 'C', 'D', 'E', 'F', 'G', 'A', 'B' };
    int frequencies[] = { 523, 587, 659, 698, 783, 880, 987 }; // C5, D5, E5, F5, G5, A5, B5

    int yPos = 0;

    for (int i = 0; i < sizeof(notes) / sizeof(notes[0]); ++i) {
        system("cls"); // 콘솔 창을 지우기
        printNote(notes[i], yPos);
        playNote(frequencies[i]);
        Sleep(NOTE_DURATION);
        ++yPos; // 다음 노트는 한 칸 아래로 이동
    }

    return 0;
}
