#include <stdio.h>

int main() {
    float length, width, height, volume;

    printf("Enter the value of length: ");
    scanf("%f", &length);

    printf("Enter the value of width: ");
    scanf("%f", &width);

    printf("Enter the value of height: ");
    scanf("%f", &height);

    volume = length * width * height;
    printf("The volume of the cuboid is: %.3f\n", volume);

    return 0;
}