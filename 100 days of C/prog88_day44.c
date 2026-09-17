//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include <stdio.h>

int main() {
    char str[500];
    
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            if (str[i] == ' ') {
                putchar('-');
            } else {
                putchar(str[i]);
            }
        }
        putchar('\n');
    }
    
    return 0;
}
