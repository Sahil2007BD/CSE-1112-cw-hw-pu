#include <stdio.h>
int main() {
    float parallel_side1, parallel_side2, height, area;

    printf("Enter the first parallel side of the trapezium: ");
    scanf("%f", &parallel_side1);

    printf("Enter the second parallel side of the trapezium: ");
    scanf("%f", &parallel_side2);

    printf("Enter the height of the trapezium: ");
    scanf("%f", &height);

    area = 0.5f * (parallel_side1 + parallel_side2) * height;
    printf("The area of the trapezium is: %.2f\n", area);

    return 0;
}