#include <stdio.h>

int main(){
    int input;

    while ((input = getchar()) != EOF){
        if(input == ' ' || input == '\n' || input == '\t'){
            putchar('\n');
            continue;
        }else {
            putchar(input);
        }
    }
}