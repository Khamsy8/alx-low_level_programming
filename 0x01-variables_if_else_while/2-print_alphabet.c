
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

char ch = 'a';

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
 for (ch = 'a'; ch = 'z'; ch++)
{
putchar(ch);
}
return (0);
}
