# The ```.kader.wav``` audio spec in C

### A ```kader``` is a .wav encoded audio file
### A ```kader``` is stored in a struct

## The file consists of two parts 

#### the ```kader``` consists of one ```kader.metadata``` struct 
#### and one ```kader.frames``` pointer 

# ```kader.metadata```

## type: ```struct```

## fields: 

#### ```kader.metadata.chunk_id```
#### ```kader.metadata.chunk_size```
#### ```kader.metadata.format```
#### ```kader.metadata.sub_chunk_a_id```
#### ```kader.metadata.sub_chunk_a_size```
#### ```kader.metadata.audio_format```
#### ```kader.metadata.num_channels```
#### ```kader.metadata.sample_rate```
#### ```kader.metadata.byte_rate```
#### ```kader.metadata.block_align```
#### ```kader.metadata.sub_chunk_b_id```
#### ```kader.metadata.sub_chunk_b_size```
#### ```kader.metadata.bits_per_sample```
#### ```kader.metadata.data_label```
#### ```kader.metadata.data_block_length```


## The kader.metadata struct cant be thought of as a JSON for pedagogical reasons 
## (before JSON's were cool)

![alt text](https://github.com/pablopenrose/c/blob/master/kader.wav/stack.gif?raw=true")
