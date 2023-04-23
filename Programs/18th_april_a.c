#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[] = "17th_april_a.c";
    char mode[] = "w+";
    char buffer[1024];

    
    fp = fopen(filename, mode);
    if (fp == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    
    fputs("Hello, world!\n", fp);
    fputs("This is an example input.\n", fp);

     
    fseek(fp, 0L, SEEK_SET);

    
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    
    if (feof(fp)) {
        printf("\nEnd of file reached.\n");
    } else {
        printf("\nError reading file.\n");
    }

    
    fclose(fp);

    
    if (remove(filename) != 0) {
        printf("Error deleting file.\n");
    } else {
        printf("File deleted successfully.\n");
    }

    return 0;
}
