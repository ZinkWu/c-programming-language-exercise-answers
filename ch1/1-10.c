#include <stdio.h>

int main(){
    int input;

    while ((input = getchar()) != EOF){
        switch (input) {
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(input);
                break;
        }
    }
}