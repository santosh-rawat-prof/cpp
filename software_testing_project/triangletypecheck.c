#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("\nEnter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("\nThe triangle is equilateral.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("\nThe triangle is isosceles.\n");
    } else {
        printf("\nThe triangle is scalene.\n");
    }

    return 0;
}
