#include <stdio.h>
/**
 * main - Entry point
 * Description: print number o base 10 using putchar'
 * Return: Alwys 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
