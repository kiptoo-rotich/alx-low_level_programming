#include <stdio.h>
/**
 * main-Entry point
 *
 * return: Always 0(Success)
 */
int main(void)
{
	int intType=4;
	char charType=1;
	int longInt=8;

	printf("Size of a char:%d byte(s)\n",charType);
	printf("Size of an int:%d byte(s)\n",intType);
	printf("Size of a long int:%d byte(s)\n",intType);
	printf("Size of a long long int:%d byte(s)\n",longInt);
	printf("Size of a float:%d byte(s)\n",intType);
	return (0);
}
