#include <stdio.h>
#include <stdlib.h>

int main (int argc, char * argv[]) {

    FILE * fp = fopen("song.wav", "r");
    char c;
    printf("\n");
    while ((c = fgetc(fp)) != EOF) {
        printf("%c ", c);
    }
    printf("\n");
    fclose(fp);
    
    return 0;

}
