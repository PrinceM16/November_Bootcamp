#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B = 5, C = 8, Answer = B * C;
    printf("Your answer is %d \n", Answer);

int Bag = 55;
int loose = 33;

int Total;

Total = Bag - Answer;

printf("Show the total: %d \n", Total);


char Cname ;
char Csurname;
char Address;


printf("Please enter your Name \n");
scanf( "%c", Cname);

printf("Please enter your Surname \n");
scanf( "%c", Csurname);

printf("Please enter your address \n");
scanf( "%c", Address);

printf("Your database is: %c %c and you live at %c \n", Cname, Csurname, Address);



    return 0;
}
