//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/

#include <stdio.h>

int main() {
    int rows, cols;
    
    scanf("%d %d", &rows, &cols);
    
    int row_sums[50];
    for (int i = 0; i < rows; i++) {
        row_sums[i] = 0;
        for (int j = 0; j < cols; j++) {
            int val;
            scanf("%d", &val);
            row_sums[i] += val;
        }
    }
    
    for (int i = 0; i < rows; i++) {
        printf("%d%s", row_sums[i], (i == rows - 1) ? "" : " ");
    }
    printf("\n");
    
    return 0;
}
