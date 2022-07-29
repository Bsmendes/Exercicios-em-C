/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int X, Y;
  printf ("Digite dois numeros:\n");
  scanf ("%d", &X);
  scanf ("%d", &Y);
  while (X != Y)
    {
      if (X < Y)
	{
	  printf ("CRESCENTE\n");
	}
      else
	{
	  printf ("DECRESCENTE\n");
	}
      printf ("Digite outros dois numeros:\n");
      scanf ("%d", &X);
      scanf ("%d", &Y);

    }

  return 0;
}
