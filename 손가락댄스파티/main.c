#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <mmsystem.h>

#pragma comment (lib, "winmm.lib") // PlaySound함수 이용하기 위해서

#include "Gotoxy.h"

#define MAX_WAIT_MSEC 1000 // 최대 대기 시간
#define MAX_DISPLAY_LINES 60 // 최대 행 수
#define MAX_LINES (MAX_DISPLAY_LINES-5) // MAX_LINES : 실제 게임에서 사용되는 행 수 , MAX_DISPLAY_LINES-5 : 최대행에서 5칸을 뺀 부분 (= 화살표가 그려진 부분 제외)

int frame[MAX_LINES][6]; // 게임의 노트 위치와 점수 저장하는 2차원 배열

// void cls(HANDLE hConsole);
void print_frame(HANDLE handle); // 게임의 기본 틀 출력
void move_location(); // 노트가 이동하는 함수, 행을 한 칸 씩 감소
void input_first_value(HANDLE handle); // 노트의 초기위치와 점수를 랜덤 생성
void display_frame(HANDLE handle); // 현재 노트를 화면에 출력
int get_point(HANDLE handle, int max_sec); // 키보드 입력을 받아 점수 계산
void display_total_point(HANDLE handle, int total_porint); // 총 점수 화면에 출력
void display_line(HANDLE handle, int y, int shape); // 특정 행의 노트 상태 화면에 출력


int main() {
    int total_point = 0;
    int max_msec = MAX_WAIT_MSEC; // max milli_sec
    HANDLE handle;
    COORD pos;

    handle = GetStdHandle(STD_OUTPUT_HANDLE);

    CursorView(0);
    //cls(handle);
    PlaySound(TEXT("finger_party.wav"), NULL, SND_ASYNC | SND_LOOP);

    print_frame(handle); //frame 출력
    
    display_total_point(handle, 0); // 점수표시
    
    srand(time(NULL));

    /*
    노트는 유니코드를 이용하여 만듬
    <전체흐름>
    "노트를 이동 - > 첫번째 값을 입력 - > 전체화면(틀과 노트) 출력 -> 키보드 입력 및 point계산" 하는 순서
    기본 틀은 5칸, 이것을 2차원 배열로 생각하면 frame[row][col].(row : 28칸, col : 5칸)
    */
    while (1)
    {
        int point = 0;

        move_location(); // 위치 이동

        input_first_value(handle); // 입력

        display_frame(handle); // 출력

        point = get_point(handle, max_msec); // 키보드 입력해서 점수 얻기

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

    // 틀의 시작 위치 지정
    pos.X = 2;
    pos.Y = 0;
    SetConsoleCursorPosition(handle, pos);

    //틀의 윗부분 출력 (구간 마다 20칸 설정
    printf("\u250D\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501" // 첫번째 열
        "\u252F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501" // 두번째 열, u252F : ㅜ 
        "\u252F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501" // 세번째 열
        "\u252F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2511"); //네번쨰 열

    // 세로줄 출력
    for (i = 0; i < (MAX_DISPLAY_LINES - 5); i++)
    {
        pos.X = 2;
        pos.Y = 1 + i;
        SetConsoleCursorPosition(handle, pos);
        printf("\u2502                                        \u2502                                        \u2502                                        \u2502                                        \u2502");
    }

    // 틀의 아랫부분 출력
    pos.X = 2;
    pos.Y = 1 + (MAX_DISPLAY_LINES - 5);
    SetConsoleCursorPosition(handle, pos);
    printf("\u251D\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501"
               "\u253F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501"
               "\u253F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501"
               "\u253F\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2501\u2525"); 

    // 틀의 중간 세로줄 출력
    for (i = 0; i < 2; i++)
    {
        pos.X = 2;
        pos.Y = 1 + (MAX_DISPLAY_LINES - 5) + 1 + i;
        SetConsoleCursorPosition(handle, pos);
        printf("\u2502          \u2502          \u2502          \u2502           \u2502");
    }

    //틀의 마지막 세로줄 출력
    pos.X = 2;
    pos.Y = 1 + (MAX_DISPLAY_LINES - 5) + 1 + 2;
    SetConsoleCursorPosition(handle, pos);
    printf("\
\u2515\u2501\u2501\u2501\u2501\u2501\u2501\
\u2537\u2501\u2501\u2501\u2501\u2501\u2501\
\u2537\u2501\u2501\u2501\u2501\u2501\u2501\
\u2537\u2501\u2501\u2501\u2501\u2501\u2501\u2519");
}

// 노트 이동시키는 함수, 각 행의 노트 상태를 한칸씩 위로
void move_location()
{
    // 감소하는 방향
    int x, y;
    for (y = (MAX_LINES - 1); y > 0; y--)
    {
        for (x = 5; x >= 0; x--)
        {
            frame[y][x] = frame[y - 1][x];
        }
    }

    for (x = 5; x >= 0; x--)
        frame[0][x] = 0;
}

//노트의 초기위치와 점수를 랜덤 설정
void input_first_value(HANDLE handle)
{
    // 4칸 중에 하나만 있어야 된다.
    int rnd_space, rnd_point;

    rnd_space = rand() % 4; // rnd_space : 0~3
    frame[0][rnd_space] = 1; // exist_box = 1, no_exist_box = 0

    rnd_point = rand() % 9 + 1; // rnd = 1~10, rnd는 점수.
    frame[0][4] = rnd_point; // 점수

    frame[0][5] = 0; // shape값 초기화

    int i;
    COORD pos;

    pos.X = 80;
    pos.Y = MAX_DISPLAY_LINES - 1;
    SetConsoleCursorPosition(handle, pos);
    for (i = 0; i < 40; i++) printf(" ");

    pos.X = 80;
    pos.Y = MAX_DISPLAY_LINES - 1;
    SetConsoleCursorPosition(handle, pos);
    for (i = 0; i < 5; i++)
        printf("%d", frame[0][i]);
    printf("/// %d", rnd_space);
}

// 현재 노트 상태를 화면에 출력
void display_frame(HANDLE handle)
{
    // 현재 위치를 기준으로, 역시 감소하는 방향으로
    int y;

    for (y = (MAX_LINES - 1); y >= 0; y--)
    {
        if (frame[y][4] == 0) continue;

        display_line(handle, y, frame[y][5]);
    }
}
           
char get_key()
{
    if (_kbhit()) //키를 눌렀으면 0이 아닌 값을 반환
        return _getch();

    return '\0';
}

// 키보드 입력받아 점수 계산
int get_point(HANDLE handle, int max_msec)
{
    // 키를 입력받고 point 표시 + 출력
    int point = 0;
    int wait_msec = 0;
    char key = 0;

    while (wait_msec <= max_msec)
    {
        int curr_wait_msec;

        key = get_key(); // 키 입력

        if (key == 'h')
        {
            if (frame[23][0] == 1)
            {
                point += frame[23][4];
                frame[23][5] = 1;
                break;
            }
        }
        else if (key == 'j')
        {
            if (frame[23][1] == 1)
            {
                point += frame[23][4];
                frame[23][5] = 1;
                break;
            }
        }
        else if (key == 'k')
        {
            if (frame[23][2] == 1)
            {
                point += frame[23][4];
                frame[23][5] = 1;
                break;
            }
        }
        else if (key == 'l')
        {
            if (frame[23][3] == 1)
            {
                point += frame[23][4];
                frame[23][5] = 1;
                break;
            }
        }

        curr_wait_msec = max_msec / 1000;

        Sleep(curr_wait_msec);
        wait_msec += curr_wait_msec;
    }

    if (frame[23][5] == 1)
        display_line(handle, 23, frame[23][5]);

    if (wait_msec < max_msec)
    {
        int temp;

        temp = max_msec - wait_msec;
        Sleep(temp);
    }

    return point;
}


void display_total_point(HANDLE handle, int total_point)
{
    COORD pos;

    pos.X = 70;
    pos.Y = 24;
    SetConsoleCursorPosition(handle, pos);
    printf("point : %d", total_point);
}
    
void display_line(HANDLE handle, int y, int shape)
{
    int x;
    COORD pos;

    pos.X = 2;
    if (y > (MAX_LINES - 1 - 2)) 
        pos.Y = y + 1 + 1;
    else 
        pos.Y = y + 1;
    SetConsoleCursorPosition(handle, pos);

    for (x = 0; x < 4; x++)
    {
        printf("\u2502     ");

        if (frame[y][x] == 1)		//box가 존재한다면, 1번재
        {
            switch (x) {
            case 0:
                printf("\u2190"); // 왼쪽 화살표
                break;
            case 1:
                printf("\u2193"); // 아래쪽 화살표
                break;
            case 2:
                printf("\u2191"); // 위쪽 화살표
                break;
            case 3:
                printf("\u2192"); // 오른쪽 화살표
                break;
            }
        }
        printf("                    ");


        if (x < 3)
            printf("                    ");
        else
        {
            printf("  \u2502 %d  ..\n", frame[y][4]);
        }
    }
    fflush(stdout);
}
