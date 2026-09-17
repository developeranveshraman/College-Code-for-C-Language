//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/

#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);
    
    int temp = num;
    int digit_count = 0;
    while (temp > 0) {
        digit_count++;
        temp /= 10;
    }
    
    temp = num;
    int sum = 0;
    while (temp > 0) {
        int d = temp % 10;
        int p = 1;
        for (int i = 0; i < digit_count; i++) {
            p *= d;
        }
        sum += p;
        temp /= 10;
    }
    
    if (sum == num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}
