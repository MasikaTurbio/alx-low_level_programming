#include <stdio.h>
#include <stdlib.h>
#include <time.h

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */

inta main(void)
{
	char low;

	for (low = 'a'; low  <= 'd'; low++)
		putchar(low);
	for (low = 'f'; low <= 'p'; low++)
		putchar(low);
	for (low = 'r'; low <= 'z'; low++)
		putchar(low);
	putchar('\n');

	return(0);
}
