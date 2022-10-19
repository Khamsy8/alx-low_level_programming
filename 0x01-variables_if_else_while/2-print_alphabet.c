
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: "Program notice of the code"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 6 && n != 0)
{
putchar("abcdefghijklmnopqrstuvwxyz\n");
}
return (0);
}
