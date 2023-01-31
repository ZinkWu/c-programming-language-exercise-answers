#include <stdio.h>

int main(){
    int space, tab, newline, input;
    space = tab = newline = 0;


    while ((input = getchar()) != EOF){
        switch (input) {
            case ' ':
                space++;
                break;
            case '\t':
                tab++;
                break;
            case '\n':
                newline++;
                break;
            default:
                break;
        }
    }

    printf("space: %d, tab: %d, newline: %d", space, tab, newline);
}