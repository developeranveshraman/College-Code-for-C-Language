//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    int original = num;
    int reversed_num = 0;
    int temp = num;
    while (temp > 0) {
        reversed_num = reversed_num * 10 + (temp % 10);
        temp /= 10;
    }
    
    if (original == reversed_num) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    
    return 0;
}
