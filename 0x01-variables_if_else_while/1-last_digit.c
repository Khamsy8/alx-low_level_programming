#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
{
printf("Last digit of 491506926 is 6 and is greater than");
}
return (0);
}
