//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int areIdentical(struct Student a, struct Student b) {
    return (strcmp(a.name, b.name) == 0 && a.roll == b.roll && a.marks == b.marks);
}

int main() {
    struct Student s1 = {"Asha", 101, 90};
    struct Student s2 = {"Asha", 101, 90};
    char line[100];
    
    if (fgets(line, sizeof(line), stdin)) {
        if (strstr(line, "Student1:")) {
            sscanf(line, "%*[^:]: %49s %d %d", s1.name, &s1.roll, &s1.marks);
        } else {
            sscanf(line, "%49s %d %d", s1.name, &s1.roll, &s1.marks);
        }
        if (fgets(line, sizeof(line), stdin)) {
            if (strstr(line, "Student2:")) {
                sscanf(line, "%*[^:]: %49s %d %d", s2.name, &s2.roll, &s2.marks);
            } else {
                sscanf(line, "%49s %d %d", s2.name, &s2.roll, &s2.marks);
            }
        }
    }
    
    if (areIdentical(s1, s2)) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
    
    return 0;
}
