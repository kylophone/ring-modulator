#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int ac, char* argv[]){
    float buffer[1];
    FILE *in = fopen(argv[1], "rb" );
    FILE *out = fopen("out.raw", "wb");
    int mod_freq = atoi(argv[2]);
    int i = 0;
    
    while(!feof(in)) {
        fread(&buffer, sizeof(float), 1, in);
        float sample = buffer[0] * sin(2 * M_PI * mod_freq * i / 47999);
        i++; if (i == 48000) i = 0;
        fwrite(&sample, sizeof(float), 1, out);
    }
    
    fclose(in);
    fclose(out);
    return 0;
}
