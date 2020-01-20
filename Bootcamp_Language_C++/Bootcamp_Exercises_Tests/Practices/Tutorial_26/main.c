#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade = 0;
    float test_target = 0;
    float test = 0;
    float Average =0;

    printf("Please enter the 0 when complete \n\n");

    do {
    printf("Test: %2.f Average: %4.2 \n", test, Average);
    printf("Grade and Test score");
    scanf( "%f", &grade);
    grade <= test_target;
    test_target++;

    Average = (grade / test);
    }while{ test != 0;

    }

    }
    return 0;
}
