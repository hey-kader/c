#define SMALL 2 
#define LARGE 4 

void read_wav (void);
void load_chunk_id (int chunk_id[LARGE], int chunk_size, FILE *fp);
void print_chunk_id (int chunk_id[LARGE]);
void load_chunk_size (int chunk_id[LARGE], FILE *fp);
void to_binary (int s);
void to_big_endian (int byte); 
