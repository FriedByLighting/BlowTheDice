#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num, sides;
    char ch;
    int total = 0;
    int count = 0;
    

    //https://devdocs.io/c/numeric/random/rand
    srand(time(NULL)); // use current time as seed for random generator
    int random_variable = rand();
    //printf("Random value on [0,%d]: %d\n", RAND_MAX, random_variable);


    printf("Choose the type of dice you want to use and how many dice would you like to use (i.e. 1d6 = 1 dice with 6 sides or 2d12 = 2 dice with 12 sides): \n");
    if (scanf("%d %c %d", &num, &ch, &sides) != 3 || ch != 'd' || num < 1 || sides < 1) 
    
    {
       printf("Invalid input. Please enter in the format 'NdS'.\n");
       return 1; 
    }
    
    printf("Blowing the %d dice with %d sides...\n", num, sides);
    printf("Proccessing your luck...\n");

    for (int i = 0; i < num; i++) {
         int roll = 1+(int)(double)rand() / ((double)RAND_MAX + 1) * sides;
         printf("roll %d ", roll);
         total += roll;

         if (roll == roll - 1) {
             count++;
         }
    }
       printf("Total: %d\n ", total);
       if (count > 0) {
           printf("You got lucky!!\n", count);
       } else if (count == 2) {
           printf("Seeing Doubles!\n", count);
       } else if (count == 6) {
         printf("Do you have the 6th sense?\n", count);
       } else if (count == 13){
         printf("According to statistics you are lucky, ask your grandma and you are cursed!\n", count);
       } else if (count == 21){
         printf("What's 9+10?\n", count);
       } else if (count == 67){
         printf("Don't you dare to say it...\n", count);
       } else if (count == 69){
         printf("Nice!\n",count);
       } else if (count == 420){
         printf("youuu aree higghhhh , duuudeee\n", count);
       } 

       return 0;
       
}