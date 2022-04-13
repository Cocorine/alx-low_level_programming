#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int f0 = 0;
	long int f1 = 1;
	int i = 2;
	long int fn2, suite;

	suite = f0 + f1;
	printf("%ld, ", suite);
	f1 = f0;
	while (i <= 50)
	{
		fn2 = suite;
		suite = suite + f1;
		printf("%ld", suite);
		f1 = fn2;
		if (i != 50)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
