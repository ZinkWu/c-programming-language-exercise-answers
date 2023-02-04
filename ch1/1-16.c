#include <stdio.h>
#define MAXLENGTH 1000

int get_line(char line[], int max_length);

int main(){
    char line[MAXLENGTH];

    while (get_line(line, MAXLENGTH) > 0)
        printf("%s", line);
    return 0;
}

get_line(char line[], int max_length){
    int c, i;

    for(i = 0; i < max_length-1 && (c = getchar()) != EOF && c != '\n'; i++){
        line[i] = c;
    }
    if(c == '\n'){
        line[i] = c;
        i++;
    }
    line[i] = '\0';

    return i;
}