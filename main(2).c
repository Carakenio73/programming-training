#include<stdio.h>
#include<math.h>

#define sampling_rate 44100
#define duration 1.0

void sineWaveGeneration(float frequency){
    int samples=(int)(sampling_rate*duration);
    for (int i=0;i<samples;i++){
        float t=(float)i/sampling_rate;
        float sample=sin(2*M_PI*frequency*t);
        printf("%f\n",sample);
    }
}

int main(){
    sineWaveGeneration(440);
    return 0;
}