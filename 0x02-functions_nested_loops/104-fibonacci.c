#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int f0 = 0;
	long long int f1 = 1;
	int i = 2;
	long long int fn2, suite;

	suite = f0 + f1;
	f1 = f0;
	while (i < 100)
	{
		fn2 = suite;
		suite = suite + f1;
		printf("%lld", suite);
		f1 = fn2;
		if (i < 100)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
