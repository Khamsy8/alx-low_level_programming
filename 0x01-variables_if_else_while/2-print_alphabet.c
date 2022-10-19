
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

char n = 'a';

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
for (n = 'a'; n = 'z'; n++)
{
putchar(n);
}
return (0);
}
