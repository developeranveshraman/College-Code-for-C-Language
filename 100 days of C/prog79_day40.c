//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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
    
    int first = 1;
    for (int d = 0; d < rows + cols - 1; d++) {
        if (d % 2 == 0) {
            int r = (d < rows) ? d : rows - 1;
            int c = d - r;
            while (r >= 0 && c < cols) {
                if (!first) printf(" ");
                printf("%d", matrix[r][c]);
                first = 0;
                r--;
                c++;
            }
        } else {
            int c = (d < cols) ? d : cols - 1;
            int r = d - c;
            while (r < rows && c >= 0) {
                if (!first) printf(" ");
                printf("%d", matrix[r][c]);
                first = 0;
                r++;
                c--;
            }
        }
    }
    printf("\n");
    
    return 0;
}
