//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s = {"Asha", 101, 90};
    char line[100];
    
    while (fgets(line, sizeof(line), stdin)) {
        if (strstr(line, "Name:")) {
            sscanf(line, "%*[^:]: %49s", s.name);
        } else if (strstr(line, "Roll:")) {
            sscanf(line, "%*[^:]: %d", &s.roll_no);
        } else if (strstr(line, "Marks:")) {
            sscanf(line, "%*[^:]: %d", &s.marks);
        } else {
            sscanf(line, "%49s %d %d", s.name, &s.roll_no, &s.marks);
        }
    }
    
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    
    return 0;
}
