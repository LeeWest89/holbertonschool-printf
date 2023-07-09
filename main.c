#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("Help %s\n", "me");
	len2 = printf("Help %s\n", "me");

	printf("Length of _printf: %d\n", len);
	printf("Length of printf: %d\n", len2);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
