#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int f0 = 0;
	int f1 = 1;
	int i = 2;
	int fn2, suite;

	suite = f0 + f1;
	f1 = f0;
	while (suite < 4000000)
	{
		fn2 = suite;
		suite = suite + f1;
		f1 = fn2;
		if (i % 2 == 0 && suite < 4000000)
		{
			if (i != 2)
				printf(", ");

			printf("%d", suite);

		}
		i++;
	}
	printf("\n");
	return (0);
}
