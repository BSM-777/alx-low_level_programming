#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100, followed by a new line
 *
 *Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 *Multiples of both 3 and 5 should print FizzBuzz.
 *Return: Always 0
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		n++;
	}
	printf("\n");

	return (0);
}
