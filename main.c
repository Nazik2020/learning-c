#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{

  int a;
  int books[5];
  int total = 0.0;

  for (a = 0; a < 5; a++)
  {
    printf(" How many books you read per day %d  :", a + 1);
    scanf("%d", &books[a]);

    total += books[a];
  }
  printf("Total books  : %d", total);
  printf("Total books  : %d", total);
}
