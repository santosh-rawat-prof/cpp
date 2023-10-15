#include <stdio.h>

int main() {
    float side1, side2, side3;
    float angle1, angle2, angle3;

    printf("\nEnter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    printf("\nEnter the measures of the three angles of the triangle: ");
    scanf("%f %f %f", &angle1, &angle2, &angle3);

    // Check triangle inequality
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
        // Check sum of angles
        if (angle1 + angle2 + angle3 == 180) {
            printf("\nTriangle can be formed.\n");
        } else {
            printf("\nTriangle cannot be formed: Invalid angle sum.\n");
        }
    } else {
        printf("\nTriangle cannot be formed: Triangle inequality violated.\n");
    }

    return 0;
}
