// 2.  Write a program to find the weight of a camel, given height, length and stomach radius using four functions.
#include <stdio.h>
#include <math.h>

#define PI 3.14159

void input_camel_details(float *radius, float *height, float *length) {
    printf("Enter stomach radius: ");
    scanf("%f", radius);
    printf("Enter height: ");
    scanf("%f", height);
    printf("Enter length: ");
    scanf("%f", length);
}

float find_weight(float radius, float height, float length) {
    return PI * pow(radius, 3) * sqrt(height * length);
}

void output(float radius, float height, float length, float weight) {
    printf("Camel details:\n");
    printf("Stomach radius: %.2f\n", radius);
    printf("Height: %.2f\n", height);
    printf("Length: %.2f\n", length);
    printf("Weight: %.2f\n", weight);
}

int main() {
    float radius, height, length, weight;

    input_camel_details(&radius, &height, &length);
    weight = find_weight(radius, height, length);
    output(radius, height, length, weight);

    return 0;
}
