// 2. Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder, given its radius and height


//area of a circle = pi*r*r
//vol of a cylinder = pi*r*r*h

#include <stdio.h>

int main(){
    //taking height and radius as inputs from user.
    int height, radius, volume, area;
    printf("Enter Height\n");
    scanf("%d", &height);
    printf("Enter Radius\n");
    scanf("%d", &radius);
    
    area = 3.14*radius*radius;
    volume = area*height;
    printf("Given Height = %d \n", height);
    printf("Given Radius = %d \n", radius);
    printf("Area of circle with given radius and height = %d \n", area);
    printf("Volume of cylinder with given radius and height = %d \n", volume);
    return 0;
}