#include <stdio.h>

/**
 * main - main function
 * Description:prints the alphabet in lowercase, followed by a new line
 * Return: Return
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
		putchar('\n');
	return (0);
}
