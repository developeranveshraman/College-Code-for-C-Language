//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    
    if (fgets(line, sizeof(line), stdin)) {
        char s[200] = "", t[200] = "";
        char *q1 = strchr(line, '"');
        if (q1) {
            q1++;
            char *eq1 = strchr(q1, '"');
            if (eq1) {
                *eq1 = '\0';
                strcpy(s, q1);
                char *q2 = strchr(eq1 + 1, '"');
                if (q2) {
                    q2++;
                    char *eq2 = strchr(q2, '"');
                    if (eq2) *eq2 = '\0';
                    strcpy(t, q2);
                }
            }
        } else {
            sscanf(line, "%s %s", s, t);
        }
        
        if (strlen(s) != strlen(t)) {
            printf("Not Anagram\n");
            return 0;
        }
        
        int freq[256] = {0};
        for (int i = 0; s[i] != '\0'; i++) {
            freq[(unsigned char)s[i]]++;
            freq[(unsigned char)t[i]]--;
        }
        for (int i = 0; i < 256; i++) {
            if (freq[i] != 0) {
                printf("Not Anagram\n");
                return 0;
            }
        }
        
        printf("Anagram\n");
    }
    
    return 0;
}
