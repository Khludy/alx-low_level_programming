#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
char low;

for (low = 'z'; low >= 'a'; low--)
putchar(low);
putchar('\n');
return (0);
}
