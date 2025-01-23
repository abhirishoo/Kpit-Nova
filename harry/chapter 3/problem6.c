// 6. Write a program to find greatest of four numbers entered by the user.
#include <stdio.h>
void main(){
    int num1,num2,num3,num4;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d", &num2);
    printf("Enter num3 : ");
    scanf("%d", &num3);
    printf("Enter num4 : ");
    scanf("%d", &num4);

    if(num1> num2 && num1>num3 && num1>>num4){
        printf("num1 is greatest");
    }else if(num2> num1 && num2>num3 && num2>>num4){
        printf("num2 is greatest");
    }else if(num3> num1 && num3>num2 && num3>>num4){
        printf("num3 is greatest");
    }else{
        printf("num4 is greatest");
    }
}
