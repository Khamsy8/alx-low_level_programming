
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
if (n > 5)
{
printf("Last digit of 980 is 0 and is 0\n");
}
if (n == 0)
{
printf("Last digit of 980 is 0 and is 0\n");
}

if (n < 6 && n != 0)
{
printf("Last digit of -98 is -8 and is less than 6 and not 0\n");
}
return (0);
}
