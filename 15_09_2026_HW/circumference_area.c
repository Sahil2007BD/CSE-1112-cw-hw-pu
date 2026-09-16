#include <stdio.h>

int main() {
    // Write C code here
   float r,circumference;
    float pi;
    printf("Enter the value of r:\n");
    scanf("%f",&r);
    printf("Enter the value of pi:\n");
    scanf("%f",&pi);
    circumference=2*pi*r;
    printf("The circumference of the circle is: %.3f",circumference);
}