// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
// earth. Consider g = 9.8m/s2

//f=mg;

#include<stdio.h>
int force(int mass){
    return mass*9.8;
}
int main(){
    int mass;
    printf("Enter Mass in kg : ");
    scanf("%d", &mass);
    int ans = force(mass);
    printf("force : %d N",ans);
    return 0;
}