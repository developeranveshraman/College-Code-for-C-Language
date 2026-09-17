//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/

#include <stdio.h>

int main() {
    char str[64];
    
    scanf("%s", str);
    
    int odd_digits[64];
    int count = 0;
    long long product = 1;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            int digit = str[i] - '0';
            if (digit % 2 != 0) {
                odd_digits[count++] = digit;
                product *= digit;
            }
        }
    }
    
    if (count == 0) {
        printf("1 (no odd digits, assume 1)\n");
    } else {
        printf("%lld (", product);
        for (int i = 0; i < count; i++) {
            printf("%d", odd_digits[i]);
            if (i < count - 1) printf("*");
        }
        printf(")\n");
    }
    
    return 0;
}
