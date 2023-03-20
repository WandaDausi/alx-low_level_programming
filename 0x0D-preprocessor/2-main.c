#include <stdio.h>
/*
 * a program that prints the name of the file it was compiled from
 * Return: 0
 */
void main()
{
	printf("%s\n", __FILE__);
	return (0);
}
