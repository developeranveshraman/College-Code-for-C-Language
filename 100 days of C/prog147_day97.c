//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1 = {"Alice", 101, 75000.0f};
    
    FILE *fp = fopen("employee.bin", "wb");
    if (fp != NULL) {
        fwrite(&e1, sizeof(struct Employee), 1, fp);
        fclose(fp);
    }
    
    fp = fopen("employee.bin", "rb");
    if (fp != NULL) {
        struct Employee e2;
        if (fread(&e2, sizeof(struct Employee), 1, fp) == 1) {
            printf("Employee: %s | ID: %d | Salary: %.2f\n", e2.name, e2.id, e2.salary);
        }
        fclose(fp);
    }
    
    return 0;
}
