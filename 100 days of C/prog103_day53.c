//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

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
        
        int total_sum = 0;
        for (int i = 0; i < n; i++) total_sum += nums[i];
        
        int left_sum = 0, pivot_index = -1;
        for (int i = 0; i < n; i++) {
            if (left_sum == total_sum - left_sum - nums[i]) {
                pivot_index = i;
                break;
            }
            left_sum += nums[i];
        }
        
        printf("%d\n", pivot_index);
    }
    
    return 0;
}
