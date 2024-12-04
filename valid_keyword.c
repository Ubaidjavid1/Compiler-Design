#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char str[]) {
    
    char keywords[][10] = {
        "auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else",
        "enum", "extern", "float", "for", "goto", "if", "inline", "int", "long", "register", "restrict",
        "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned",
        "void", "volatile", "while"
    };

    int num_keywords = 32; 


    for (int i = 0; i < num_keywords; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            return 1;
        }
    }

    return 0; 
}

int main() {
    char str[100];

    
    printf("Enter a string: ");
    scanf("%s", str);

    
    if (isKeyword(str)) {
        printf("\"%s\" is a valid keyword.\n", str);
    } else {
        printf("\"%s\" is not a valid keyword.\n", str);
    }

    return 0;
}

