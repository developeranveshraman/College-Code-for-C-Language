//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_ints(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    char line[1000];
    
    if (fgets(line, sizeof(line), stdin)) {
        int arr[200], n = 0, k = 1;
        char *bracket = strchr(line, '[');
        if (bracket) {
            bracket++;
            while (*bracket && *bracket != ']') {
                while (*bracket == ' ' || *bracket == ',') bracket++;
                if (*bracket == ']') break;
                arr[n++] = strtol(bracket, &bracket, 10);
            }
            char *k_ptr = strrchr(line, '=');
            if (k_ptr) k = atoi(k_ptr + 1);
        } else {
            if (sscanf(line, "%d", &n) == 1) {
                for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
                scanf("%d", &k);
            }
        }
        
        qsort(arr, n, sizeof(int), compare_ints);
        
        if (k >= 1 && k <= n) {
            printf("%d\n", arr[k - 1]);
        }
    }
    
    return 0;
}
