//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    scanf("%s", str);
    
    int freq[10] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;
        }
    }
    
    int max_freq = 0;
    int most_frequent_digit = 0;
    for (int d = 0; d < 10; d++) {
        if (freq[d] > max_freq) {
            max_freq = freq[d];
            most_frequent_digit = d;
        }
    }
    
    printf("%d\n", most_frequent_digit);
    
    return 0;
}
