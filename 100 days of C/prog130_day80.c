//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s1 = {"Asha", 101, 85};
    struct Student s2 = {"Ravi", 102, 92};
    
    FILE *fp = fopen("students.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "%s %d %d\n", s1.name, s1.roll, s1.marks);
        fprintf(fp, "%s %d %d\n", s2.name, s2.roll, s2.marks);
        fclose(fp);
    }
    
    fp = fopen("students.txt", "r");
    if (fp != NULL) {
        struct Student s;
        while (fscanf(fp, "%49s %d %d", s.name, &s.roll, &s.marks) == 3) {
            printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
        }
        fclose(fp);
    }
    
    return 0;
}
