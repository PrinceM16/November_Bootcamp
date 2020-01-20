#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
int becoan;

for(becoan = 1; becoan <= 33; becoan++){
printf("The becoan is avaliable %d times \n\n", becoan);
}

float black;

for(black = 5; black <= 22; black++){
printf("The black monster is coming %.2f rounds \n\n", black);
}

int blue;

blue = black >= becoan;

for(blue = 5;blue <=15; blue++){
printf("Goodbye \n");
}
    return 0;
}
