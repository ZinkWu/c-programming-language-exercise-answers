#include <stdio.h>

float f_to_t(int f){
    float t = 5.0f * (f-32) / 9;
    printf("fahr: %d, temperature: %.2f", f, t);
    return t;
}


int main(){
    f_to_t(100);
    return 0;
}