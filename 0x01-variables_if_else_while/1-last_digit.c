#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Get a random number and check its last digit, compare it with 5
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	if (n > 5)
		printf("Last digit 0f %d is %d and is greater than 5\n", n);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	return (0);
}
