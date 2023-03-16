#include<stdio.h>

/**
 * main - Prints the size of various typesa based on
 * the computer it is compiled and run on..
 */

int main(void)
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n",sizeof(long long int);
	printf("Size of float: %zu byte(s)\n", sizeof(float));
	return (0);
}
