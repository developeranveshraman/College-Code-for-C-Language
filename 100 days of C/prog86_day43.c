//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    
    if (scanf("%s", str) == 1) {
        int length = strlen(str);
        int is_palindrome = 1;
        
        for (int i = 0; i < length / 2; i++) {
            if (str[i] != str[length - 1 - i]) {
                is_palindrome = 0;
                break;
            }
        }
        
        if (is_palindrome) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }
    
    return 0;
}
