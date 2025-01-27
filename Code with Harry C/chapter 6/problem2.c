// 2. Write a program having a variable ‘i’. Print the address of ‘i’✅. Pass this variable to
// a function and print its address. Are these addresses same? Why?

#include <stdio.h>


int pointer(int* ad){
    printf("%d \n", ad);
    printf("%d", *ad);
    return 0;
}

int main() {
    int i=10;
    int* ad = &i;
    printf("%d \n",ad);
    pointer(ad);
    return 0;
}