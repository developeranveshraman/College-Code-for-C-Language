//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[500], str2[500];
    
    if (scanf("%s %s", str1, str2) == 2) {
        if (strlen(str1) != strlen(str2)) {
            printf("Not rotation\n");
            return 0;
        }
        
        char combined[1000];
        strcpy(combined, str1);
        strcat(combined, str1);
        
        if (strstr(combined, str2) != NULL) {
            printf("Rotation\n");
        } else {
            printf("Not rotation\n");
        }
    }
    
    return 0;
}
