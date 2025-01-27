/* 1. Write a C program to calculate area of a rectangle:
        a. Using hard coded inputs.
        b. Using inputs supplied by the user. */
        
#include <stdio.h>

int main(){
    int height ,breath, area;
    printf("Enter Height \n");
    scanf("%d",&height);
    printf("Enter Breath \n");
    scanf("%d",&breath);

    printf("Entered Height = %d \n", height);
    printf("Entered Height = %d  \n", breath);
    area = height*breath;
    printf("Area = %d  \n", area);

}