#include <stdio.h>

int main() {
    char ch;
    int spaces = 0, newlines = 0, tabs = 0;

    
    printf("Enter a paragraph :\n");

    
    while ((ch = getchar()) != EOF) {
        
        if (ch == ' ') {
            spaces++;
        }
        
        else if (ch == '\n') {
            newlines++;
        }

        else if (ch == '\t') {
            tabs++;
        }
    }


    printf("\nCount of spaces: %d\n", spaces);
    printf("Count of newlines: %d\n", newlines);
    printf("Count of tabs: %d\n", tabs);

    return 0;
}

