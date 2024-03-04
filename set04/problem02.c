// 2. Write a program to find the smallest of three fractions
#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

void input(Fraction *f1, Fraction *f2, Fraction *f3) {
    printf("Enter first fraction (numerator denominator): ");
    scanf("%d %d", &f1->num, &f1->den);

    printf("Enter second fraction (numerator denominator): ");
    scanf("%d %d", &f2->num, &f2->den);

    printf("Enter third fraction (numerator denominator): ");
    scanf("%d %d", &f3->num, &f3->den);
}

Fraction smallest(Fraction f1, Fraction f2, Fraction f3) {
    Fraction min = f1;

    if ((f2.num * f1.den) < (f1.num * f2.den))
        min = f2;
    
    if ((f3.num * min.den) < (min.num * f3.den))
        min = f3;
    
    return min;
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction min) {
    printf("The smallest fraction among %d/%d, %d/%d, and %d/%d is %d/%d\n",
           f1.num, f1.den, f2.num, f2.den, f3.num, f3.den, min.num, min.den);
}

int main() {
    Fraction f1, f2, f3, min_fraction;
    
    input(&f1, &f2, &f3);
    min_fraction = smallest(f1, f2, f3);
    output(f1, f2, f3, min_fraction);
    
    return 0;
}
