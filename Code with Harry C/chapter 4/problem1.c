// 1. Write a program to print multiplication table of a given number n.

#include<stdio.h>
int main(){
    int n;
    printf("Enter number n : ");
    scanf("%d", &n);
    for(int i= 1; i<=10 ; i++){
        int ans =i*n;
        printf(" %d x %d = %d \n" , n,i,ans);
    }
    return 0;
}