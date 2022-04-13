#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int f0 = 0;
	float f1 = 1;
	int i = 2;
	float fn2, suite;

	suite = f0 + f1;
	f1 = f0;
	while (i < 100)
	{
		fn2 = suite;
		suite = suite + f1;
		printf("%.0f", suite);
		f1 = fn2;
		i++;
		if (i < 100)
			printf(", ");
	}
	printf("\n");
	return (0);
}
