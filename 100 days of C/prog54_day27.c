//Q54: Write a program to print the following pattern:
// 
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>

int main() {
    int n = 4;
    
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++) putchar(' ');
        for (int j = 0; j < 2 * i - 1; j++) putchar('*');
        putchar('\n');
    }
    
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 0; s < n - i; s++) putchar(' ');
        for (int j = 0; j < 2 * i - 1; j++) putchar('*');
        putchar('\n');
    }
    
    return 0;
}
