#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

// 100MB
#define MAX 100000000

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
void load_data_block_length (FILE *, char *);

void load_frames (FILE *, char *);
void print_frames (FILE *); 
void load (void); 

struct meta {

    char chunk_id[5];
    char chunk_size[5];
    char format[5];
    char sub_chunk_a_id[5];
    char sub_chunk_a_size[5];
    char audio_format[3];
    char num_channels[3]; 
    char  * sample_rate[5];
    char byte_rate[5];
    char block_align[3];
    char sub_chunk_b_id[5];
    char sub_chunk_b_size[5];
    char bits_per_sample[5];
    char data_label[5];
    char data_block_length[9];

};

struct wav {

    struct meta metadata;
    char frames[MAX];

};

struct wav kader;
