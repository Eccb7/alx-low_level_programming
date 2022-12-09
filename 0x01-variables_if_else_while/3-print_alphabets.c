#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the alphabet in lowercase and uppercase on same line
 *
 * Return: (0) Success
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
