#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line
 * Return: no return
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
		}
		_putchar('\n');
		}
	else
	{
		for (; n >= 98; n++)
		{
			_putchar(n);
			_putchar(',');
		}
		_putchar('\n');
	}
}