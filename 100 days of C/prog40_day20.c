//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/

#include <stdio.h>
#include <string.h>

int main() {
    char binary_str[128];
    
    scanf("%s", binary_str);
    
    for (int i = 0; binary_str[i] != '\0'; i++) {
        if (binary_str[i] == '0') {
            putchar('1');
        } else if (binary_str[i] == '1') {
            putchar('0');
        } else {
            putchar(binary_str[i]);
        }
    }
    putchar('\n');
    
    return 0;
}
