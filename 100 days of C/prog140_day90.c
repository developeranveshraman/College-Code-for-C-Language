//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    char input[100];
    
    if (scanf("%99s", input) == 1) {
        struct Person p;
        if (strstr(input, "FEMALE")) {
            p.gender = FEMALE;
        } else if (strstr(input, "MALE")) {
            p.gender = MALE;
        } else {
            p.gender = OTHER;
        }
        
        if (p.gender == MALE) {
            printf("Male\n");
        } else if (p.gender == FEMALE) {
            printf("Female\n");
        } else {
            printf("Other\n");
        }
    }
    
    return 0;
}
