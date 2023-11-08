#include <stdio.h>

int main() {

    FILE* file = fopen("Inter1.txt", "r");

    char line[10000];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    char input = getchar(); // 사용자 입력 대기

    fclose(file);

    return 0;

}
