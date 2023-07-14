#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point for the program
 *
 *description : print last digit of a random num and compares it
 *
 *Return: Always 0 (Success).
 */
int main(void)
{
int n;
int Last_Digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_Digit = abs(n) % 10;
	if (Last_Digit > 5)
	  printf("last digit of %d is greater than 5", n);
	else if (Last_Digit == 0)
	  printf("last digit of %d is 0 and is 0", n);
	else if (Last_Digit < 6)
	  printf("last digit of %d is less than 6 and not 0", n);

return (0);
}
