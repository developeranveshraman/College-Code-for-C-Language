//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

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
        for (int j = 0; j < c2; j++) {
            long long product_sum = 0;
            for (int k = 0; k < c1; k++) {
                product_sum += (long long)mat1[i][k] * mat2[k][j];
            }
            printf("%lld%s", product_sum, (j == c2 - 1) ? "" : " ");
        }
        printf("\n");
    }
    
    return 0;
}
