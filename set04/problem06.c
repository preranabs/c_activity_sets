// 6. Write a program to count the number of words in a string using strtok (_string.h_)
#include <stdio.h>
#include <string.h>

void input_string(char *a) {
    printf("Enter a string: ");
    fgets(a, 100, stdin);
    if (a[strlen(a) - 1] == '\n') {
        a[strlen(a) - 1] = '\0';
    }
}

int count_words(char *string) {
    int count = 0;
    char *token = strtok(string, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}

void output(char *string, int no_words) {
    printf("The string \"%s\" has %d words.\n", string, no_words);
}

int main() {
    char string[100];
    input_string(string);
    int no_words = count_words(string);
    output(string, no_words);
    return 0;
}
