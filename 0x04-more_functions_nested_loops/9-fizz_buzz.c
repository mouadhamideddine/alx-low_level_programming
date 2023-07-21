#include <stdio.h>
/**
 * main - entry
 * description : print 1 to 100 _ for %3= 0 Fizz _for %5=0 buzz _for %5=0 and 
 * Return: None
 */
int main(void)
{
	int count = 1;

	for (; count < 101; count++)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("\n");
	return (0);
}
