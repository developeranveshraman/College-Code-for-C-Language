//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parse_array_and_target(char *line, int arr[], int *target) {
    char *bracket = strchr(line, '[');
    if (!bracket) return 0;
    bracket++;
    int n = 0;
    while (*bracket && *bracket != ']') {
        while (*bracket == ' ' || *bracket == ',') bracket++;
        if (*bracket == ']') break;
        arr[n++] = strtol(bracket, &bracket, 10);
    }
    char *tgt_ptr = strstr(line, "target");
    if (tgt_ptr) {
        tgt_ptr = strchr(tgt_ptr, '=');
        if (tgt_ptr) *target = atoi(tgt_ptr + 1);
    } else {
        char *eq = strrchr(line, '=');
        if (eq) *target = atoi(eq + 1);
    }
    return n;
}

int main() {
    char line[1000];
    
    if (fgets(line, sizeof(line), stdin)) {
        int nums[200], target = 0;
        int n = parse_array_and_target(line, nums, &target);
        
        if (n == 0) {
            if (sscanf(line, "%d", &n) == 1) {
                for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
                scanf("%d", &target);
            }
        }
        
        int first_index = -1, last_index = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                if (first_index == -1) first_index = i;
                last_index = i;
            }
        }
        
        printf("%d,%d\n", first_index, last_index);
    }
    
    return 0;
}
