// 3.  Write a program to find the weight of the camel given height, length and stomach radius using four functions *(Structures)*
#include <stdio.h>
#include <math.h>

#define PI 3.14159

struct camel {
    float radius;
    float height;
    float length;
    float weight;
};

typedef struct camel Camel;

Camel input() {
    Camel c;
    printf("Enter stomach radius: ");
    scanf("%f", &c.radius);
    printf("Enter height: ");
    scanf("%f", &c.height);
    printf("Enter length: ");
    scanf("%f", &c.length);
    return c;
}

float calculate_weight(Camel c) {
    return PI * pow(c.radius, 3) * sqrt(c.height * c.length);
}

void output(Camel c) {
    printf("Camel details:\n");
    printf("Stomach radius: %.2f\n", c.radius);
    printf("Height: %.2f\n", c.height);
    printf("Length: %.2f\n", c.length);
    printf("Weight: %.2f\n", c.weight);
}

int main() {
    Camel c;

    c = input();
    c.weight = calculate_weight(c);
    output(c);

    return 0;
}
