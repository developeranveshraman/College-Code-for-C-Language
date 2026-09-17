//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/

#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    if (num <= 1) {
        printf("Not perfect number\n");
        return 0;
    }
    
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    
    if (sum == num) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    
    return 0;
}
