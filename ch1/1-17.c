#include <stdio.h>
#define MAXLENGTH 80
#define MAX 1000

int get_line(char line[], int max_length);

int main(){
    int length;
    char line[MAX];

    while ((length = get_line(line, MAX)) > 0){
        if(length > MAXLENGTH){
            printf("%s", line);
        }
    }

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