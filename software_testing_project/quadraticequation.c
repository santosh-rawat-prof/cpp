#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;

    printf("\nEnter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrtf(discriminant)) / (2 * a);
        root2 = (-b - sqrtf(discriminant)) / (2 * a);
        printf("\nTwo distinct real roots exist: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("\nOne real root exists: %.2f\n", root1);
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrtf(-discriminant) / (2 * a);
        printf("\nTwo complex roots exist: %.2f + %.2fi and %.2f - %.2fi\n",
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
