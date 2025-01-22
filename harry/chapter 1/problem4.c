// 4. Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

//si = p*r*t

#include <stdio.h>
int main(){
    int p,r,t;
    float si;
    printf(" Principle amount = ");
    scanf("%d", &p);
    printf(" Rate of interest in percentage = ");
    scanf("%d", &r);
    printf(" Time in years = ");
    scanf("%d", &t);
    si = (p*r*t)/100;
    printf("Simple interest = %f", si);
    return 0;
}