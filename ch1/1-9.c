#include <stdio.h>

// 将连续的空格替换为单个空格
int main(){
    int input, pre;

    while ((input = getchar()) != EOF){
        if(input != ' ' || pre != ' '){
            putchar(pre = input);
        }
    }
}