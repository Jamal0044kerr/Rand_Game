
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   const int low = 1;
   const int hight = 100;
   int guess = 0;
   int guesses = 0;
   int answer = 0;

   
   srand(time(0));
   

   answer = (rand() % hight) + low;

   do{
      printf("Enter a guess: ");
      scanf("%d", &guess);
      if(guess > answer)
      {
         printf("Too high! 🤨\n");
      }
      else if(guess < answer)
      {
         printf("Too low! 🙄\n");
      }
      else{
         printf("CORRECT! 😜\n");
      }
      guesses++;
   }while(guess != answer);

   printf("---------------------\n");
   printf("answer: %d\n", answer);
   printf("guesses: %d\n", guesses);
   printf("---------------------");
 
   return 0;
}
