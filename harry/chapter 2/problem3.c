// 3. Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num );
    if(num%97 != 0 ){
        printf("not divisible");
    }else{
        printf("Divisible");
    }
    return 0 ;
}