// 5. Write a program to sum first ten natural numbers using while loop.

#include <stdio.h>
int main(){
    int i=1 , ans =0;
    while(i<=10){
        ans = ans+i;
        i++;
    }
    printf("%d", ans);
    return 0;
}