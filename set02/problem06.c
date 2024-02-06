//06. Write a program to reverse a string.
#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main() {
    char original_string[100];
    char reversed_string[100];

    input_string(original_string);
    str_reverse(original_string, reversed_string);
    output(original_string, reversed_string);

    return 0;
}

void input_string(char *a) {
    printf("Enter a string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < length; i++, j--) {
        rev_str[i] = str[j];
    }
    rev_str[i] = '\0';
}

void output(char *a, char *reverse_a) {
    printf("Original string: %s\n", a);
    printf("Reversed string: %s\n", reverse_a);
}
