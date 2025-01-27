// 2. Write a function to convert Celsius temperature into Fahrenheit.

#include <stdio.h>

int convert_temp(int temp){
    return (temp*1.8)+32;
}
int main(){
    int temp;
    printf("Enter temp in celsius : ");
    scanf("%d", &temp);

    int ans = convert_temp(temp) ;
    printf("temp in fahreneit : %d",ans);
    return 0;
}