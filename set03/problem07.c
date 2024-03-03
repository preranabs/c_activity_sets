#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point() {
    Point p;
    printf("Enter x-coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y-coordinate: ");
    scanf("%f", &p.y);
    return p;
}

Line input_line() {
    Line l;
    printf("Enter coordinates of first point:\n");
    l.p1 = input_point();
    printf("Enter coordinates of second point:\n");
    l.p2 = input_point();
    return l;
}

void find_length(Line *l) {
    l->distance = sqrt(pow(l->p2.x - l->p1.x, 2) + pow(l->p2.y - l->p1.y, 2));
}

void output(Line l) {
    printf("Length of the line: %.2f\n", l.distance);
}

int main() {
    Line line = input_line();
    find_length(&line);
    output(line);
    return 0;
}
