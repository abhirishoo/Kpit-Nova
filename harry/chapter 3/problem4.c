// 4. Write a program to find whether a year entered by the user is a leap year or not.
// Take year as an input from the user.

//leap year divisiable 4 &&   not divisible by 100 || divisible by 400 ;

#include<stdio.h>
int main(){
    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    if((year%4 == 0 && year%100 != 0) || (year%400 == 0) ){
        printf("Leap year");
    }else{
        printf("not a leap year");
    }
 return 0;
}

