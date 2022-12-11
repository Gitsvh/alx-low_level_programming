#include <stdio.h>
/**
 * main-print out size of data types in c
 * return: 0
*/
main(void)
	int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(S)\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("size of long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("size of float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
