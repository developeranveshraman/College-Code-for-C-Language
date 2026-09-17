//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[3] = {
        {"Ravi", 101, 95},
        {"Sita", 102, 85},
        {"Aman", 103, 88}
    };
    
    int top_index = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }
    
    printf("Topper: %s (Marks: %d)\n", students[top_index].name, students[top_index].marks);
    
    return 0;
}
