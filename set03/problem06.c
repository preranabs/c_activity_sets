// 6. Write a program to find the index of a substring of a string
#include <stdio.h>
#include <string.h>
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main() {
    char main_string[100], sub_string[100];
    input_string(main_string, sub_string);
    int index = sub_str_index(main_string, sub_string);
    
    // Display the result
    output(main_string, sub_string, index);

    return 0;
}