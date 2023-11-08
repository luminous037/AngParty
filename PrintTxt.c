#include <stdio.h>

int main() {

    FILE* file = fopen("maze.txt", "r");
   
    char line[10000]; 
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
