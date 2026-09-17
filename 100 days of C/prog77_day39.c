//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include <stdio.h>

int main() {
    int rows, cols;
    
    scanf("%d %d", &rows, &cols);
    
    int matrix[50][50];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int distinct = 1;
    int min_dim = (rows < cols) ? rows : cols;
    for (int i = 0; i < min_dim; i++) {
        for (int j = i + 1; j < min_dim; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }
    
    if (distinct) printf("True\n");
    else printf("False\n");
    
    return 0;
}
