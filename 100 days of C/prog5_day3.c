//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>

int main() {
    double celsius;
    
    scanf("%lf", &celsius);
    
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    if (fahrenheit == (int)fahrenheit) {
        printf("Fahrenheit=%d\n", (int)fahrenheit);
    } else {
        printf("Fahrenheit=%.2f\n", fahrenheit);
    }
    
    return 0;
}
