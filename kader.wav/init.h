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
void load_data_block_length (FILE *, char *);

void load_frames (FILE *, char *);
void print_frames (FILE *); 


