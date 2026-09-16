#include <stdio.h>
int main() {
    int radius, area;

    printf("Enter the lenght of the radius: ");
    scanf("%d", &radius);

    area = 3.14 * (radius * radius);
    printf("The area of the circle is: %d\n", area);

    // cirle area = pi * r^2

    return 0;
}