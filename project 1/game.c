#include <stdio.h>
#include <stdlib.h>  // For rand() and srand()
#include <time.h>    // For time()

int main()
{
    // Seed the random number generator using the current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int randomNumber = rand() % 101; // % 101 ensures the range is 0-100

    int guessnum;
    int no_of_guess =0;
    printf("Guess the number between 0 and 100: ");
    scanf("%d", &guessnum); // Read initial guess from the user

    do
    {
        if (guessnum > randomNumber)
        {
            printf("Lower please\n");
        }
        else if (guessnum < randomNumber)
        {
            printf("Higher please\n");
        }

        // Prompt for another guess
        scanf("%d", &guessnum);
        no_of_guess++;
    } while (guessnum != randomNumber);

    // User has guessed correctly
    printf("Congratulations! You guessed the correct number.\n");
    printf("Congratulations! You guessed the correct number in %d.\n" , no_of_guess);

    return 0;
}
