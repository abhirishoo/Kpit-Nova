// 3. Write a program to change the value of a variable to ten times of its current
// value.

#include <stdio.h>
    
    void changeTenTimes(int* a);
    void changeTenTimes(int* a){
        *a *= 10;
    }

int main() {
    int var = 10;
    printf("%d \n",var);
    changeTenTimes(&var);
    printf("%d \n",var);
    return 0;
}