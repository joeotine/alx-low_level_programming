#include <stdio.h>
/**
 * main - print out sizes of data types in C
 * code by joe otine
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %d byte(S)\n", sizeof(char));
	printf("Size of an int: %d byte(S)\n", sizeof(int));
	printf("Size of a long int: %d byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(S)\n", sizeof(long long int))
	printf("Size of a float: %d byte(S)\n", sizeof(float));
	return (0);
}
