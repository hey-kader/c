# The ```.kader.wav``` file specification

### A ```.kader.wav``` is a special .wav audio file
### A ```kader``` is organized as a ```struct```

## Every ```kader``` is a lossless audio file 
## A ```.kader.wav``` consists of two parts 

* ```kader.metadata``` of type ```struct```
* ```kader.frames``` of type ```char *``` 

# ```kader.metadata```

## type: ```struct```

## members: 

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


* Things to consider: 
    * The ```kader.metadata``` struct can be treated like a ```JSON``` 
    * Refer to the "canonical wave format" diagram below when considering the endianness of each member 
    * Often times the ```kader.metadata.sub_chunk_a_id``` is a "JUNK" chunk. Thats not a problem! 

# ```kader.frames```

## type: ```char *```

### Danger! Cuidado!
### WE DO NOT KNOW HOW BIG A SAMPLE IS

##### This is why we use a ```char *``` instead of a ```uint32```
##### The size of one sample is purely contingent on the bit depth
##### The bit depth is how many bytes are in one sample 
##### The bit depth is stored in the metadata, in ```kader.metadata.bits_per_sample```

* Things to consider:
    * Most songs have a bit depth of 16
        * One sample is made of 2 bytes
    * When ```kader.metadata.num_channels``` is 2, The file is encoded in interleaved stereo
    * When ```kader.metadata.num_channels``` is `, The file is encoded in mono

![alt text](https://github.com/pablopenrose/c/blob/master/kader.wav/stack.gif?raw=true")
