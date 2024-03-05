// 1.  Write a program to find the distance between two points.
#include <stdio.h>
#include <math.h>

struct _point {
    float x;
    float y;
};

typedef struct _point Point;

Point input() {
    Point p;
    printf("Enter x-coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y-coordinate: ");
    scanf("%f", &p.y);
    return p;
}

void dist(Point a, Point b, float *res) {
    *res = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
}

void output(Point a, Point b, float res) {
    printf("The distance between points (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", a.x, a.y, b.x, b.y, res);
}

int main() {
    Point p1, p2;
    float result;
    
    printf("Enter the first point:\n");
    p1 = input();

    printf("Enter the second point:\n");
    p2 = input();

    dist(p1, p2, &result);
    output(p1, p2, result);

    return 0;
}
