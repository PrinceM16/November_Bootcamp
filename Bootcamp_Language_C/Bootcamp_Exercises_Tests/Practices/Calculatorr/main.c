#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i_Addition;
    int i_Subtraction;
    int i_Mutliplication;
    int i_Division;
    int i_Exponent;

    int Calculate;
    int Total;

    int Summary;

    int frstN;
    int scndN;

    printf("Enter First Number \n\n");
    scanf(" %d \n", frstN);

    printf("Enter Second Number \n\n");
    scanf(" %d \n", scndN);

    Calculate = ((int)frstN + (int)scndN);


i_Addition = frstN + scndN;

i_Subtraction = frstN - scndN;

i_Mutliplication = frstN * scndN;

i_Division = frstN / scndN;

 printf("Your Calculations:         \t %d is \n\n", &Calculate);

 printf("Your Total:                \t %d is.\n\n", &Total);

  printf("Your Summary:             \t %d is.\n\n", &Summary);

   printf("Your Addition:           \t %d is.\n\n", &i_Addition);

    printf("Your Subtraction:       \t %d is.\n\n", &i_Subtraction);

     printf("Your Multiplications:  \t %d is.\n\n", &i_Mutliplication);

      printf("Your Divisions:       \t %d is. \n\n", &i_Division);


    return 0;
}
