#include <stdio.h>
#define PI 3.14159

double areaOfCircle(double r) {
    return PI * r * r;
}

int main() {
    double radius;
    printf("Enter radius of the circle: ");
    scanf("%lf", &radius);
    printf("Area of the circle = %.2lf\n", areaOfCircle(radius));
    return 0;
}
