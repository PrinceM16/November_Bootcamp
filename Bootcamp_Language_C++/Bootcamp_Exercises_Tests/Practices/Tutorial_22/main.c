#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer;
    printf("Do you like pizza? (y/n) \n");

    scanf("%c", answer);

    if ((answer == 'y') || (answer >= 'n')){
    printf("Good job");
    }else{
    printf("Bad work");
    }

    return 0;
}
