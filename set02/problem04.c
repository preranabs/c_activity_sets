//04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main() {
    int n = input_array_size();
    int array[n];
    input_array(n, array);

    int sum = sum_composite_numbers(n, array);
    output(sum);

    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[n]) {
    printf("Enter %d numbers for the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

int is_composite(int num) {
    int factors = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            factors++;
        }
    }
    return (factors > 2);
}

int sum_composite_numbers(int n, int a[n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum) {
    printf("Sum of composite numbers in the array: %d\n", sum);
}
