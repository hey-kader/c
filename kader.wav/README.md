# The ```.kader.wav``` audio codec specification

### A ```.kader.wav``` is a special .wav audio file
### A ```kader``` is organized as a ```struct```

## Every ```kader``` is a lossless audio file 
## A ```.kader.wav``` consists of two parts 

* ```kader.metadata``` of type ```struct```
* ```kader.frames``` of type ```char *``` 

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
