//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>
#include <string.h>

int main() {
    int day, month, year;
    char sep1, sep2;
    
    const char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    
    if (scanf("%d%c%d%c%d", &day, &sep1, &month, &sep2, &year) == 5) {
        if (month >= 1 && month <= 12) {
            printf("%02d-%s-%d\n", day, months[month], year);
        }
    }
    
    return 0;
}
