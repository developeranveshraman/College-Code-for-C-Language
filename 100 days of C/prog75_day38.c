//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

int main() {
    int r1, c1;
    
    scanf("%d %d", &r1, &c1);
    int mat1[50][50];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    int r2, c2;
    scanf("%d %d", &r2, &c2);
    int mat2[50][50];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d%s", mat1[i][j] + mat2[i][j], (j == c1 - 1) ? "" : " ");
        }
        printf("\n");
    }
    
    return 0;
}
