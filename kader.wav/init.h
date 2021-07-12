#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void load_chunk_id (FILE *, char []); 
void load_format (FILE *fp, char *); 

void load_chunk_size (FILE *, char *);
void load_sub_chunk_a_id (FILE *, char *);
void load_sub_chunk_a_size (FILE *, char * );
void load_audio_format (FILE *, char *);
void load_num_channels (FILE * fp, char * );

void load_chunk_id (FILE *fp, char * chunk_id) {
    int i;
    for (i = 0; i < 4; i++) {
        chunk_id[i] = fgetc(fp); 
    }   
    chunk_id[i] = '\0';

}

void load_chunk_size (FILE *fp,  char * chunk_size) {
    int i;
    for (i = 0; i < 4; i++) {
        chunk_size[i] = fgetc(fp); 
    }
    chunk_size[i] = '\0';

}

void load_format (FILE *fp, char * format) {
    int i;
    for (i = 0; i < 4; i++) {
        format[i] = fgetc(fp); 
    }   
    format[i] = '\0';


}

void load_sub_chunk_a_id (FILE *fp, char * sub_chunk_a_id) {
    int i;
    for (i = 0; i < 4; i++) {
        sub_chunk_a_id[i] = fgetc(fp);
    }
    sub_chunk_a_id[i] = '\0';

}

void load_sub_chunk_a_size (FILE *fp, char * sub_chunk_a_size) {
    int i;
    for (i = 0; i < 4; i++) {
        sub_chunk_a_size[i] = fgetc(fp);
    }
    sub_chunk_a_size[i] = '\0';
    
}

void load_audio_format (FILE * fp, char * audio_format) {
    int i;
    for (i = 0; i < 2; i++) {
        audio_format[i] = fgetc(fp);
    }
    audio_format[i] = '\0';

}

void load_num_channels (FILE * fp, char * num_channels) {
    int i;
    for (i = 0; i < 2; i++) {
        num_channels[i] = fgetc(fp);
    }
    num_channels[i] = '\0';


}


