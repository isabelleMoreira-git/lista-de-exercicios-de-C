Lista de exercícios 5 - Matrizes (resolução)

/*1) Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e escreva os
elementos da diagonal principal, e a soma desses elementos.*/
#include <stdio.h>
#define linha 2
#define coluna 2
int main (void)
{
    int i, j;
    float matriz[linha][coluna];
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        {
            printf ("Insira o número da linha %d e coluna %d:",i,j);
            scanf ("%f", &matriz[i][j]);
        }
for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        {
            if (i==j)
            printf ("%.0f\n",matriz[i][j]);
        }
    return 0;
}

/*2) Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e escreva
todos os elementos, exceto os elementos da diagonal principal.*/
#include <stdio.h>
#define linha 2
#define coluna 2
int main (void)
{
    int i,j,matriz[linha][coluna];
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        {
            printf ("Insira o número da linha %d e coluna %d:",i,j);
            scanf ("%d", &matriz[i][j]);
        }
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        {
            if (i!=j)
            printf ("%d ",matriz[i][j]);
        }
    return 0;}

/*3) Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e escreva
somente os elementos acima da diagonal principal.*/
#include <stdio.h>
#define linha 3
#define coluna 3
int main (void)
{
    int i, j;
    float matriz[linha][coluna];
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        {
            printf ("Insira o elemento da linha %d e coluna %d:",i,j);
            scanf ("%f", &matriz[i][j]);
        }
     for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        {
            if (i-1==j)
            printf ("%.0f\n", matriz[i][j]);
        }
return 0;

}

/*4) Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e imprima a
soma dos elementos que estão acima da diagonal principal:*/
#include <stdio.h>
#define linha 3
#define coluna 3
int main (void)
{
    int i, j;
    float matriz[linha][coluna], soma;
    soma = 0;
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        {
            printf ("Insira o elemento da linha %d e coluna %d:",i,j);
            scanf ("%f", &matriz[i][j]);
        }
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        if (i< j)
        {
            printf ("%.0f ",matriz[i][j]);
            soma = soma + matriz[i][j];
        }
        printf ("\nsoma = %.0f\n",soma);
}

/*5) Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e escreva
somente os elementos abaixo da diagonal principal.*/
#include <stdio.h>
#define linha 3
#define coluna 3
int main (void)
{
    int i, j;
    float matriz[linha][coluna];
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        {
            printf ("Insira o elemento da linha %d e coluna %d:",i,j);
            scanf ("%f", &matriz[i][j]);
        }
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
            if (i>j)
            {
                printf ("%.0f ",matriz[i][j]);
            }
    return 0;
}

/*6) Criar um algoritmo que leia os elementos de uma matriz inteira 10 x 10 e imprima o
produto dos elementos que estão abaixo da diagonal principal.*/
#include <stdio.h>
#define linha 3
#define coluna 3
int main (void)
{
    int i, j;
    float matriz[linha][coluna],produto;
    produto = 1;
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
        {
            printf ("Insira o elemento da linha %d e coluna %d:",i,j);
            scanf ("%f", &matriz[i][j]);
        }
    for (i=0;i<linha;i++)
        for (j=0;j<coluna;j++)
            if (i>j)
            {
                printf ("%.0f ",matriz[i][j]);
                produto = produto * matriz[i][j];
            }
    printf ("\nsoma = %.0f ",produto);
    return 0;
}

/*19) Criar um algoritmo que possa armazenar as alturas de dez atletas de
cinco delegações que participarão dos jogos de verão. Imprimir a maior altura de cada delegação.*/
#include <stdio.h>
#define MAX_DELEGACOES 2
#define MAX_ATLETAS 2

void main()
{
    float altura[MAX_DELEGACOES][MAX_ATLETAS], maximo;
    char nomedelega[MAX_DELEGACOES][10] = {"Brasil","EUA"};
    int i, j;
    
    for(i = 0; i < MAX_DELEGACOES; i++)
    {
        printf("Delegação %s:\n",nomedelega[i]);
        for(j = 0; j < MAX_ATLETAS; j++)
        {
            printf("Digite a altura de um atleta: ");
            scanf("%f", &altura[i][j]);
        }
    }

for (i=0;i<MAX_DELEGACOES;i++)
{
    maximo = 0;
    for (j=0; j<MAX_ATLETAS;j++)
    if(altura[i][j] > maximo)
        maximo = altura[i][j];
    printf("Maior altura na delegação %s é %.2f\n", nomedelega[i],maximo);
}
}

