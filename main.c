/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
int hora;
printf("Digite uma hora do dia: ");
scanf("%d", &hora);
if (hora < 12) {
printf("Bom dia!\n");
}
else {
printf("Boa tarde!\n");
}
return 0;
}