#include <stdio.h>
/**
 * main - Entry Point
 * Description: 'prints upper and lower case alphabets'
 * Return: 0 is always successful
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122);
	{
		putchar(n);
		n++;
	}while (m <= 90);
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
