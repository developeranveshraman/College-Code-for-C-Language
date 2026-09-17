//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parse_array(char **ptr, int arr[]) {
    char *bracket = strchr(*ptr, '[');
    if (!bracket) return 0;
    bracket++;
    int n = 0;
    while (*bracket && *bracket != ']') {
        while (*bracket == ' ' || *bracket == ',') bracket++;
        if (*bracket == ']') break;
        arr[n++] = strtol(bracket, &bracket, 10);
    }
    if (*bracket == ']') bracket++;
    *ptr = bracket;
    return n;
}

int main() {
    char line[1000];
    
    if (fgets(line, sizeof(line), stdin)) {
        int nums1[200], nums2[200];
        char *p = line;
        int n1 = parse_array(&p, nums1);
        int n2 = parse_array(&p, nums2);
        
        int i = 0, j = 0, first = 1;
        while (i < n1 && j < n2) {
            if (!first) printf(" ");
            if (nums1[i] <= nums2[j]) {
                printf("%d", nums1[i++]);
            } else {
                printf("%d", nums2[j++]);
            }
            first = 0;
        }
        while (i < n1) {
            if (!first) printf(" ");
            printf("%d", nums1[i++]);
            first = 0;
        }
        while (j < n2) {
            if (!first) printf(" ");
            printf("%d", nums2[j++]);
            first = 0;
        }
        printf("\n");
    }
    
    return 0;
}
