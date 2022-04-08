// Printing frequency of each character just before it's consecutive occurences
#include <stdio.h>

int main()
{
  char s[] = "fffooewwwbbbb";

  for (int i = 0; s[i] != 0; i++)
  {
    int count = 1;

    while (s[i] == s[i + 1]) {
      ++i;
      ++count;
    }

    printf("%d%c", count, s[i]);
  }

  return 0;
}