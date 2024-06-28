#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the alphabet in lowercase,
 * followed by a new line, using only the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char i;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (i = 'A'; i <= 'Z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
