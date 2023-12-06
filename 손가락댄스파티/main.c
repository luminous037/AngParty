#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <mmsystem.h>
#include<string.h>

#pragma comment (lib, "winmm.lib") // PlaySound함수 이용하기 위해서

#include "Gotoxy.h"

// 게임 창 크기 (가로 : 80, 세로 : 60)
#define MaxLine 60 // 최대 행 수
#define PlayingLine (MaxLine-1)
#define max_ms 100

int frame[100][6]; // 게임 할 떄 노트의 위치를 저장 

// void cls(HANDLE hConsole);
void character(HANDLE handle);
void print_frame(HANDLE handle); // 게임의 기본 틀 출력
void move_location(); // 노트가 이동하는 함수, 행을 한 칸 씩 감소
void random_note(HANDLE handle); // 노트의 초기위치와 점수를 랜덤 생성
void display_frame(HANDLE handle); // 현재 노트를 화면에 출력
int get_point(HANDLE handle, int max_sec); // 키보드 입력을 받아 점수 계산
void display_total_point(HANDLE handle, int total_porint); // 총 점수 화면에 출력
void display_line(HANDLE handle, int y, int shape); // 특정 행의 노트 상태 화면에 출력


int main() {
    system("mode con : cols = 220 lines = 80"); // 콘솔창 크기 설정(가로 : 220, 세로 : 80)
    int total_point = 0; //합산 점수
    HANDLE handle;
    COORD pos;

    handle = GetStdHandle(STD_OUTPUT_HANDLE);

    memset(frame, 0, 4 * PlayingLine * 4); //frame[0][0]을 모두 0으로 채워준다

    CursorView(0);
    // cls(handle);

    PlaySound(TEXT("finger_party.wav"), NULL, SND_ASYNC);

    print_frame(handle); //frame 출력

    display_total_point(handle, 0); // 점수표시

    srand(time(NULL));

    /*
    <전체흐름>
    "노트를 이동 - > 전체화면(틀과 노트) 출력 -> 키보드 입력 및 point계산" 하는 순서
    기본 틀은 5칸, 이것을 2차원 배열로 생각하면 frame[row][col].(row : 28칸, col : 5칸)
    */

    while (1)
    {
       
        int point = 0;

        move_location(); // 위치 이동

        random_note(handle); // 입력

        display_frame(handle); // 출력

        point = get_point(handle, max_ms); // 키보드 입력해서 점수 얻기

        if (point > 0)
        {
            total_point += point;
            display_total_point(handle, total_point);
        }
    }

    pos.X = 1;
    pos.Y = 30;
    SetConsoleCursorPosition(handle, pos);

    return 0;
}

void print_frame(HANDLE handle)
{
    int i;
    COORD pos;
    FILE* TITLE = fopen("LetsDance.txt", "r"); // 파일 열기
    int x = 80;
    int y = 0;
    gotoxy(x, y);
    char buffer[256];
    for (int i = 0; i < 10; i++) {
        fgets(buffer, sizeof(buffer), TITLE);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        printf("%s", buffer);
        y++;  // 다음 줄로 이동
        gotoxy(x, y);
    }
    fclose(TITLE);

    // 틀의 시작 위치 지정
    pos.X = 0;
    pos.Y = 0;
    SetConsoleCursorPosition(handle, pos);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    //틀의 윗부분 출력 (구간 마다 20칸 설정(=각 칸 40개)
    printf("\u250D\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501" // 첫번째 열
        "\u252F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501" // 두번째 열, u252F : ㅜ 
        "\u252F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501" // 세번째 열
        "\u252F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2511"); //네번쨰 열

    // 세로줄 출력
    for (i = 0; i < (MaxLine - 3); i++)
    {
        pos.X = 0;
        pos.Y = 1 + i;
        SetConsoleCursorPosition(handle, pos);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        printf("\u2502                                        \u2502                                        \u2502                                        \u2502                                        \u2502");
    }

    // 틀의 아랫부분 출력
    pos.X = 0;
    pos.Y = (MaxLine - 3) + 1;
    SetConsoleCursorPosition(handle, pos);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("\
\u251D\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\
\u253F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\
\u253F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\
\u253F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2525");

    // 틀의 아래쪽 세로줄 출력
    for (i = 0; i < 2; i++)
    {
        pos.X = 0;
        pos.Y = (MaxLine - 3) + 2 + i;
        SetConsoleCursorPosition(handle, pos);
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        printf("\u2502                                        \u2502                                        \u2502                                        \u2502                                        \u2502");
    }

    //틀의 마지막 세로줄 출력
    pos.X = 0;
    pos.Y = (MaxLine - 3) + 4;
    SetConsoleCursorPosition(handle, pos);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("\
\u2515\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\
\u2537\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\
\u2537\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\
\u2537\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2519");
}


// 노트 이동시키는 함수, 각 행의 노트 상태를 한칸씩 위로
void move_location()
{
    Sleep(100); //1000 =1초
    int x, y;
    for (y = (PlayingLine - 1); y > 0 && y > (PlayingLine - 220); y--)
    {
        for (x = 5; x >= 0; x--)
        {
            // 이전 frame에서 출력된 것을 그다음 frame으로 옮김
            frame[y][x] = frame[y - 1][x]; // frame[행][열]
        }
    }
    // 노트 모양 0으로 초기화
    for (x = 5; x >= 0; x--)
        frame[0][x] = 0;
}

//노트의 초기위치와 점수를 랜덤 설정
void random_note(HANDLE handle)
{
    // 4칸 중에 하나만 있어야 된다.
    int random, rnd_point;

    // 첫번째 행에 노트 랜덤 생성
    if (rand() % 5 == 2) {
        random = rand() % 4;
        frame[0][random] = 1; // 1이면 해당 열에 노트가 존재

        rnd_point = rand() % 9 + 1; // rnd = 1~10, rnd는 점수.
        frame[0][4] = rnd_point; // 점수

        frame[0][5] = 0; // shape값 초기화
    }
}

// 현재 노트 상태를 기준으로 display_line을 호출
// 모든 행에 대하여 display_line을 호출
void display_frame(HANDLE handle)
{
    // 현재 위치를 기준으로, 역시 감소하는 방향으로
    int y;

    for (y = (PlayingLine - 1); y >= 0; y--)
    {
        if (frame[y][4] == 0) continue; // 0일 떄는 해당 행에 노트가 없음을 의미하므로 다음 y로 넘어감

        display_line(handle, y, frame[y][5]); // 노트를 출력
    }
}

// 점수를 계산
int get_point(HANDLE handle)
{
    // 키를 입력받고 point 표시 + 출력
    int point = 0;
    int wait_ms = 0;
    char key = 0;
    int Height = 30;

    // 왼쪽 화살표를 클릭할 경우
    if (GetAsyncKeyState(VK_LEFT) & 0x8000)
    {
        FILE* LEFT = fopen("LeftAng.txt", "r"); // 파일 열기
        int x = 90;
        int y = 20;
        gotoxy(x, y);
        char buffer[256];
        for (int i = 0; i < Height; i++) {
            fgets(buffer, sizeof(buffer), LEFT);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
            printf("%s", buffer);
            y++;  // 다음 줄로 이동
            gotoxy(x, y);
        }
        fclose(LEFT);

        if (frame[58][0] == 1 || frame[59][0] == 1)
        {
            point += 10;
        
            frame[58][5] = 1;
            frame[59][5] = 1;
        }
        else if(frame[57][0] == 1) point += 5;
    }


    else if (GetAsyncKeyState(VK_DOWN) & 0x8000)
    {
        FILE* DOWN = fopen("DownAng.txt", "r"); // 파일 열기
        int x = 90;  
        int y = 20;   
        gotoxy(x, y);
        char buffer[256];
        for (int i = 0; i < Height; i++) {
            fgets(buffer, sizeof(buffer), DOWN);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            printf("%s", buffer);
            y++;  // 다음 줄로 이동
            gotoxy(x, y);
        }
        fclose(DOWN);

        if (frame[58][1] == 1 || frame[59][1] == 1)
        {
            point += 10;
  
            frame[58][5] = 1;
            frame[59][5] = 1;
        }
        else if (frame[57][1] == 1)point += 5;
    }
    else if (GetAsyncKeyState(VK_UP) & 0x8000)
    {
        FILE* UP = fopen("UpAng.txt", "r");
        int x = 90;  // X 좌표
        int y = 20;
        gotoxy(x, y);
        char buffer[256];
        for (int i = 0; i < Height; i++) {
            fgets(buffer, sizeof(buffer), UP);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            printf("%s", buffer);
            y++;  // 다음 줄로 이동
            gotoxy(x, y);
        }
        fclose(UP);

        if (frame[58][2] == 1 || frame[59][2] == 1)
        {
            point += 10;
 
            frame[58][5] = 1;
            frame[59][5] = 1;
        }
        else if (frame[57][2] == 1)point += 5;
    }


    else if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
    {
        FILE* RIGHT = fopen("RightAng.txt", "r");
        int x = 90;  // X 좌표
        int y = 20;
        gotoxy(x, y);
        char buffer[256];
        for(int i=0; i<Height; i++)  {
            fgets(buffer, sizeof(buffer), RIGHT);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
            printf("%s", buffer);
            y++;  // 다음 줄로 이동
            gotoxy(x, y);
        }
        fclose(RIGHT);

        if (frame[58][3] == 1 || frame[59][3] == 1)
        {
            point += 10;
     
            frame[58][5] = 1;
            frame[59][5] = 1;
        }
        else if (frame[57][3] == 1) point += 5;
    }

    // 판정 부분에 해당하는 노트를 사용자가 정확하게 눌렀다는 의미(shape값이 1), display_line호출
    if (frame[58][5] == 1 || frame[59][5] == 1) {
        display_line(handle, 58, frame[58][5]);
        display_line(handle, 59, frame[59][5]);
    }
    return point;
}

// 점수를출력할 위치, 점수 계산
void display_total_point(HANDLE handle, int total_point)
{
    COORD pos;

    pos.X = 200;
    pos.Y = 58;

    SetConsoleCursorPosition(handle, pos);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
    printf("point : %d", total_point);
}

// y행의 노트를 출력 
//y : 현재 행 번호, shape : 노트의 모양(0이면 잘못누름, 1이면 올바르게 누름)
void display_line(HANDLE handle, int y, int shape)
{
    int x; // x : 현재 열의 인덱스 (0 ~ 3)
    COORD pos;

    pos.X = 0; // 열의 시작 위치를 설정

    // 노트 출력할 y값 정하기
    if (y > (PlayingLine -1 -2))  // 정답 칸으로 y좌표 이동
        pos.Y = y + 2;
    else {
        pos.Y = y+1; // 노트가 내려오는 칸 y좌표 이동
    }
 
    SetConsoleCursorPosition(handle, pos); //콘솔창 커서의 위치를 'pos'로 이동

    // 열이 0~3까지 순회
    for (x = 0; x < 4; x++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
        printf("\u2502  "); // 각열의 시작부분에 세로줄 출력

        if (frame[y][x] == 1) {   //현재 행에 노트가 있다면 x에 따라서 출력
            if (shape == 0) {
                switch (x) { // 현재 열의 인덱스에 따라 어떤 화살표 출력할지 결정
                case 0: // 첫번째 열일 경우
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
                    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
                    break;
                case 1: //두번째 열일 경우
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
                    break;
                case 2: // 3번쨰 열일 경우
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
                    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
                    break;
                case 3: // 4번쨰 열일 경우 
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
                    printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
                    break;
                }
            }
            else { //올바르게 쳤을 경우
                printf("□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□");
            }
        }
        else { // 노트가 없는 경우(0) 화살표 출력하지 않음
            printf("                                  "); // 화살표 출력후 공백 출력해 열 정렬
        }

        if (x < 3) // 노트다음 필수적으로 출력되는
            printf("    "); //마지막 열 전까지 추가로 공백을 출력하여 열 간격 조정

        else
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
            printf("    \u2502");  // 마지막 열에서는 세로줄 출력, frame[y][4]점수 출력
        }
    }
    fflush(stdout);
}
