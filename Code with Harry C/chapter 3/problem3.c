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
    float tax = 0;
    printf("Enter income in lacs: ");
    scanf("%f", &income);

    if (income <= 2.5) {
        printf("Tax given to govt. will be: 0\n");
    }
    else if (income > 2.5 && income <= 5.0) {
        tax = (income - 2.5) * 0.05 * 100000;
        printf("Tax given to govt. will be: %.2f\n", tax);
    }
    else if (income > 5.0 && income <= 10.0) {
        tax = ((income - 5.0) * 0.20 + 2.5 * 0.05) * 100000;
        printf("Tax given to govt. will be: %.2f\n", tax);
    }
    else if (income > 10.0) {
        tax = ((income - 10.0) * 0.30 + 2.5 * 0.05 + 5.0 * 0.20) * 100000;
        printf("Tax given to govt. will be: %.2f\n", tax);
    }

    return 0;
}
