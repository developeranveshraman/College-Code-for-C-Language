//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:

Output 2:
1

*/

#include <stdio.h>

int main() {
    char str[500];
    
    if (fgets(str, sizeof(str), stdin) != NULL) {
        int length = 0;
        while (str[length] != '\0' && str[length] != '\n' && str[length] != '\r') {
            length++;
        }
        printf("%d\n", length);
    }
    
    return 0;
}
