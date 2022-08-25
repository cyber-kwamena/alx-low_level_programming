#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 for success
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *(argv + 0));
	return (0);
}
