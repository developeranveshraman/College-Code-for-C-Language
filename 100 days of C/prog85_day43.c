//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int length = 0;
        while (str[length] != '\0' && str[length] != '\n' && str[length] != '\r') {
            length++;
        }
        str[length] = '\0';
        
        for (int i = 0; i < length / 2; i++) {
            char temp = str[i];
            str[i] = str[length - 1 - i];
            str[length - 1 - i] = temp;
        }
        
        printf("%s\n", str);
    }
    
    return 0;
}
