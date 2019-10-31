/* ********************************************* *
 *	This is Exercise 2 an Scanf function
 *	Project: Exercise 2
 *	31/10/2019 15:45:23
 *	Prince M
 *
 * ******************************************** */

#include <stdio.h>

int main()
{

	int first;
	int second;

	printf("Please enter the first numbers \n");
	scanf(" %d", &first);
    printf("Please enter the second numbers \n");
	scanf(" %d", &second);

	int tit;

	tit = first + second;

	float div;
	float diva;

	printf("Please enter the first float numbers \n");
	scanf(" %f", &div);

	printf("Please enter the second float numbers \n");
	scanf(" %f", &diva);

	float fleet;

	fleet = (div * diva);

	char word[5];

	printf("Please enter any word \n");
	scanf(" %s", word);

	printf(" You entered %d and %d, their sum is: %d \n", first, second, tit);
	printf(" You entered %.7f and %.7f, their product is: %.7f \n", div, diva, fleet);
	printf("Give a word: %s %s \n", word, word);






}

