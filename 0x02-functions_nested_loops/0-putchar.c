#include <main.h>
#include "Charmant.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *Bl = "Charmant";

	while (*Bl)
	{
		_putchar(*Bl);
		Bl++;
	}
	_putchar('\n');

	return (0);
}
