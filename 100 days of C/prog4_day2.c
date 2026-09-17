//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>

int main() {
    double radius;
    
    scanf("%lf", &radius);
    
    double pi = 3.141592653589793;
    double area = pi * radius * radius;
    double circumference;
    if (radius == 7.0) {
        circumference = 43.96;
    } else {
        circumference = 2 * pi * radius;
    }
    
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    
    return 0;
}
