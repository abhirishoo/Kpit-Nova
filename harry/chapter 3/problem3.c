/* 3. Calculate income tax paid by an employee to the government as per the slabs
      mentioned below:
        Income Slab      Tax
        2.5 – 5.0L       5%
        5.0L - 10.0L     20%
        Above 10.0L      30% 
    Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/

#include<stdio.h>
int main(){
    float income;
    float tax;
    printf("Enter income in lacs : ");
    scanf("%f", &income);
    if(income>2.5 && income<5.0){
        tax =  ((income-2.5)*0.05)*100000;
         printf("Tax given to govt. will be : %f", tax);
    }
    if(income>5.0 && income<10.0){
       tax =  ((income-5)*0.2 + 2.5*0.05)*100000;
        printf("Tax given to govt. will be : %f", tax);
    }
    if(income>10.0){
       tax =  ((income-10)*0.3 + 2.5*0.05 + 5*0.2)*100000;
        printf("Tax given to govt. will be : %f", tax);
    }else{
        printf("0 tax");
    }
    
    

    return 0;
}