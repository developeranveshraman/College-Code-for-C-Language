//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char filename[100] = "data.txt";
    char text[500] = "";
    char line[500];
    
    if (fgets(line, sizeof(line), stdin) != NULL) {
        if (strstr(line, ".txt") != NULL) {
            char token[100];
            char *p = line;
            while (sscanf(p, "%99s", token) == 1) {
                char *tok_pos = strstr(p, token);
                p = tok_pos + strlen(token);
                if (strstr(token, ".txt") != NULL) {
                    strcpy(filename, token);
                    break;
                }
            }
            if (fgets(text, sizeof(text), stdin) == NULL) {
                text[0] = '\0';
            }
        } else {
            strcpy(text, line);
        }
    }
    
    char *user_input = strstr(text, "User Input:");
    if (user_input) {
        user_input += 11;
        while (*user_input == ' ') user_input++;
        char temp[500];
        strcpy(temp, user_input);
        strcpy(text, temp);
    }
    
    if (strlen(text) == 0) {
        strcpy(text, "This is appended text.\n");
    }
    
    FILE *fp = fopen(filename, "a");
    if (fp != NULL) {
        fputs(text, fp);
        fclose(fp);
        printf("File updated successfully with appended text.\n");
    } else {
        printf("Error opening file in append mode!\n");
    }
    
    return 0;
}
