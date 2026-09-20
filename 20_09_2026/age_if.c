#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    /*
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
    */

    char *result = (age >= 18) ? "Eligible" : "Not Eligible";
    printf("%s\n", result);





return 0;

}