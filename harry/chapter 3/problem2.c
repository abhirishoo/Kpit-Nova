// 2. Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.

#include <stdio.h>
int main(){
    int sub1, sub2, sub3;
    printf("Enter marks of subject 1 out of 100 : ");
    scanf("%d", &sub1 );
    printf("Enter marks of subject 2 out of 100 : ");
    scanf("%d", &sub2 );
    printf("Enter marks of subject 3 out of 100 : ");
    scanf("%d", &sub3 );
    int total = (sub1+sub2+sub3)/3;
    printf("total = %d \n", total);
    if((sub1 >= 33  && sub2 >= 33 && sub3 >= 33 )&& total >= 40){
        printf("Passed");
    }else{
        printf("Failed");
    }
    return 0;
}