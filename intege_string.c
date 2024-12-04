#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isValidIntegerWithSign(char str[]) {
    int len = strlen(str);
    int i = 0;

    
    if (len == 0) {
        return 0;
    }

    
    if (str[0] == '+' || str[0] == '-') {
        i = 1; 
    }

    
    for (; i < len; i++) {
        if (!isdigit(str[i])) {
            return 0; 
        }
    }


    return 1;
}

int main() {
    char str[100];

    
    printf("Enter an integer with optional sign: ");
    scanf("%s", str);

    
    if (isValidIntegerWithSign(str)) {
        printf("\"%s\" is a valid integer with a sign.\n", str);
    } else {
        printf("\"%s\" is not a valid integer with a sign.\n", str);
    }

    return 0;
}

