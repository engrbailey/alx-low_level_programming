#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'prints upper and lower case alphabets'
 * Return: 0 is always successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
