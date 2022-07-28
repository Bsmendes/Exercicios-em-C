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
  double nota1, nota2, notaFinal;
  printf ("Digite a primeira nota: ");
  scanf ("%lf", &nota1);

  printf ("Digite a segunda nota: ");
  scanf ("%lf", &nota2);

  notaFinal = nota1 + nota2;

  printf ("NOTA FINAL = %.1lf\n", notaFinal);
  if (notaFinal < 60.0)
    {
      printf ("REPROVADO\n");
    }

}
