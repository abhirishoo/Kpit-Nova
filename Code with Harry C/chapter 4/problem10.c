// 10. Write a program to check whether a given number is prime or not using loops.
///given number is prime when its only divisible by 1 and itself ;

#include<stdio.h>
int main(){
    int n = 41;
    int prime=1;

    if(n <= 1){
        prime=0;
    }else{
        for(int i=2 ; i*i<n ; i++){
                printf("%d", i);
            if(n%i == 0){
                prime=0 ;
                break;
            }
        }
    }
    if(prime == 1){
        printf("Prime");
    }else{
        printf("Not prime");
    }
    return 0;
}