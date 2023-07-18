#include <stdio.h>
/**
  *print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
  *followed by a new line
  *Return:0
  */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		putchar(a);
		putchar('\n');
	}
}
