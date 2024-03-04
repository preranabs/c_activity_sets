// 4. Write a program to evaluate a polynomial at a given point using [Horner's Method]
#include <stdio.h>

int input_degree() {
    int degree;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    return degree;
}

void input_coefficients(int n, float a[n]) {
    printf("Enter the coefficients of the polynomial (from highest to lowest degree):\n");
    for (int i = 0; i <= n; i++) {
        printf("Coefficient of x^%d: ", n - i);
        scanf("%f", &a[i]);
    }
}

float input_x() {
    float x;
    printf("Enter the value of x at which to evaluate the polynomial: ");
    scanf("%f", &x);
    return x;
}

float evaluate_polynomial(int n, float a[n], float x) {
    float result = a[0];
    for (int i = 1; i <= n; i++) {
        result = result * x + a[i];
    }
    return result;
}

void output(int n, float a[n], float x, float result) {
    printf("The polynomial ");
    for (int i = 0; i <= n; i++) {
        if (i == 0) {
            printf("%.2f", a[i]);
        } else {
            printf(" + %.2fx^%d", a[i], n - i);
        }
    }
    printf("\nevaluated at x = %.2f is %.2f\n", x, result);
}

int main() {
    int degree = input_degree();
    float coefficients[degree + 1];
    input_coefficients(degree, coefficients);
    float x = input_x();
    float result = evaluate_polynomial(degree, coefficients, x);
    output(degree, coefficients, x, result);
    return 0;
}
