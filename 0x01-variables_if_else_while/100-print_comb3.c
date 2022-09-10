#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, n;
	
	for (i = 48; i <= 56; i++)
	{
		if (n > i)
		{
			putchar(i);
			putchar(n);
		
			if (i != 56 || n != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
