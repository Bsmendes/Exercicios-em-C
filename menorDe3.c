/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int
main ()
{
  int a, b, c, menor;
  printf ("Digite o primeiro valor: ");
  scanf ("%d", &a);

  printf ("Digite o segundo valor: ");
  scanf ("%d", &b);

  printf ("Digite o terceiro valor: ");
  scanf ("%d", &c);

  if (a < b && a < c)
    {
      menor = a;
    }
  else if (b < c)
    {
      menor = b;
    }
  else
    {
      menor = c;
    }
  printf ("MENOR = %d\n", menor);
  return 0;
}
