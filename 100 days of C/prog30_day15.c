//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    int reversed_num = 0;
    int temp = num;
    while (temp != 0) {
        reversed_num = reversed_num * 10 + (temp % 10);
        temp /= 10;
    }
    
    printf("%d\n", reversed_num);
    
    return 0;
}
