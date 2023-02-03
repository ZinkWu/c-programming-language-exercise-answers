#include <stdio.h>

#define IN 1
#define OUT 0

void update_counts(int counts[], int word_length) {
    counts[word_length] += 1;
}

// 直方图是啥？？

/*
 |
 |
 |
 |
 |
 |
 ___________________________
 这样吗？
 */

void generate_char_by_horizontal(int counts[], int len){
    int i;
    printf(" len\n");
    printf("   ^");
    for (i = len-1; i >= 0; --i) {
        printf("\n%2d | ", i);
        int j;
        for (j = 0; j <= counts[i]; ++j) {
            if(j == counts[i]){
                printf(" %d", counts[i]);
            }else{
                printf("-");
            }
        }
    }

    printf("\n   ------------------------count------------------------->");
}

// word length
int main() {
    int input, state, i, word_length;

    int len = 20;
    int counts[len];

    state = OUT;
    word_length = 0;

    for (i = 0; i < len; counts[i++] = 0)
        ;

    // 统计单词数量
    while ((input = getchar()) != EOF) {
        if (input == ' ') {
            state = OUT;
            update_counts(counts,word_length);
            word_length = 0;
        } else if (state == OUT) {
            state = IN;
            word_length++;
        } else {
            word_length++;
        }
    }

    generate_char_by_horizontal(counts, len);
}