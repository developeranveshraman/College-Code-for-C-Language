//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char op_str[50];
    int num1, num2;
    
    if (scanf("%49s %d %d", op_str, &num1, &num2) == 3) {
        enum Operation op;
        if (strcmp(op_str, "ADD") == 0) op = ADD;
        else if (strcmp(op_str, "SUBTRACT") == 0) op = SUBTRACT;
        else op = MULTIPLY;

        switch (op) {
            case ADD:
                printf("%d\n", num1 + num2);
                break;
            case SUBTRACT:
                printf("%d\n", num1 - num2);
                break;
            case MULTIPLY:
                printf("%d\n", num1 * num2);
                break;
        }
    }
    
    return 0;
}
