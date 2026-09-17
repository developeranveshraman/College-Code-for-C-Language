//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char line[256];
    char name[100] = "";
    int age = 0;
    
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *name_ptr = strstr(line, "Name:");
        char *age_ptr = strstr(line, "Age:");
        if (name_ptr && age_ptr) {
            name_ptr += 5;
            while (*name_ptr == ' ') name_ptr++;
            int i = 0;
            while (*name_ptr && *name_ptr != ',' && *name_ptr != ' ' && *name_ptr != '\n' && *name_ptr != '\r' && i < 99) {
                name[i++] = *name_ptr++;
            }
            name[i] = '\0';
            age_ptr += 4;
            while (*age_ptr == ' ' || *age_ptr == ':') age_ptr++;
            age = atoi(age_ptr);
        } else {
            if (sscanf(line, "%99s %d", name, &age) < 2) {
                if (scanf("%d", &age) != 1) {}
            }
        }
        
        FILE *fp = fopen("info.txt", "w");
        if (fp != NULL) {
            fprintf(fp, "Name: %s\nAge: %d\n", name, age);
            fclose(fp);
            printf("File created successfully! Data written to info.txt\n");
        } else {
            printf("Error creating file!\n");
        }
    }
    
    return 0;
}
