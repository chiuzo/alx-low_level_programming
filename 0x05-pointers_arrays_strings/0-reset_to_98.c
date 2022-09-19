#include <stdio.h>

/**
* reset_to_98 - Write a function that takes a pointer to an int as parameter* and updates the value it points to to 98.
* Return: Always 0.
void reset_to_98(int *n)
{
	int n;

	n = 402;
	int *p = &n;
	printf("n=%d\n", n);
	*p = 98;
	printf("n=%d\n", n);
	return (0);
}
