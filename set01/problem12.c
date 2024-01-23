#include <stdio.h>

struct _complex { float real; float imaginary;};
typedef struct _complex Complex;
int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main() {
    int n;
    Complex result;
    n = get_n();
    Complex numbers[n];
    input_n_complex(n, numbers);
    result = add_n_complex(n, numbers);
    output(n, numbers, result);
    return 0;
}

int get_n() {
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex() {
    Complex num;
    printf("Real part: ");
    scanf("%f", &num.real);
    printf("Imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}

void input_n_complex(int n, Complex c[n]) {
    printf("Enter %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

Complex add_n_complex(int n, Complex c[n]) {
    Complex sum = {0, 0}; 
    for (int i = 0; i < n; i++) {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result) {
    printf("Sum of %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("(%f + %fi)", c[i].real, c[i].imaginary);
        if (i < n - 1) {
            printf(" + ");
        }
    }
    printf(" = %f + %fi\n", result.real, result.imaginary);
}