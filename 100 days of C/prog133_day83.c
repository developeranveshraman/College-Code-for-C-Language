//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>
#include <string.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    char month_str[50];
    
    if (scanf("%49s", month_str) == 1) {
        if (strcmp(month_str, "FEB") == 0) {
            printf("28 or 29 days\n");
        } else if (strcmp(month_str, "APR") == 0 || strcmp(month_str, "JUN") == 0 || 
                   strcmp(month_str, "SEP") == 0 || strcmp(month_str, "NOV") == 0) {
            printf("30 days\n");
        } else {
            printf("31 days\n");
        }
    }
    
    return 0;
}
