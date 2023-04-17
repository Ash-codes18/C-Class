#include <stdio.h>

int main(){
    FILE *userfile;
    userfile = fopen("17th_april.txt", "r+");
    if (userfile == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    char line[100];
    while (fgets(line, 100, userfile) != NULL) {
        printf("%s", line);
    }
    fclose(userfile);
    return 0;
}
