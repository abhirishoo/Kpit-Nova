#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  
    int random = (rand() % 100) + 1; 
    int input = -1;  
    int n = 0;
    
    printf("Welcome to the guessing game! Let's see if you can guess the number.\n");
    while (input != random) {
        printf("Enter your guess between 0 to 100: ");
        scanf("%d", &input);
        n++;
        
        if (input > random) {
            printf("Try Lower\n");
        } else if (input < random) {
            printf("Try Higher\n");
        }
    }
    
    printf("Bingo! You guessed it right.\n");
    printf("Number of tries = %d\n", n);
    
    return 0;
}
