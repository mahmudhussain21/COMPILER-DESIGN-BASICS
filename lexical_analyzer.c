#include <stdio.h>
#include <ctype.h>
#include <string.h>

char keywords[10][10] = {
    "int", "float", "if", "else", "while",
    "for", "return", "char", "double", "void"
};

int isKeyword(char word[]) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int main() {
    FILE *fp;
    char ch, buffer[20];
    int i = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Cannot open file\n");
        return 0;
    }

    printf("Lexical Analysis Output:\n\n");

    while ((ch = fgetc(fp)) != EOF) {

        // Operator
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=') {
            printf("Operator: %c\n", ch);
        }

        // Identifier / Keyword
        else if (isalnum(ch)) {
            buffer[i++] = ch;
        }

        else if ((ch == ' ' || ch == '\n') && i != 0) {
            buffer[i] = '\0';
            i = 0;

            if (isKeyword(buffer))
                printf("Keyword: %s\n", buffer);
            else
                printf("Identifier: %s\n", buffer);
        }
    }

    fclose(fp);
    return 0;
}
