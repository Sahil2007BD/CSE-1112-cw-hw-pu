#include <stdio.h>
#include <string.h>
int main() {
    float kelvin, celsius, output;
    char input[50];
    printf("What will you input kelvin/celsius?\n");
    scanf("%s",&input);
    if(strcmp(input,"Kelvin") == 0 || strcmp(input,"kelvin") == 0){
        printf("What is your input in Kelvin?\n");
        scanf("%f\n",&kelvin);
        output = kelvin - 273;
    } else if(strcmp(input,"Celsius") == 0 || strcmp(input,"celsius") == 0) {
        printf("What is your input in Celsius?\n");
        scanf("%f\n",&celsius);
        output = celsius + 273;
    } else {
        printf("what?");
    }
    printf("Temperature is then: %f",output);
    return 0;
}