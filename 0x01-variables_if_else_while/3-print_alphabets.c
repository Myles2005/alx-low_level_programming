#include <stdio.h>
/**
 * main - Entry main
 *
 * Description: Use of putchar print lower_case and upper_case
 *
 * Return: Always 0 for success
 */
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
	putchar(CH);

	return (0);
}
