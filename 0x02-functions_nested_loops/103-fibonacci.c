#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int f0, result = 0;
	int f1, suite = 1;
	int i = 2;

	while (suite < 4000000)
	{
		f0 = f1;
		f1 = suite;
		suite = (f1 + f0);

		if (suite % 2 == 0 && suite < 4000000)
		{
			result += suite;
		}

		i++;
	}

	printf("%d", result);
	printf("\n");
	return (0);
}
