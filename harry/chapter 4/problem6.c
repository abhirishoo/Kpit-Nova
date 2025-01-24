// 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
#include<stdio.h>
int main(){
    //for loop
    int ans= 0;
    for(int i=1 ; i<=10 ;i++){
        ans = ans+i;
    }
    printf("%d", ans);
    return 0;
}

int main(){
    //do while loop
    int i=1 ,ans=0;
    do {
        ans = ans +i;
        i++;
    }while(i<=10);
    printf("%d", ans);
    
    return 0;
}