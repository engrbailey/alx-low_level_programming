#include <stdio.h>
/**
 * main - entry point
 * Description: prints alphabet lowercase
 * Return: 0 means successful
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
