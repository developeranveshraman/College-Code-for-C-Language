//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    int first = 1;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            if (!first) printf(" ");
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    
    return 0;
}
