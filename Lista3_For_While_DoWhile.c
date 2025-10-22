//IPC - Lista 3 (For,while,do…while)

//1) Escreva um algoritmo que imprima todos os números inteiros de 0 a 50.
#include <stdio.h>
int main (void)
{
    int num;
    for (num=0;num<=50;num=num+1)
    {
        printf ("%d ",num);
    }
return 0;
}

//2) Escreva um algoritmo em que imprima todos os números inteiros do intervalo fechado de 1 a 100.
#include <stdio.h>
int main (void)
{
    int cont;
    for (cont=1;cont<=100;cont= cont+1)
    {
        printf ("%d ",cont);
    }
return 0;
}

//3) Escreva um algoritmo que imprima todos os números inteiros de 100 a 1 (em ordem decrescente).
#include <stdio.h>
int main (void)
{
    int num;
    num= 100;
    while (num>=1)
    {
        printf ("%d ",num);
        num = num - 1;
    }
return 0;
}


//4) Escreva um algoritmo que imprima todos os números inteiros de 100 a 200.
#include <stdio.h>
int main (void)
{
    int num;
    num = 100;
    while (num<=200)
    {
        printf ("%d ",num);
        num = num + 1;
    }
return 0;
}

//5) Escreva um algoritmo em PORTUGOL que imprima todos os números inteiros de 200 a 100 (em ordem decrescente).
#include <stdio.h>
int main (void)
{
    int num;
    num=200;
    while (num>=100)
    {
        printf ("%d ",num);
        num = num - 1;
    }
return 0;
}


//6) Escreva um algoritmo em PORTUGOL que imprima todos os números múltiplos de 5, no intervalo fechado de 1 a 500.
#include <stdio.h>
int main (void)
{
    int num;
    num = 5;
    while (num<=500)
    {
        printf ("%d ",num);
        num = num +5;
    }
return 0;
}

//7) Escreva um algoritmo em PORTUGOL que imprima todos os números pares do intervalo fechado de 1 a 100.
#include <stdio.h>
int main (void)
{
    int num;
    num = 2;
    while (num<=100)
    {
        printf ("%d ",num);
        num = num + 2;
    }
return
}

/*8) Escreva um algoritmo em PORTUGOL que imprima os 100 primeiros números
ímpares.*/
#include <stdio.h>
int main (void)
{
    int num,cont;
    num = 1;
    cont = 1;
    while (cont <=100)
    {
        printf ("%d ",num);
        num = num + 2;
        cont = cont + 1;
    }
return 0;
}

/*9) Escreva um algoritmo em PORTUGOL que imprima o quadrado dos números no
intervalo fechado de 1 a 20.*/
#include <stdio.h>
int main (void)
{
    int num, quadrado;
    num = 1;
    while (num<=20)
    {
        quadrado = num * num;
        printf ("%d ",quadrado);
        num = num + 1;
    }
return 0;
}

/*10) Escreva um algoritmo em PORTUGOL que imprima todos os números ímpares do
intervalo fechado de 1 a 100.*/
#include <stdio.h>
int main (void)
{
    int num;
    num = 1;
    while (num<=100)
    {
        printf ("%d ",num);
        num = num + 2;
    }
return 0;
}

/*11) Escreva um algoritmo em PORTUGOL que receba dez números do usuário e imprima
a metade de cada número.*/
#include <stdio.h>
int main (void)
{
    int i;
    float num;
    i=1;
    while (i<10)
    {
        printf ("Insira um número:");
        scanf ("%f",&num);
        printf ("A metade desse número é:%.1f\n",num/2);
        i++;
    }
return 0;
}

/*14) Escreva um algoritmo em PORTUGOL que receba quinze números do usuário e
imprima a raiz quadrada de cada número.*/

#include <stdio.h>
#include <math.h>
int main (void)
{
    float num;
    int i;
    i = 1;
    while (i<=15)
    {
        printf ("Insira um número:");
        scanf ("%f", &num);
        printf ("A raíz de %.1f é:%.1f\n",num,sqrt(num));
        i = i + 1;
    }
return 0;
}

/*15) Escreva um algoritmo em PORTUGOL que receba oito números do usuário e imprima
o logaritmo de cada um deles na base 10.*/

#include <stdio.h>
#include <math.h>
int main (void)
{
    float num;
    int i;
    i = 1;
    while (i<=8)
    {
        printf ("Insira um número:");
        scanf ("%f", &num);
        printf ("O logaritmo de %.1f é:%.1f\n",num,log10(num));
        i = i + 1;
    }
return 0;
}

/*16) Criar um algoritmo em PORTUGOL que imprima todos os números de 1 até 100,
inclusive, e a soma de todos eles.*/

#include <stdio.h>
int main (void)
{
    int num,cont;
    cont = 0;
    for (num=1;num<=100;num++)
    {
        printf ("%d ",num);
        cont = cont + num; 
    }
    printf ("\nA soma dos números de 1 a 100 é: %d",cont);
return 0;
}
//OU
#include <stdio.h>
int main (void)
{
    int num,cont;
    cont = 0;
    num = 1;
    while (num<=100)
    {
        printf ("%d ",num);
        num++;
        cont = cont + num; 
    }
    printf ("\nA soma dos números de 1 a 100 é: %d",cont);
return 0;
}

/*17) Criar um algoritmo em PORTUGOL que imprima todos os números de 1 até 100,
inclusive, e a soma do quadrado desses números.*/

/*18) Criar um algoritmo em PORTUGOL que imprima todos os números de 1 até 100,
inclusive, e a soma da metade desses números.*/

/*19) Criar um algoritmo em PORTUGOL que imprima todos os números de 1 até 100,
inclusive, e a soma do cubo desses números.*/

#include <stdio.h>
int main (void)
{
    int num, soma;
    num = 1;
    soma= 0;
    do {
        printf ("%d ",num);
        num++;
        soma = soma + num*num*num;
    } 
    while (num<=100);
    printf ("\nA soma do cubo dos números é:%d",soma);
    return 0;
}


//20) Criar um algoritmo em PORTUGOL que imprima todos os números de 1 até 100, inclusive, e a média de todos eles.

//30) 
#include <stdio.h>
int main (void)
{
    int num,cont,somap,totaln;
    totaln = 0;
    somap = 0;
    for (cont=1;cont<=4;cont++)
    {
        printf ("Insira um número:");
        scanf ("%d",&num);
        if (num>0)
            somap = somap + num;
        else if (num<0)
            totaln = totaln + 1;
    }
   printf ("A soma dos positivos é:%d",somap);
   printf ("\nA total dos negativos é:%d",totaln);
    return 0;
}