//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>

enum Colors {
    RED,
    YELLOW,
    GREEN,
    TOTAL_COLORS
};

int main() {
    const char *color_names[] = {"RED", "YELLOW", "GREEN"};
    
    for (int i = 0; i < TOTAL_COLORS; i++) {
        printf("%s=%d\n", color_names[i], i);
    }
    
    return 0;
}
