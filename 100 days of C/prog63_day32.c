//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include <stdio.h>

int main() {
    int n1, n2;
    int merged[200];
    int count = 0;
    
    if (scanf("%d", &n1) == 1) {
        for (int i = 0; i < n1; i++) {
            scanf("%d", &merged[count++]);
        }
    }
    
    if (scanf("%d", &n2) == 1) {
        for (int i = 0; i < n2; i++) {
            scanf("%d", &merged[count++]);
        }
    }
    
    for (int i = 0; i < count; i++) {
        printf("%d%s", merged[i], (i == count - 1) ? "" : " ");
    }
    printf("\n");
    
    return 0;
}
