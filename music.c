#include <stdio.h>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>

#pragma comment(lib,"winmm.lib")

int main() {
	char key;
		PlaySound(TEXT("Powerup!.wav"), NULL, SND_ASYNC | SND_LOOP);  //노래 재생
		while (1) {
			key = getch();
			if (key != 0) {
				PlaySound(NULL, NULL, 0);  //키 입력 시 노래 종료
				Sleep(2000);
				return;
			}
		}
	return 0;
}
