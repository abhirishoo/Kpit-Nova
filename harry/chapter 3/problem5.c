// 5. Write a program to determine whether a character entered by the user is
// lowercase or not.

// asci value of lower cases lie from 97 to 122    

#include <stdio.h>
void main(){
    char c;
    printf("Enter character : ");
    scanf("%c", &c);
    if(c>97 && c<122){
        printf("%c is lower case", c);
    }else{
        printf("%c is not lower case", c);
    }
}