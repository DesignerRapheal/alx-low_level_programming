#include <stdio.h>

/**
 * main - print the alphabet in lowcase, and then in uppercase,
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
