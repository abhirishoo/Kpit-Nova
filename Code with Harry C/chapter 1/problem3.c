// 3. Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).

#include <stdio.h>
int main (){
    //F = C * (9/5) + 32.
    int calsius, fahrenheit;
    printf("Enter Celsius \n");
    scanf("%d", &calsius);

    fahrenheit = calsius * 1.8 + 32;
    printf("Given %d calsius = %d fahrenheit", calsius,fahrenheit);
    return 0; 
}