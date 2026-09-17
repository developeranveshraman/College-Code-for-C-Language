//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    
    if (fgets(line, sizeof(line), stdin)) {
        char s[500] = "";
        char *quote = strchr(line, '"');
        if (quote) {
            quote++;
            char *end_quote = strchr(quote, '"');
            if (end_quote) *end_quote = '\0';
            strcpy(s, quote);
        } else {
            sscanf(line, "%s", s);
        }
        
        int max_len = 0;
        int n = strlen(s);
        for (int i = 0; i < n; i++) {
            int visited[256] = {0};
            for (int j = i; j < n; j++) {
                if (visited[(unsigned char)s[j]]) break;
                visited[(unsigned char)s[j]] = 1;
                if (j - i + 1 > max_len) max_len = j - i + 1;
            }
        }
        
        printf("%d\n", max_len);
    }
    
    return 0;
}
