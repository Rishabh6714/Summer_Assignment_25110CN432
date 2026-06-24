// Number guessing game
#include <stdio.h>
int main()
{
    int secret = 44, guess;
    int attempts = 0;
    printf("____NUMBER GUESSING GAME_____ \n");
     do
    {
      printf("\nGuess the number (1-100): ");
      scanf("%d", &guess);
      
      attempts++;
      
      if (guess > secret)
      printf("Too High!\n");
      else if (guess < secret)
      printf("Too Low!\n");
      else
      printf("\n**** C0NGRATULATION **** \n   Correct Guess!\n");
    }
    while (guess != secret);
     printf("\nYou guessed the number in %d attempts.\n", attempts);
    return 0;
}
