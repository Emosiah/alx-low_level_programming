#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	long b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %1u byte(s)\n", (unasigned long)sizeof(a));
printf("Size of an int: %1u byte(s)\n", (unasigned long)sizeof(b));
printf("Size of a long int: %1u bytes(s)\n",(unassigned long)sizeof(c));
printf("Size of a long long int: %1u bytes(s)\n", (unassigned long)sizeof(d));
printf("Size of a float: %1u bytes(s)\n", (unassigned long)sizeof(f));
return (0);
}
