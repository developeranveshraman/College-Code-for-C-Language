//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    
    if (fgets(str, sizeof(str), stdin) != NULL) {
        for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
            if (isupper((unsigned char)str[i])) {
                putchar(tolower((unsigned char)str[i]));
            } else if (islower((unsigned char)str[i])) {
                putchar(toupper((unsigned char)str[i]));
            } else {
                putchar(str[i]);
            }
        }
        putchar('\n');
    }
    
    return 0;
}
