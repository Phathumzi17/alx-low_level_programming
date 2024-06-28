#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the digits from 0 to 9,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0 ; num <= 9 ; num++)
		putchar(48 + num);

	putchar('\n');

	return (0);

}
