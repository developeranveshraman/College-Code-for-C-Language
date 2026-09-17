//Q52: Write a program to print the following pattern:
// 
// *
// 
// *
// *
// *
// 
// *
// *
// *
// *
// *
// 
// *
// *
// *
// 
// *

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/

#include <stdio.h>

int main() {
    int counts[] = {1, 3, 5, 3, 1};
    for (int k = 0; k < 5; k++) {
        for (int i = 0; i < counts[k]; i++) {
            printf("*\n");
        }
        if (k < 4) printf("\n");
    }
    
    return 0;
}
