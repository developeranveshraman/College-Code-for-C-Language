//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char role_str[50];
    
    if (scanf("%49s", role_str) == 1) {
        if (strcmp(role_str, "ADMIN") == 0) {
            printf("Welcome Admin!\n");
        } else if (strcmp(role_str, "USER") == 0) {
            printf("Welcome User!\n");
        } else if (strcmp(role_str, "GUEST") == 0) {
            printf("Welcome Guest!\n");
        }
    }
    
    return 0;
}
