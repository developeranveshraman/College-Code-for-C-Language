//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char status_str[50];
    
    if (scanf("%49s", status_str) == 1) {
        if (strcmp(status_str, "SUCCESS") == 0) {
            printf("Operation successful\n");
        } else if (strcmp(status_str, "FAILURE") == 0) {
            printf("Operation failed\n");
        } else if (strcmp(status_str, "TIMEOUT") == 0) {
            printf("Operation timed out\n");
        }
    }
    
    return 0;
}
