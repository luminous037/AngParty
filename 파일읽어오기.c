FILE* RIGHT = fopen("RightAng.txt", "r");
        int x = 100;  // X 좌표
        int y = 20;
        gotoxy(x, y);
        char buffer[256];
        while (fgets(buffer, sizeof(buffer), RIGHT) != NULL) {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
            printf("%s", buffer);
            y++;  // 다음 줄로 이동
            gotoxy(x, y);
        }
        fclose(UP);
