//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[500];
    
    if (fgets(name, sizeof(name), stdin) != NULL) {
        char *token = strtok(name, " \t\r\n");
        while (token != NULL) {
            printf("%c.", toupper((unsigned char)token[0]));
            token = strtok(NULL, " \t\r\n");
        }
        printf("\n");
    }
    
    return 0;
}
