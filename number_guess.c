//NUMBER GUESSING GAME
/*
Name: Brian Kipkoech Korir
Registration No: PA106/G/29216/25
Description :Program of number guessing game 
*/
#include <stdio.h>//preprocessor directive;Scanf(),Printf[]

//main function

#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    int secretNumber, guess, attempts = 0;

    // Generate a random number between 1 and 20
    srand(time(0));  // Seed the random number generator
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 20.\n");
    printf("Try to guess it!\n");

    // Loop until the player guesses correctly
    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
            printf("It took you %d attempt(s).\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}