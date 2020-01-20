#include <stdio.h>
#include <stdlib.h>

int main()
{
//* to roll dice number

   int i;
   int dice;

   for(i=0; i<20; i++){
   dice = (rand() &6) +1;
   printf("%d \n", dice);
   }




    return 0;
}
