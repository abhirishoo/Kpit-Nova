//11. Implement 10 using other types of loops.
#include<stdio.h>
int main(){
    int n = 41;
    int prime=1;

    if(n <= 1){
        prime=0;
    }else{
        int i=2;
        while( i*i<n){
            if(n%i == 0){
                prime=0 ;
                break;
            }
            i++;   
        }
    }
    if(prime == 1){
        printf("Prime");
    }else{
        printf("Not prime");
    }
    return 0;
}