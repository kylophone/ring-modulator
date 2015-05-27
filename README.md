# ring-modulator
Here's a ring modulator implemented in just 22 lines of C.
### Building
```
gcc ring.c -o ./ring
```
### Using
```
./ring <inputfile> <modulation freq>
./ring input.raw 1000
```
### Input File
To keep the code as simple (and easy to follow) as possible, you will need to first convert your input file to a 48kHz/32-bit raw PCM. This is easy to do with SoX like this:
```
sox input.mp3 -c 1 -r 48000 -b 32 -e float -t raw input.raw
```
### Output
This will output a 48kHz/32-bit raw PCM file called out.raw.

###Playing back with SoX
```
play -c 1 -r 48000 -b 32 -e float -t raw out.raw
```
