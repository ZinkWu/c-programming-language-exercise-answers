#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int man_length);
void reverse(char s[]);

int main() {
    int len;
    char line[MAXLINE];
    while ((len = get_line(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s", line);
    }
}

int get_line(char line[], int man_length) {
    int c, i;
    for (i = 0; i < man_length - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        line[i] = c;
    }
    if (c == '\n') {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}


void reverse(char s[]){
    int len;

    for(len = 0; s[len] != '\0'; len++)
        ;

    // 确定非 \0 的末尾索引
    if(len > 0 && (s[len - 1] == '\n')){
        len--;
    }

    char temp;
    int i;
    for (i = 0; i < len / 2; i++) {
        int j = len - 1 - i;
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
