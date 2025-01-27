// 9. Repeat 8 using while loop

#include <stdio.h>
int main(){
    int n=8;
    int ans=1;
    int i = n;
    while(i>=1){
        ans = ans*i;
        i--;
    }
    printf("%d",ans);
    return 0;
}