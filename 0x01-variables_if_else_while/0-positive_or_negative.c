#include <stdlib.h>
#include <time.h>
/*more headers go there*/
#include <stdio.h>
/*betty style doc for main function goes there*/
/**
 *main - main function
 *
 *Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* the code goes there */
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");

	return (0);
}
