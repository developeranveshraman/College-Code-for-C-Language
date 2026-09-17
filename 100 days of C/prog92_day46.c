//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[500];
    
    if (scanf("%s", str) == 1) {
        int seen[26] = {0};
        char first_repeat = '\0';
        
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                int idx = str[i] - 'a';
                if (seen[idx]) {
                    first_repeat = str[i];
                    break;
                }
                seen[idx] = 1;
            }
        }
        
        if (first_repeat != '\0') {
            printf("%c\n", first_repeat);
        } else {
            printf("None\n");
        }
    }
    
    return 0;
}
