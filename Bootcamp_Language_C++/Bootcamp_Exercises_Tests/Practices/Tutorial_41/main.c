#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i, temp, swapped;
  int howmany =10;
  int goals [howmany];


   for(i=0; i<howmany; i++){
   goals[i] = (rand() &25 +1);
   }
   printf("orginal last List\n");
   for(i=0; i<howmany; i++){
   printf("%d \n", goals[i]);
while(1) {
 for(i=0; i<howmany -1; i++){
    swapped = 0;
    if(goals[i] > goals[i =1]){
int temp = goals[i];
goals[i] = temp;
swapped =1;

    }
 }
 if(swapped = 0){
 break;
 }
}
  printf("orginal last List\n");
   for(i=0; i<howmany; i++){
   printf("%d \n", goals[i]);
   }
  return 0;
   }


