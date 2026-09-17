//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    k = k % n;
    int rotated[100];
    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d%s", rotated[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");
    
    return 0;
}
