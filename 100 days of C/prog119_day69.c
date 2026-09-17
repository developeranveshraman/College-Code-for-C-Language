//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

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
        
        int frequency[20001] = {0};
        int repeated = -1;
        for (int i = 0; i < n; i++) {
            int idx = nums[i] + 10000;
            if (idx >= 0 && idx < 20001) {
                if (frequency[idx] > 0) {
                    repeated = nums[i];
                    break;
                }
                frequency[idx]++;
            }
        }
        
        printf("%d\n", repeated);
    }
    
    return 0;
}
