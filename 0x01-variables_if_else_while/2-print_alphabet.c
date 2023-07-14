#include <stdio.h>
/**
 *main - Entry point of the program
 *
 *description : print message
 *
 *Return : Always 0 (Success).
 */
int main(void){
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
