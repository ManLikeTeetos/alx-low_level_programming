#include <stdio.h>

/**
*main - main block
*Return : Always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %t byte(s)\n", sizeof(char));
	printf("Size of an int: %t byte(s)\n", sizeof(int));
	printf("Size of an long int: %t byte(s)\n", sizeof(long int));
	printf("Size of an long long int: %t byte(s)\n", sizeof(long long int));
	printf("Size of an float: %t byte(s)\n", sizeof(float));
	return (0);



}
