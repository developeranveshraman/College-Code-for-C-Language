//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

void reverse_word(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[500];
    
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        int len = strlen(sentence);
        while (len > 0 && (sentence[len - 1] == '\n' || sentence[len - 1] == '\r')) {
            sentence[--len] = '\0';
        }
        
        int word_start = 0;
        for (int i = 0; i <= len; i++) {
            if (sentence[i] == ' ' || sentence[i] == '\0') {
                if (i > word_start) {
                    reverse_word(&sentence[word_start], &sentence[i - 1]);
                }
                word_start = i + 1;
            }
        }
        
        printf("%s\n", sentence);
    }
    
    return 0;
}
