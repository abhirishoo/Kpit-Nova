// 1. Write a program using function to find average of three numbers.

#include<stdio.h>

int avg(int a,int b,int c){
  return (a+b+c)/3;
}
int main(){
  int a=10 , b=10 , c=10;
  int ans = avg(a,b,c);
  printf("%d", ans);
  return 0;
}