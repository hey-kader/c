#define SMALL 2 
#define LARGE 4 

void read_wav (void);
void load_chunk_id (int chunk_id[LARGE],  FILE *fp);
void print_chunk_id (int chunk_id[LARGE]);
void load_chunk_size (int chunk_size[LARGE], FILE *fp); 
void print_chunk_size (int chunk_size[LARGE]);
void make_word (int chunk_size[LARGE]);
void char_to_byte (int c, int byte[LARGE*2]);
void print_byte (int byte[LARGE*2], int n);
