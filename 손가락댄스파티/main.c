int main() {
    setConsoleSize();
    int total_point = 0;
    int max_msec = MAX_WAIT_MSEC; // max milli_sec
    HANDLE handle;
    COORD pos;

    handle = GetStdHandle(STD_OUTPUT_HANDLE);

    //CursorView(0);
    cls(handle);
    PlaySound(TEXT("손가락파티.wav"), NULL, SND_ASYNC | SND_LOOP);

    print_frame(handle); //frame 출력
    display_total_point(handle, 0);
    
    srand(time(NULL));

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
