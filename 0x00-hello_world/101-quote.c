#include <unistd.h>

/**
 *main - print exact quote followed by new line to standard error
 *
 *Return: 0 (Success)
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
