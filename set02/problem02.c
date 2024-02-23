//02.  Write a program to find if a triangle is scalene.
#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
    int side1, side2, side3;
    side1 = input_side();
    side2 = input_side();
    side3 = input_side();
    int isscalene = check_scalene(side1, side2, side3);
    output(side1, side2, side3, isscalene);
    return 0;
}
int input_side() {
    int side;
    printf("Enter the side of the triangle: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && c != a) {
        return 1;
    } else {
        return 0; 
    }
}

void output(int a, int b, int c, int isscalene) {
    if (isscalene) {
        printf("Triangle with sides %d, %d, and %d is a scalene triangle.\n", a, b, c);
    } else {
        printf("Triangle with sides %d, %d, and %d is not a scalene triangle.\n", a, b, c);
    }
}
