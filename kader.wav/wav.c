#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include "init.h"

// 100MB
#define MAX 100000000

    struct meta {

    char chunk_id[5];
    char chunk_size[5];
    char format[5];
    char sub_chunk_a_id[5];
    char sub_chunk_a_size[5];
    char audio_format[3];
    char num_channels[3]; 
    char sample_rate[5];
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

int main () {

    FILE *fp = fopen ("song.wav", "r"); 
    
    load_chunk_id (fp, kader.metadata.chunk_id);
    load_chunk_size (fp, kader.metadata.chunk_size);

    load_format(fp, kader.metadata.format);
    load_sub_chunk_a_id(fp, kader.metadata.sub_chunk_a_id);
    load_sub_chunk_a_size(fp, kader.metadata.sub_chunk_a_size);
    load_audio_format(fp, kader.metadata.audio_format);
    load_num_channels(fp, kader.metadata.num_channels);
    load_sample_rate(fp, kader.metadata.sample_rate);
    load_byte_rate(fp, kader.metadata.byte_rate);
    load_block_align(fp, kader.metadata.block_align);
    load_bits_per_sample(fp, kader.metadata.bits_per_sample);
    load_data_label(fp, kader.metadata.data_label);
    load_data_block_length(fp, kader.metadata.data_block_length);

    printf("\nchunk id:\t%s\n", kader.metadata.chunk_id);
    printf("chunk size:\t%d\n", *kader.metadata.chunk_size);
    printf("format: \t%s\n", kader.metadata.format);
    printf("sub chunk id: \t%s\n", kader.metadata.sub_chunk_a_id);
    printf("sub chunk size: %d\n", *kader.metadata.sub_chunk_a_size);
    printf("audio format: \t%d \n", *kader.metadata.audio_format);
    printf("channels: \t%d \n", *kader.metadata.num_channels);
    printf("sample rate: \t%d \n", *kader.metadata.sample_rate);
    printf("byte rate: \t%d \n", *kader.metadata.byte_rate);
    printf("block align: \t%d \n", *kader.metadata.block_align);
    printf("bits per sample: %d \n", *kader.metadata.bits_per_sample);
    printf("data label:  \t%s \n", kader.metadata.data_label); 
    printf("data length:  \t%d \n\n", *kader.metadata.data_block_length); 
    printf("#############\n");
    load_frames (fp, kader.frames);
    printf("\ndata block:\t%s", kader.frames); 
    printf("\n#############\n\n");
    print_frames(fp);
    fclose (fp);

    return 0;
    
} 
