#include <stdio.h>
#include <Windows.h>

int main() {
	int n=4,i=0;
	int num;
	int random;
	for(i=0;i<10;i++){
		num = rand() % 2;  //화살표 한 개 출력 or 두개 출력 여부 확인
		for (int j = 0; j < num + 1; j++) {
			random= rand() % 4; // 출력할 화살표 모양을 정함
			if (random == n) break; //화살표를 두 번 출력할 경우, 만약 그 두개의 화살표가 같은 모양이면 두번째 화살표는 출력하지 않고 break;
			n = random;
			if (n == 0) {  //위 화살표
				printf("up ");
			}
			else if (n == 1) {  //아래 화살표
				printf("down ");
			}
			else if (n == 2) {  // 오른쪽 화살표
				printf("right ");
			}
			else if (n == 3) {  //왼쪽 화살표
				printf("left ");
			}
		}
		n = 4; //n은 4로 꼭 초기화
		Sleep(500); //0.5초 뒤 이어서 출력
		printf("\n");
	}
	return 0;
}
