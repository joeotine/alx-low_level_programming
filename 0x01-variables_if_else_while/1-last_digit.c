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
		printf("Last digit 0f %i is n and is greater than 5\n", n, n);
	if (n == 0)
		printf("Last digit of %i is n and is 0\n", n, n);
	else if (n < 6)
		printf("Last digit of %i is n and is less than 6 and not 0\n", n, n);
	return (0);
}
