
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
if (n > 0)
{
printf("98 is positive\n");
}
if (n == 0)
{
printf("0 is zero\n");
}

if (n < 0)
{
printf("-98 is negative\n");
}
return (0);
}
