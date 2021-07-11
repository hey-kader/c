#include <stdio.h>
#include <stdlib.h>

void read_wav (void);

int main (int argc, char * argv[]) {

    read_wav();
    return 0;

}

void read_wav () {
    FILE * fp = fopen("song.wav", "r");
    int c;
    long count = 0;
    printf("\n");
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
        count++;
    }
    printf("\ncount: %ld\n", count);
    fclose(fp);
}
