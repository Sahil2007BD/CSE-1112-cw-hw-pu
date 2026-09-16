#include <stdio.h>

int main() {
  
   float r,Area;
    float pi;
    printf("Enter the value of r:\n");
    scanf("%f",&r);
    printf("Enter the value of pi:\n");
    scanf("%f",&pi);
    Area=0.5*pi*r*r;
    printf("The area of the semicircle is: %.3f",Area);
}