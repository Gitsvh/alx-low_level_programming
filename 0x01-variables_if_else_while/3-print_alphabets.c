#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper cases
 *
 * Returns: always 0 (success)
 */
int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH)
		CH++;
	}
	
	putchar('\n');
	return (0);
}
