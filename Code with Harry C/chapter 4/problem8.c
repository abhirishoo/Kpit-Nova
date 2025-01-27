// 8. Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>
int main(){
    int n;
    int ans = 1;
    printf("Enter value : ");
    scanf("%d", &n);
    for(int i=n ; i>=1 ; i--){
        ans = ans*i;
    }
    printf("%d",ans);
}