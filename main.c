#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main (){
    float num1;
    float num2;
    char op;
    printf ("___________________C   A   L   C   U   L   A   T   O  R______________________\n\n");
    printf ("Enter a number     :");
    scanf (" %f",&num1 );

    printf ("Enter an operator  :");
    scanf (" %c",&op);

    printf ("Enter a number     :");
    scanf ("%f", &num2);

    if (op == '+'){
        printf (" %f",num1+num2 );

    }

    else if (op == '-'){
        printf (" %f",num1-num2 );

    }

     else if (op == '/'){
        printf (" %f",num1/num2 );

     }
      else if (op == '*'){
        printf (" %f",num1 * num2 );
      }

      else {
        printf ("Error\a");
      }




}
