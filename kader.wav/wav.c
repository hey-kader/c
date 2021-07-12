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
    unsigned int sample_rate;
    unsigned int byte_rate;
    unsigned int block_align;
    unsigned int bits_per_sample;

    char sub_chunk_b_id[5];
    char sub_chunk_b_size[5];

};

struct wav {

    struct meta metadata;
    unsigned int frames[MAX];

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

    printf("chunk id: %s\n", kader.metadata.chunk_id);
    printf("chunk size: %s \n", kader.metadata.chunk_size);
    printf("format: %s\n", kader.metadata.format);
    printf("sub chunk (a) id: %s\n", kader.metadata.sub_chunk_a_id);
    printf("sub chunk (a) size: %d\n", *kader.metadata.sub_chunk_a_size);
    printf("audio format: %d\n", *kader.metadata.audio_format);
    printf("channels: %d\n", *kader.metadata.num_channels);

    fclose (fp);

    return 0;
    
}

//kader.metadata.sample_rate = load_sample_rate();
//kader.metadata.byte_rate = load_byte_rate();
//kader.metadata.block_align = load_block_align();
//kader.metadata.bits_per_sample = load_bits_per_sample();

//kader.frames = load_frames();

