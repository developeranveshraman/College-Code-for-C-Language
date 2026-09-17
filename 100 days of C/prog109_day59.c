//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

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
        
        if (k > n || k <= 0) {
            printf("0\n");
            return 0;
        }
        
        long long current_sum = 0;
        for (int i = 0; i < k; i++) current_sum += arr[i];
        long long max_sum = current_sum;
        
        for (int i = k; i < n; i++) {
            current_sum += arr[i] - arr[i - k];
            if (current_sum > max_sum) max_sum = current_sum;
        }
        
        printf("%lld\n", max_sum);
    }
    
    return 0;
}
