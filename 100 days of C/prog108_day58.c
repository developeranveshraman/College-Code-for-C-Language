//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[1000];
    
    if (fgets(line, sizeof(line), stdin)) {
        int nums[200], n = 0;
        char *bracket = strchr(line, '[');
        if (bracket) {
            bracket++;
            while (*bracket && *bracket != ']') {
                while (*bracket == ' ' || *bracket == ',') bracket++;
                if (*bracket == ']') break;
                nums[n++] = strtol(bracket, &bracket, 10);
            }
        } else {
            if (sscanf(line, "%d", &n) == 1) {
                for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
            }
        }
        
        int left[200], right[200], result[200];
        left[0] = 1;
        for (int i = 1; i < n; i++) left[i] = left[i - 1] * nums[i - 1];
        
        right[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) right[i] = right[i + 1] * nums[i + 1];
        
        for (int i = 0; i < n; i++) result[i] = left[i] * right[i];
        
        printf("[");
        for (int i = 0; i < n; i++) {
            printf("%d%s", result[i], (i == n - 1) ? "" : ",");
        }
        printf("]\n");
    }
    
    return 0;
}
