//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[5] = {
        {"Asha", 101, 90},
        {"Ravi", 102, 85},
        {"Sita", 103, 92},
        {"Aman", 104, 78},
        {"Karan", 105, 88}
    };
    
    printf("Roll\tName\tMarks\n");
    printf("-------------------------\n");
    
    for (int i = 0; i < 5; i++) {
        printf("%d\t%s\t%d\n", students[i].roll, students[i].name, students[i].marks);
    }
    
    return 0;
}
