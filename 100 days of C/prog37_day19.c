//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

#include <stdio.h>

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    long long lcm = ((long long)num1 * num2) / find_gcd(num1, num2);
    printf("%lld\n", lcm);
    
    return 0;
}
