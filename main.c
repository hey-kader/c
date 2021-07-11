#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "wav.h"

int main (int argc, char * argv[]) {

    read_wav();
    return 0;

}

void load_chunk_id (int chunk_id[LARGE], FILE *fp) {

    for (int i = 0; i < LARGE; i++) {
        chunk_id[i] = fgetc(fp); 
    }
}

void print_chunk_id (int chunk_id[LARGE]) {

    printf("\n");
    for (int i = 0; i < LARGE; i++) {
        printf("%d ", chunk_id[i]);
    }
    printf("\n");
}

void load_chunk_size (int chunk_size[LARGE],  FILE *fp) {

    for (int i = 0; i < LARGE; i++) {
        chunk_size[i] =  fgetc(fp);
    }  
}

void print_chunk_size (int chunk_size[LARGE]) { 

   printf("\n");
   // reverse endianness
   for (int i = 0; i < 4; i++) {
        printf("%d ", chunk_size[i]);
   } 
   printf("\n");

}

void make_word (int chunk_size[LARGE]) {

    for (int i = 0; i < LARGE; i++) {
        print_byte(&chunk_size[i]);
    }
    
}

void char_to_byte (char c, int byte[8]) {

    int i = 0;
    while (c > 0) {

        if (c % 2 == 0) {
            byte[i] = 1;
        }
        else {
            byte[i] = 0;
        }

        i++;
        c /= 2;
    }

}

void print_byte (int byte[8]) {

    printf("\n");
    for (int i = 0; i < 8; i++) {
        printf("%d",byte[i]);
    }
    printf("\n");

}


void read_wav () {

    FILE * fp = fopen("song.wav", "r");
    int c;
    long count = 0;

    int chunk_id[LARGE];
    int chunk_size[LARGE];
    
    load_chunk_id(chunk_id, fp);
    print_chunk_id(chunk_id);

    load_chunk_size(chunk_size, fp);
    print_chunk_size(chunk_size);

    printf("\n");
    while ((c = fgetc(fp)) != EOF) {
//        printf("%c", c);
        count++;
    }
    printf("\ncount: %ld\n", count);
    fclose(fp);
}
