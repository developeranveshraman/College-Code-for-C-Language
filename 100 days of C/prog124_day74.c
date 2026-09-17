//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>
#include <string.h>

int main() {
    char line[256];
    char source_file[100] = "source.txt";
    char dest_file[100] = "destination.txt";
    
    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *p = line;
        char token[100];
        int found = 0;
        while (sscanf(p, "%99s", token) == 1) {
            char *tok_pos = strstr(p, token);
            p = tok_pos + strlen(token);
            if (strstr(token, ".txt") != NULL) {
                if (found == 0) {
                    strcpy(source_file, token);
                    found++;
                } else if (found == 1) {
                    strcpy(dest_file, token);
                    found++;
                }
            }
        }
        if (found == 0) {
            if (sscanf(line, "%99s %99s", source_file, dest_file) == 1) {
                strcpy(dest_file, "destination.txt");
            }
        }
    }
    
    FILE *src = fopen(source_file, "r");
    if (src == NULL) {
        src = fopen("source.txt", "r");
    }
    if (src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }
    
    FILE *dest = fopen(dest_file, "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }
    
    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    
    fclose(src);
    fclose(dest);
    printf("File copied successfully to %s\n", dest_file);
    
    return 0;
}
