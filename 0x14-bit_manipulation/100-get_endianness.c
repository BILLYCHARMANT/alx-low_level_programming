#include "main.h"
/**
 * get_endianess - return the endianess of the machine
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char*) &n;
	return (int)*c;
}
