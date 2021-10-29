#include <stdio.h>
#include <stdlib.h>

int main(){ //ALGORITMO

/*
  Linguagem C é case sensitive
  Tipos de dados na linguagem C
  Numérico Inteiro - int
  Caractere - char
*/

int n1, n2, m;

//ESCREVA == printf
printf("Digite um número: ");

//LEIA == scanf
//%d == números inteiros
scanf("%d", &n1);

printf("Digite outro número: ");
scanf("%d", &n2);

m = n1 * n2;

printf("O resultado é: %d\n", m);


} //FIM_ALGORITMO