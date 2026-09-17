//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[500];
    
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        char longest_word[500] = "";
        int max_len = 0;
        
        char *token = strtok(sentence, " \t\r\n");
        while (token != NULL) {
            int len = strlen(token);
            if (len > max_len) {
                max_len = len;
                strcpy(longest_word, token);
            }
            token = strtok(NULL, " \t\r\n");
        }
        
        printf("%s\n", longest_word);
    }
    
    return 0;
}
