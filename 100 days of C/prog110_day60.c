//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        
        int first = 1;
        for (int i = 0; i <= n - k; i++) {
            int window_max = arr[i];
            for (int j = i + 1; j < i + k; j++) {
                if (arr[j] > window_max) window_max = arr[j];
            }
            if (!first) printf(" ");
            printf("%d", window_max);
            first = 0;
        }
        printf("\n");
    }
    
    return 0;
}
