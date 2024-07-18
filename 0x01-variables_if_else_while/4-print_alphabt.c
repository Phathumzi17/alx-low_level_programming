#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * except for 'q' and 'e', followed by a new line,
 * using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
	if (letters != 'q' && letters != 'e')
	{
		putchar(letters);
	}
	}
	putchar('\n');

	return (0);
}
