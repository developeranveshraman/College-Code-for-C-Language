//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("Not prime\n");
        return 0;
    }
    
    int is_prime = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            is_prime = 0;
            break;
        }
    }
    
    if (is_prime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }
    
    return 0;
}
