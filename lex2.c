#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_TOKEN_LEN 100

char curr_token[MAX_TOKEN_LEN];

typedef enum {false, true} bool;

int is_keyword(char* token) {
    char* keywords[] = {"if", "else", "while", "for", "print", "import", "def", "class", "try", "except", "finally"};
    int num_keywords = 11;
    int i;
    for (i = 0; i < num_keywords; i++) {
        if (strcmp(token, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

int get_next_token(FILE* fp) {
    char curr_char;
    int curr_token_pos = 0;
    curr_token[0] = '\0';
    bool in_string = false;
    bool in_comment = false;
    int indent_level = 0;
    while ((curr_char = fgetc(fp)) != EOF) {
        if (curr_char == '\n') {
            indent_level = 0;
            in_comment = false;
            continue;
        }
        if (in_comment) {
            continue;
        }
        if (isspace(curr_char)) {
            continue;
        }
        if (curr_char == '#') {
            in_comment = true;
            continue;
        }
        curr_token[curr_token_pos++] = curr_char;
        if (curr_char == '"' || curr_char == '\'') {
            if (!in_string) {
                in_string = true;
            } else if (curr_char == curr_token[0]) {
                in_string = false;
            }
        }
        if (in_string) {
            continue;
        }
        if (isalpha(curr_char) || curr_char == '_') {
            while (isalnum(curr_char = fgetc(fp)) || curr_char == '_') {
                curr_token[curr_token_pos++] = curr_char;
            }
            curr_token[curr_token_pos] = '\0';
            if (is_keyword(curr_token)) {
                printf("Keyword: %s\n", curr_token);
            } else {
                printf("Identifier: %s\n", curr_token);
            }
            ungetc(curr_char, fp);
            return 1;
        }
        if (isdigit(curr_char)) {
            while (isdigit(curr_char = fgetc(fp))) {
                curr_token[curr_token_pos++] = curr_char;
            }
            curr_token[curr_token_pos] = '\0';
            printf("Number: %s\n", curr_token);
            ungetc(curr_char, fp);
            return 1;
        }
        if (curr_char == '=') {
            int next_char = fgetc(fp);
            if (next_char == '=') {
                printf("Operator: ==\n");
            } else {
                printf("Operator: =\n");
                ungetc(next_char, fp);
            }
            return 1;
        }
        if (curr_char == '<') {
            int next_char = fgetc(fp);
            if (next_char == '=') {
                printf("Operator: <=\n");
            } else {
                printf("Operator: <\n");
                ungetc(next_char, fp);
            }
            return 1;
        }
        if (curr_char == '>') {
            int next_char = fgetc(fp);
            if (next_char == '=') {
                printf("Operator: >=\n");
            } else {
                printf("Operator: >\n");
                ungetc(next_char, fp);
            }
            return 1;
        }
        if (curr_char == '!') {
            int next_char = fgetc(fp);
            if (next_char == '=') {
                printf("Operator: !=\n");
            } else {
                printf("Unknown character: !\n");
                ungetc(next_char, fp);
            }
            return 1;
        }
        if (curr_char == '+') {
            printf("Operator: +\n");
            return 1;
        }
        if (curr_char == '-') {
            printf("Operator: -\n");
            return 1;
        }
        if (curr_char == '*') {
            printf("Operator: *\n");
            return 1;
        }
        if (curr_char == '/') {
            printf("Operator: /\n");
            return 1;
        }
        if (curr_char == ':') {
            printf("Colon\n");
            return 1;
        }
        if (curr_char == '(') {
            printf("Left Parenthesis\n");
            return 1;
        }
        if (curr_char == ')') {
            printf("Right Parenthesis\n");
            return 1;
        }
        if (curr_char == '[') {
            printf("Left Bracket\n");
            return 1;
        }
        if (curr_char == ']') {
            printf("Right Bracket\n");
            return 1;
        }
        if (curr_char == '{') {
            printf("Left Brace\n");
            indent_level++;
            return 1;
        }
        if (curr_char == '}') {
            printf("Right Brace\n");
            indent_level--;
            return 1;
        }
        printf("Unknown character: %c\n", curr_char);
    }
    return 0;
}


int main() {
    FILE* fp = fopen("program.txt", "r");
    while (get_next_token(fp)) { }
    fclose(fp);
    return 0;
}