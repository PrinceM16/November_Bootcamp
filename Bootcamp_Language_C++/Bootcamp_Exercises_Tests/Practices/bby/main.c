#include <stdio.h>
#include <stdlib.h>

int main()
{


  {  int first, second;
  printf("enter two integers ");
   scanf("%i %i", &first, &second);
  printf("%i + %i = %i\n", first, second, first + second);
   printf("%i - %i = %i\n", first, second, first - second);
    printf("%i * %i = %i\n", first, second, first * second);
  if(second != 0) {   printf("%i / %i = %.2lf\n", first, second,      (double)first / second);
    printf("%i %% %i = %i\n", first, second,        first % second);

   int first, second;
  printf("enter two integers ");
    scanf("%i %i", &first, &second);
  printf("%x & %x = %x\n", first, second, first & second);
   printf("%x | %x = %x\n", first, second, first | second);
    printf("%x ^ %x = %x\n", first, second, first ^ second);
  printf("enter two more integers ");  scanf("%i %i", &first, &second);
  printf("%i << %i = %i\n", first, second, first << second);
    printf("%i >> %i = %i\n", first, second, first >> second);

long double  radius = 0.0L;
  long double  height = 0.0L;
    long double  volume = 0.0L;
     const long double pi = 3.1415926353890L;

  printf("please give the radius and height ");
   scanf("%Lf %Lf", &radius, &height);
  volume = pi * radius * radius * height;
  printf("Volume of cylinder with radius %.3Lf "   "and height %.3Lf is %.12Lf\n",    radius, height, volume);

 double  radius = 0.0L;
  long double  height = 0.0L;  long double  volume = 0.0L;
   const long double pi = 3.1415926353890L;
  printf("please give the radius and height ");
   scanf("%Lf %Lf", &radius, &height);
  volume = pi * radius * radius * height;
  printf("Volume of cylinder with radius %.3Lf "   "and height %.3Lf is %.12Lf\n",    radius, height, volume);

     }
  return 0;
   }

}
