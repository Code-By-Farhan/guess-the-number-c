#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int number;
    int guess;
    int attempts = 0;

    srand((unsigned int)time(NULL));
    number = rand() % 100 + 1;

    printf("Welcome to the Guess the Number Game!\n");
    printf("I have chosen a number between 1 and 100.\n\n");

    do {
        printf("Enter your guess (1-100): ");

        if (scanf("%d", &guess) != 1) {
            printf("Invalid input. Please enter a whole number.\n");
            while (getchar() != '\n') {
                /* Clear invalid input. */
            }
            continue;
        }

        if (guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100.\n");
            continue;
        }

        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You found the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
