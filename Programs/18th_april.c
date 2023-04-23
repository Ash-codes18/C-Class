#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    fp=fopen("17th_april_a.c", "r");
    if(fp==NULL)
    {
        printf("Cannot open the file.");
    }
    else{
        int sc = 0, nwt = 0, tct = 0;
        int c;
        while ((c = fgetc(fp)) != EOF) {
            if (c == ' ') {
                sc++;
            }
            else if (c == '\n') {
                nwt++;
            }
            else if (c == '\t') {
                tct++;
            }
        }
        printf("Spaces: %d\nNewlines: %d\nTabs: %d\n", sc, nwt, tct);
        fclose(fp);
    }
    return 0;
}
