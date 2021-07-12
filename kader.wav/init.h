#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

void load_chunk_id (FILE *, char []); 
void load_format (FILE *fp, char *); 

void load_chunk_size (FILE *, char *);
void load_sub_chunk_a_id (FILE *, char *);
void load_sub_chunk_a_size (FILE *, char *);
void load_audio_format (FILE *, char *);
void load_num_channels (FILE *, char *);
void load_sample_rate (FILE *, char *);
void load_byte_rate (FILE *, char *);
void load_block_align (FILE *, char *);
void load_bits_per_sample (FILE *, char *);
void load_data_label (FILE *, char *);

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

void load_sample_rate (FILE * fp, char * sample_rate) {
    int i;
    for (i = 0; i < 4; i++) {
        sample_rate[i] = fgetc(fp);
    }
    sample_rate[i] = '\0';

}

void load_byte_rate (FILE * fp, char * byte_rate) {
    int i;
    for (i = 0; i < 4; i++) {
        byte_rate[i] = fgetc(fp); 
    }
    byte_rate[i] = '\0';

}

void load_block_align (FILE * fp, char * block_align) {
    int i;
    for (i = 0; i < 2; i++) {
        block_align[i] = fgetc(fp);
    }
    block_align[i] = '\0';

}

void load_bits_per_sample (FILE * fp, char * bits_per_sample) {
    int i;
    for (i = 0; i < 2; i++) {
        bits_per_sample[i] = fgetc(fp);
    }
    bits_per_sample[i] = '\0';
}

void load_data_label (FILE * fp, char * data_label) {
    int i;
    for (i = 0; i < 4; i++) {
       data_label[i] = fgetc(fp); 
    }
    data_label[i] = '\0';

}




