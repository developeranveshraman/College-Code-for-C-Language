//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/

#include <stdio.h>

int factorial(int d) {
    int fact = 1;
    for (int i = 1; i <= d; i++) fact *= i;
    return fact;
}

int main() {
    int num;
    
    scanf("%d", &num);
    
    int temp = num;
    int sum = 0;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    
    if (num > 0 && sum == num) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    
    return 0;
}
