// 4. Write a program using recursion to calculate nth element of Fibonacci series.

// fibonacci series 1,1,2,3,5,8
// n=1  n=n-1+n-2

#include <stdio.h>
int fib(int n){
    if(n==1 || n==2){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    printf("Enter nth element : ");
    scanf("%d",&n);
    int ans = fib(n);
    printf("%d",ans);

}