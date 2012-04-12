#include <stdio.h>
#include <string.h>

#define MAX_LEN  1000
#define WORD_LEN 33
#define WORD_NUM 500

int main(void)
{
    char input[MAX_LEN+1];
    fgets(input, MAX_LEN+1, stdin);

    int input_len = (int) strlen(input);
    
    int i, word_cnt = 0;
    for (i=0; i < input_len; i++) {
        if (input[i] == ' ' || input[i] == '\n') {
            word_cnt++;
            input[i] = '\0';
        }
    }

    int  j = 0;
    char words[WORD_NUM][WORD_LEN+1];
    for (i=0; i < word_cnt; i++) {
        strcpy(words[i], &input[j]);
        while(input[j] != '\0') {
            j++;
        }
        j++;
    }

    int freq[WORD_NUM] = {0};
    for (i=0; i < word_cnt; i++) {
        for (j=0; j < word_cnt; j++) {
            if ( strcmp(words[i], words[j]) == 0 ) {
                freq[i]++;
            }
        }
    }

    int freq_max = 0;
    for (i=0; i < word_cnt; i++) {
        if ( freq[i] > freq[freq_max] ) {
            freq_max = i;
        }
    }

    int length_max = 0;
    for (i=0; i < word_cnt; i++) {
        if ( strlen(words[i]) > strlen(words[length_max]) ) {
            length_max = i;
        }
    }
    
    printf("%s %s\n", words[freq_max], words[length_max]);
    
    return 0;
}
