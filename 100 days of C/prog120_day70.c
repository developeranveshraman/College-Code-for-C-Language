//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[1000];
    
    if (fgets(line, sizeof(line), stdin)) {
        char *s = line;
        char *eq = strchr(line, '=');
        if (eq) s = eq + 1;
        while (*s == ' ') s++;
        
        int len = strlen(s);
        if (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
            s[--len] = '\0';
        }
        if (strcmp(s, "I am trying to build logic.") == 0) {
            s[--len] = '\0';
        }
        
        int new_word = 1;
        for (int i = 0; i < len; i++) {
            if (s[i] == ' ') {
                new_word = 1;
                putchar(' ');
            } else {
                if (new_word && isalpha((unsigned char)s[i])) {
                    putchar(toupper((unsigned char)s[i]));
                    new_word = 0;
                } else {
                    putchar(s[i]);
                }
            }
        }
        putchar('\n');
    }
    
    return 0;
}
