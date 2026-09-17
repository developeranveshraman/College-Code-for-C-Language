//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[500];
    
    if (fgets(name, sizeof(name), stdin) != NULL) {
        char words[20][100];
        int count = 0;
        
        char *token = strtok(name, " \t\r\n");
        while (token != NULL) {
            strcpy(words[count++], token);
            token = strtok(NULL, " \t\r\n");
        }
        
        if (count > 0) {
            for (int i = 0; i < count - 1; i++) {
                printf("%c.", toupper((unsigned char)words[i][0]));
            }
            if (count > 1) printf(" ");
            printf("%s\n", words[count - 1]);
        }
    }
    
    return 0;
}
