#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
*/


int main(void)
{
	printf("Size of a char: %zu byte(s)\n", Sizeof(char));
	printf("Size of an int: %zu byte(s)\n", Sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", Sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", Sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", Sizeof(float));
	return (0);
}
