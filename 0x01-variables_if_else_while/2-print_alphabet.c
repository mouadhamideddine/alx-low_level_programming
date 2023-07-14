#include <stdio.h>


/**
 *main - Entry point of the program.
 *
 * description : iterate through alphabets and returns 0 if successful
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
char Letter;
int Count;
for (Count = 0; Count < 26; Count++)
{
Letter = 'a' + Count;
putchar(Letter);
}
putchar('\n');
return (0);
}
