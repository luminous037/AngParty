#include <stdio.h>

int main() {

    FILE* file;
    char file_path[] = "maze.txt";  

   
    file = fopen(file_path, "r");

   
    char line[10000]; 
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }


    fclose(file);

    return 0;
}
