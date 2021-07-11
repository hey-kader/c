#include <stdio.h>
#include <stdlib.h>

#include "wav.h"

int main (int argc, char * argv[]) {

    read_wav();
    return 0;

}

void load_chunk_id (int chunk_id[LARGE], int chunk_size, FILE *fp) {

    int c;
    for (int i = 0; i < LARGE; i++) {
        chunk_id[i] = fgetc(fp); 
    }
}

void print_chunk_id (int chunk_id[LARGE]) {

    printf("\n");
    for (int i = 0; i < LARGE; i++) {
        printf("%c ", chunk_id[i]);
    }
        printf("\n");
}

void to_big_endian (int byte) {

    char b[8] = {0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < 8; i++) {

        if (byte % 2 == 0) {
            byte /= 2;
        }

        else {
           b[i]  
        }
    }  

}


void load_chunk_size (int chunk_id[LARGE], FILE *fp) {

    // convert it to binary
    // reverse this
    // back to decimal
    int byte; 
    for (int i = 0; i < LARGE; i++) {
        byte = fgetp(fp);
        byte = to_binary(byte);
        
    }
}

void read_wav () {

    FILE * fp = fopen("song.wav", "r");
    int c;
    long count = 0;
    int chunk_id[LARGE];

    int chunk_size[LARGE];
    
    load_chunk_id(chunk_id, fp);
    print_chunk_id(chunk_id);

    load_chunk_size(chunk_id, fp);

    printf("\n");
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
        count++;
    }
    printf("\ncount: %ld\n", count);
    fclose(fp);
}
