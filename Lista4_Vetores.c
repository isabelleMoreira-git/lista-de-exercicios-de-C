Lista de Vetores - Programação 

/*1) Escreva um algoritmo em PORTUGOL que armazene em um vetor todos os números
inteiros de 0 a 50. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/

#include <stdio.h>
#define TAMANHO 50
int main ()
{
    int vet[TAMANHO], i;
    for (i=0;i <= TAMANHO; i++)
    vet[i] = i;
    for (i=0;i <= TAMANHO; i++)
    printf ("%d\n",vet[i]);
}

/*2) Escreva um algoritmo em PORTUGOL que armazene em um vetor todos os números inteiros 
do intervalo fechado de 1 a 100. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/
#include <stdio.h>
#define TAMANHO 100
int main ()
{
    int vet[TAMANHO], i;
    for (i=0;i <= TAMANHO; i++)
    vet[i] = i;
    for (i=0;i <= TAMANHO; i++)
    printf ("%d\n",vet[i]);
}

/*3) Escreva um algoritmo em PORTUGOL que armazene em um vetor todos os números inteiros de 100 a 1
(em ordem decrescente). Após isso, o algoritmo deve imprimir todos os valores armazenados.*/
#include <stdio.h>
#define SIZE 100
int main (){
    int i;
    float vet[SIZE];
    for (i=0;i<SIZE;i++)
    {
        vet[i] = 100 - i;  
   }
    for (i=0;i < SIZE; i++)
    printf ("%.0f ",vet[i]);
return 0; }
/*4) Escreva um algoritmo em PORTUGOL que armazene em um vetor todos os números inteiros de 100 a 200. 
Após isso, o algoritmo deve imprimir todos os valores armazenados.*/c
#include <stdio.h>
#define SIZE 100
int main ()
{
    int i;
    float vet[SIZE];
    for (i=100;i=200;i++)
    {
        vet[i]= i;
    }
    for (i=100;i=200;i++)
    printf ("%.0f ",vet[i]);
return 0;
}

/*6) Escreva um algoritmo em PORTUGOL que armazene em um vetor todos os números múltiplos de 5, 
no intervalo fechado de 1 a 500. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/
#include <stdio.h>
#define SIZE 100
int main ()
{
    int i, vet[SIZE];
    for (i=1;i<=SIZE;i++)
    vet[i] = i*5;
    for (i=1;i<=SIZE;i++)
    printf ("%d ",vet[i]);
return 0;
}

/*7) Escreva um algoritmo em PORTUGOL que armazene em um vetor todos os números pares
do intervalo fechado de 1 a 100. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/
#include <stdio.h>
#define SIZE 51
int main ()
{
    int vet[SIZE], i;
    for (i=1;i<SIZE;i++)
    {
    vet[i] = i*2;
    }
    for (i=1;i<SIZE;i++)
    printf ("%d ", vet[i]);
return 0;
}

/*8) Escreva um algoritmo em PORTUGOL que armazene em um vetor os 100 primeiros
números ímpares. Após isso, o algoritmo deve imprimir todos os valores armazenados.*/
#include <stdio.h>
#define SIZE 51
int main ()
{
    int vet[SIZE], i;
    for (i=0;i<SIZE;i++)
    {
    vet[i] = (i*2) + 1;
    }
    for (i=0;i<SIZE;i++)
    printf ("%d ", vet[i]);
return 0;
}
 
/*9) Escreva um algoritmo em PORTUGOL que armazene em um vetor o quadrado dos
números ímpares no intervalo fechado de 1 a 20. Após isso, o algoritmo deve
imprimir todos os valores armazenados.*/
#include <stdio.h>
#define SIZE 10
int main ()
{
    int i, vet[SIZE];
    for (i=0;i<SIZE;i++)
    {
    vet[i] = ((i*2) + 1) * ((i*2) + 1);
    }
    for (i=0;i<SIZE;i++)
    printf ("%d ", vet[i]);
return 0;
}

/*11) Escreva um algoritmo em PORTUGOL que receba dez números do usuário e
armazene em um vetor a metade de cada número. Após isso, o algoritmo deve
imprimir todos os valores armazenados.*/
#include <stdio.h>
#define TAMANHO 10
int main ()
{
    float vet[TAMANHO],num;
    int i;
    for (i=0;i < TAMANHO; i++)
    {
    printf ("Insira um número:");
    scanf ("%f", &vet[i]);
    vet [i] = vet [i] /2;
    }
    for (i=0;i < TAMANHO; i++)
    printf ("%.1f\n",vet[i]);
return 0;
}

/*12) Escreva um algoritmo em PORTUGOL que receba dez números do usuário e
armazene em um vetor o quadrado de cada número. Após isso, o algoritmo deve
imprimir todos os valores armazenados.*/
#include <stdio.h>
#include <math.h>
#define SIZE 10
int main ()
{
    float vet[SIZE];
    int i;
    for (i=0;i<SIZE;i++)
    {
        printf ("Insira um número:");
        scanf ("%f",&vet[i]);
        vet[i] = sqrt (vet[i]);
    }
    for (i=0;i<SIZE;i++) 
    printf ("%.1f\n",vet[i]);
return 0;
}

/*13) Escreva um algoritmo em PORTUGOL que receba dez números do usuário e
armazene em um vetor o cubo de cada número. Após isso, o algoritmo deve imprimir
todos os valores armazenados.*/
#include <stdio.h>
#include <math.h>
#define SIZE 10
int main ()
{
    float vet[SIZE];
    int i;
    for (i=0;i<SIZE;i++)
    {
        printf ("Insira um número:");
        scanf ("%f", &vet[i]);
        vet[i] = pow(vet[i],3);
    }
    for (i=0;i<SIZE;i++)
    printf ("%.1f\n", vet[i]);
return 0;
}

/*14) Escreva um algoritmo em PORTUGOL que receba quinze números do usuário e
armazene em um vetor a raiz quadrada de cada número. Caso o valor digitado seja
menor que zero o número –1 deve ser atribuído ao elemento do vetor. Após isso, o
algoritmo deve imprimir todos os valores armazenados.*/

#include <stdio.h>
#include <math.h>
#define SIZE 15
int main ()
{
    int i;
    float vet[SIZE];
    for (i=0;i<SIZE;i++)
    {
        printf ("Insira um número:");
        scanf ("%f",&vet[i]);
        if (vet[i]<0)
        {
            vet[i] = -1;
        }
        else 
        {
            vet[i] = sqrt(vet[i]);
        }
    }
    for (i=0;i<SIZE;i++)
    printf ("%.1f\n", vet[i]);
return 0;
}


/*15) Escreva um algoritmo em PORTUGOL que receba oito números do usuário e
armazene em um vetor o logaritmo de cada um deles na base 10. Caso não seja
possível calcular o valor para o número digitado, o número –1 deve ser atribuído ao
elemento do vetor. Após isso, o algoritmo deve imprimir todos os valores
armazenados.*/
#include <stdio.h>
#include <math.h>
#define SIZE 2
int main ()
{
    int i;
    float vet[SIZE];
    for (i=0;i<SIZE;i++)
    {
        printf ("Insira um número:");
        scanf ("%f", &vet[i]);
        if (vet[i] < 0)
        {
            vet[i] = -1;
        }
        else 
        {
            vet[i] = log10(vet[i]);
        }
    }
    for (i=0;i<SIZE;i++)
    printf ("%.1f\n", vet[i]);
return 0;
}

/*16) Escreva um algoritmo em PORTUGOL que receba a altura de 10 atletas. Esse
algoritmo deve imprimir a altura daqueles atletas que tem altura maior que a média.*/
#include <stdio.h>
#define ALTURA 2
int main ()
{
    float vet[ALTURA],media;
    int i;
    media = 0;
    for (i=0;i<ALTURA;i++)
    {
        printf ("Insira a altura:");
        scanf ("%f",&vet[i]);
        media = media + vet[i];
    }
    media = media / ALTURA;
    for (i=0;i<ALTURA;i++)
    {
        if (vet[i] > media)
        printf ("%.1f", vet[1]);
    }
return 0;
}

/*17)  Escreva um algoritmo em PORTUGOL que armazene em um vetor os 50 primeiros
termos da série de FIBONACCI. Após isso, o algoritmo deve imprimir todos os
valores armazenados.*/
 #include <stdio.h>
#define SIZE 4
int main (void)
{
    int i,vet[SIZE];
    vet[0] = 1;
    for (i=1;i<SIZE;i++)
    {
        vet[i]= vet[i-2] + vet[i - 1];
    }
    for (i=0;i<SIZE;i++)
    {
    printf ("%d ",vet[i]);
    }
return 0;
}

/*21) Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias), não
ocorreu temperatura inferior a 15oC nem superior a 40oC. As temperaturas verificadas
em cada dia estão disponíveis em uma unidade de entrada de dados.
Fazer um algoritmo em PORTUGOL que calcule e imprima:
- A menor temperatura ocorrida;
- A maior temperatura ocorrida;
- A temperatura média;
- O número de dias nos quais a temperatura foi inferior à temperatura média.*/
#include <stdio.h>
#define DIAS 5
int main (void)
{
    float temp[DIAS], minimo,maximo,media;
    int i,num;
    minimo= 40;
    maximo= 15;
    media = 0;
    num = 0;
    for (i=0; i<DIAS; i++)
    {
        printf ("Insira uma temperatura:");
        scanf ("%f",&temp[i]);
        media += temp[i];
    }
    media = media / DIAS;
    for (i=0; i<DIAS; i++)
    {
    if (temp[i] > media)
    num+= 1;
    if (temp[i] < minimo)
        minimo = temp[i];
    if (temp[i] > maximo)
        maximo = temp [i];
    }
    printf ("\nA menor temperatura é:%.1f\n",minimo);
    printf ("A maior temperatura é:%.1f\n",maximo);
    printf ("A media das temperatura é:%.1f\n",media);
    printf ("O número de dias com temperatura maior que a media foi: %d",num);
return 0;
}