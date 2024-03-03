// 8. Write a program to find the permeter of a polygon
#include <stdio.h>
#include <math.h>

int main() {
    Polygon polygon;
    if (input_polygon(&polygon)) {
        find_perimeter(&polygon);
        output(polygon);
    }
    return 0;
}
typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

Point input_point(char *prompt_msg) {
    Point p;
    printf("%s\n", prompt_msg);
    printf("Enter x-coordinate: ");
    scanf("%f", &p.x);
    printf("Enter y-coordinate: ");
    scanf("%f", &p.y);
    return p;
}

int input_polygon(Polygon *p) {
    p->sides = input_n();
    if (p->sides < 3 || p->sides > 100) {
        printf("Invalid number of sides. Must be between 3 and 100.\n");
        return 0;
    }

    for (int i = 0; i < p->sides; i++) {
        p->p[i] = input_point("Enter coordinates of a vertex:");
    }
    return 1;
}

float find_distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

void find_perimeter(Polygon* p) {
    float perimeter = 0;
    for (int i = 0; i < p->sides; i++) {
        perimeter += find_distance(p->p[i], p->p[(i + 1) % p->sides]);
    }
    p->perimeter = perimeter;
}

void output(Polygon p) {
    printf("Perimeter of the polygon: %.2f\n", p.perimeter);
}
