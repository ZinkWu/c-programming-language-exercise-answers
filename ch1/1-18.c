#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int man_length);
void trimr(char line[]);

int main() {
    int len;
    char line[MAXLINE];
    while ((len = get_line(line, MAXLINE)) > 0) {
        trimr(line);
        if (line[0] != '\n' && line[0] != '\0') {
            printf("%s", line);
        }
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


// 有点贪心算法的味道
void trimr(char line[]) {
    char c;
    int i;
    int mark = -1;
    for (i = 0; (c = line[i]) != '\n' && c != '\0'; i++) {
        if (c == ' ' || c == '\t') {
            if (mark == -1) {
                mark = i;
            }
        } else {
            mark = -1;
        }
    }

    if (mark != -1 && i > 0) {
        if (line[i] == '\n') {
            line[mark++] = '\n';
        }
        line[mark] = '\0';
    }
}