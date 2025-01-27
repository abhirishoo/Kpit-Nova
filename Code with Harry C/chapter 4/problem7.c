// Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).

#include <stdio.h>
int main(){
    int num = 8, sum = 0, ans;  
    for(int i=1 ; i<=10 ; i++){
        ans = num*i;
        sum = sum + ans;
    }
    printf("%d", sum);
    
    return 0;
}