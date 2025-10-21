IPC - Lista de exercicio 2

//1)Escreva um algoritmo que leia um número e o imprima caso ele seja maior que 20.
#include <stdio.h>
int main (void) {
float num;
printf ("Insira um número:");
scanf ("%f", &num);
if (num > 20)
printf (" O número é: %.1f", num);
else
printf ("ERRO");
return 0;}

//2) Construa um algoritmo em que leia dois valores numéricos inteiros e efetue a adição; caso o resultado seja maior que 10, apresentá-lo.
#include <stdio.h>
int main (void)
{
   float num1, num2, calc;
    printf ("Insira dois números:");
    scanf ("%f %f", &num1, &num2);
    calc = num1 + num2;
    if (calc > 10)
        printf (" O número é: %.1f", calc);
    else 
        printf ("ERRO");
return 0;
}

//3) Construa um algoritmo que determine (imprima) se um dado número N inteiro (recebido através do teclado) é PAR ou ÍMPAR. 
#include <stdio.h>
int main (void) {
int num, calc;
printf ("Insira um número:");
scanf ("%d", &num);
calc = num % 2;
if (calc == 0)
printf ("O número é par");
else 
printf ("O número é impar"); }

//4) Escreva um algoritmo em PORTUGOL para determinar se um dado número N (recebido através do teclado) é POSITIVO, NEGATIVO ou NULO.
#include <stdio.h>
int main (void)
{
float num;
printf ("Insira um número:");
scanf ("%d", &num);
if (num > 0)
printf ("O número é positivo");
else 
if (num < 0)
printf ("O número é negativo");
else 
printf ("O número é nulo");
return 0;
}

/*5) Construir um algoritmo  que leia dois números e efetue a adição. Caso o valor somado seja maior que 20,
este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja menor ou igual a 20, este deverá 
ser apresentado subtraindo-se 5.*/
#include <stdio.h>
#include <math.h>
int main (void)
{
   float num1, num2, calc, calc2;
    printf ("Insira dois números:");
    scanf ("%f %f", &num1, &num2);
    calc = num1 + num2;
    if (calc > 20)
    {
        calc = num1 + num2 + 8;
        printf (" O valor final é: %f", calc);
    }
    else 
    {
        calc = num1 + num2 - 5;
        printf (" O valor final é: %f", calc);
    }
return 0;

/*6) Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso 
ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.*/
#include <stdio.h>
#include <math.h>
int main (void)
{
    float num, calc;
    printf ("Insira um número:");
    scanf ("%f", &num);
    if (num >= 0)
    {
        calc = sqrt (num);
        printf ("A raiz quadrada de %.1f é: %.1f", num, calc);
    }
    else 
    {
        calc = (num * num);
        printf ("O quadrado de %.1f é: %.1f", num, calc);
    }
return 0;
}

//7) Escreva um algoritmo  que receba um número e imprima uma das mensagens: “é múltiplo de 3” ou “não é múltiplo de 3”.
#include <stdio.h>
#include <math.h>
int main (void)
{
   int num, calc;
    printf ("Insira um número:");
    scanf ("%d", &num);
    calc = num % 3;
    if (calc == 0)
        printf (" %d é múltiplo de 3", num);
    else 
        printf (" %.1d não é múltiplo de 3", num);
return 0;
}

//8) Escreva um algoritmo que leia um número e informe se ele é ou não divisível por 5.
#include <stdio.h>
int main (void)
{
    int num;
    printf ("Insira um número:");
    scanf ("%d", &num);
    if (num % 5 == 0)
        printf ("O número %d é divisível por 5");
    else 
        printf ("O número %d não é divisível por 5");
return 0;
}

//9) Escreva um algoritmo para determinar se um número A é divisível por um outro número B. Esses valores devem ser fornecidos pelo usuário.
 #include <stdio.h>
int main (void)
{
    int num1, num2;
    printf ("Insira dois números:");
    scanf ("%d %d", &num1, &num2);
    if ((num1 % num2) == 0)
        printf ("O número %d é divisível por %d", num1, num2);
    else 
        printf ("O número %d não é divisível por %d", num1, num2);
return 0;
}

//10) Construa um algoritmo em PORTUGOL que imprima qual o menor e qual o maior valor de dois números A e B, lidos através do teclado.
#include <stdio.h>
int main (void)
{
    float A,B;
    printf ("Insira o priemiro número:");
    scanf ("%f",&A);
    printf ("Insira o segundo número:");
    scanf ("%f",&B);
    if (A>B)
        printf ("%.1f é maior do que %.1f.",A,B);
    else 
        printf ("%.1f é maior do que %.1f.",B,A);
return 0;
}
 

//11) Escreva um algoritmo em PORTUGOL que leia um número e informe se ele é divisível por 3 e por 7.
#include <stdio.h>
int main(void)
{  
    int num;
    printf("Insert 1 number:");
    scanf ("%d", &num);
    if (num % 3 == 0 && num % 7 == 0)
    printf ("É divisível");
    else
    printf ("Não é divisível");
    return 0;
}

/*12) A prefeitura de Contagem abriu uma linha de crédito para os funcionários estatutários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um
algoritmo que permita entrar com o salário bruto e o valor da prestação, e informar se
o empréstimo pode ou não ser concedido.*/
#include <stdio.h>
int main (void)
{
    float sb, vp;
    printf ("Insira o seu salário:");
    scanf ("%f", &sb);
    printf ("Insira o valor da prestação desejada:");
    scanf ("%f", &vp);
    if (vp <= (sb * 0.3))
    printf ("O empréstimo pode ser concedido.");
    else 
    printf ("O empréstimo não pode ser concedido.");
return 0;
}

/*13) Construa um algoritmo em PORTUGOL que dado quatro valores, A, B, C e D, o
algoritmo imprima o maior e o menor valor.*/
#include <stdio.h>
int main (void)
{
    float A,B,C,D,maior, menor;
    printf ("Insira 4 valores:");
    scanf ("%f %f %f %f",&A,&B,&C,&D);
    maior = A;
    menor = A;
    if (B>A) maior = B;
    if (C>A) maior = C;
    if (D>A) maior = D;
    
    if (B<A) menor = B;
    if (C<A) menor = C;
    if (D<A) menor = D;
    printf ("O maior termo é:%.1f\n", maior);
    printf ("O menor termo é:%.1f", menor);
return 0;
}

/*14)15) Dados três valores A, B e C, construa um algoritmo em PORTUGOL, que imprima os
valores de forma ascendente (do menor para o maior) e de forma descendente (do maior para o menor).*/
#include <stdio.h>
int main (void)
{
    float A,B,C,D,maior, menor, medio;
    printf ("Insira 3 valores:");
    scanf ("%f %f %f",&A,&B,&C);
    maior = A;
    medio = A;
    menor = A;
    if (B>maior) maior = B;
    if (C>maior) maior = C;
    
    if (B<menor) menor = B;
    if (C<menor) menor = C;
    
    medio = (A + B + C) - (maior + menor);
    
    printf ("Esses valores em forma ascendente são: %.1f %.1f %.1f\n", menor, medio, maior);
    printf ("Esses valores em forma descendente são: %.1f %.1f %.1f ", maior, medio, menor);
return 0; 
} 

//16) muito simples.

/*17) Escreva um algoritmo em PORTUGOL que leia um número e informe se ele é
divisível por 10, por 5 ou por 2 ou se não é divisível por nenhum deles.*/
#include <stdio.h>
int main (void)
{
    int num;
    printf ("Insira 1 valor:");
    scanf ("%d",&num);
   if (num % 10 == 0 || num % 5 == 0 || num % 2 == 0)
   printf ("O número %d é divisível", num);
   else 
   printf ("O número %d não é divisível", num);
return 0; 
} 


/*18) Construa um algoritmo em PORTUGOL que indique se um número digitado está
compreendido entre 20 e 90 ou não (20 e 90 não estão na faixa de valores).*/
#include <stdio.h>
int main (void)
{
    float num;
    printf ("Insira um número:");
    scanf ("%f", &num);
    if (num > 20 && num < 90)
    {     printf ("O número está entre 20 e 90");
    }
    else 
    { 
        printf ("O número não está entre 20 e 90");
    }
    return 0;
}

/*19) Construir um algoritmo  que leia um número e imprima se ele é igual
a 5, a 200, a 400, se está no intervalo entre 500 e 1000, inclusive, ou se ela está fora
dos escopos anteriores.*/
#include <stdio.h>
int main (void) 
{
    int num;
    printf ("Insira um número:");
    scanf ("%d",&num);
   if (num == 5)
        printf ("O número é igual a 5, e se encaixa nos padrões.");
   else
        if (num == 200)
            printf ("O número é igual a 200, e se encaixa nos padrões.");
   else
        if (num == 400)
            printf ("O número é igual a 400, e se encaixa nos padrões.");
   else
        if (num >= 500 && num <= 1000)
            printf ("O número está no intervalo entre 500 em 1000, inclusive, e se encaixa nos padrões.");
  else
            printf ("O número %d não se encaixa nos padrões.",num);
return 0; 
} 

/*20) Criar um algoritmo em PORTUGOL que leia dois números e imprimir o quadrado do
menor número e raiz quadrada do maior número, se for possível.*/
#include <stdio.h>
#include <math.h>
int main (void)
{
    float num1, num2, menor, maior;
    printf ("Insira 2 valores:");
    scanf ("%f %f", &num1,&num2);
    
   if (num1 < num2)
   {
       menor = num1;
       maior = num2;
   }
   else 
   {
   menor = num2;
   maior = num1;
   }
   
  menor = pow(menor,2);
  maior = sqrt(maior);
  
  printf ("O menor número, elevado ao quadrado, é igual a:%.1f\n",menor);
  printf ("A raiz quadrada do menor número é:%.1f",maior);
 return 0; 
}
 
// para elevações simples fazer somente x * x, puxar informações da biblioteca deixa o código mais lento

/*21)Construa um algoritmo de PORTUGOL para determinar se o indivíduo esta com um
peso favorável. Essa situação é determinada através do IMC (Índice de Massa
Corpórea), que é definida como sendo a relação entre o peso (PESO) e o quadrado da
Altura (ALTURA) do indivíduo. A situação do peso é determinada pela tabela abaixo:
Condição Situação
IMC abaixo de 20 Abaixo do peso
IMC de 20 até 25 Peso Normal
IMC de 25 até 30 Sobre Peso
IMC de 30 até 40 Obeso
IMC de 40 e acima Obeso Mórbido*/
#include <stdio.h>
int main (void)
{
    float altura, peso, imc;
    printf ("Insira a sua altura:");
    scanf ("%f", &altura);
    printf ("Insira a sua peso:");
    scanf ("%f", &peso);
    imc = peso / (altura * altura);
    if (imc<20)
        printf ("Seu imc é %.1f\n Você está abaixo do peso.",imc);
    else 
        if (imc<25)
            printf ("Seu imc é %.1f\n Você está com o peso normal.",imc);
    else 
        if (imc<30)
            printf ("Seu imc é %.1f\nVocê está com sobre peso.",imc);
    else 
        if (imc<40)
            printf ("Seu imc é %.1f\n Você está obeso.",imc);
    else 
            printf ("Seu imc é %.1f\n Você está obeso mórbido.",imc);
return 0;
}

/*22)Fazer um algoritmo em PORTUGOL que leia o
saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
Imprimir uma mensagem informando o saldo médio e o valor de crédito.
Saldo Médio Percentual
De 0 a 500 Nenhum crédito
De 501 a 1000 30% do valor do saldo médio
De 1001 a 3000 40% do valor do saldo médio
Acima de 3001 50% do valor do saldo médio*/
 #include <stdio.h>
int main (void)
{
    float saldo_m, credito;
    printf ("Insira o saldo médio:");
    scanf ("%f",&saldo_m);
    if (saldo_m <= 500)
        printf ("Você não possui nenhum crédito.");
    else 
        if (saldo_m <= 1000)
        {
            credito = saldo_m * 0.3;
            printf ("Você possui R$%.2f de crédito.",credito);
        }
    else 
        if (saldo_m <= 3000)
        {
            credito = saldo_m * 0.4;
            printf ("Você possui R$%.2f de crédito.",credito);
        }
    else
        {
            credito = saldo_m * 0.5;
            printf ("Você possui R$%.2f de crédito.",credito);
        }
return 0;        
}

/*23) Escreva um algoritmo em PORTUGOL que dada a idade de uma pessoa, determine
sua classificação segundo a seguinte tabela:
- maior de idade;
- menor de idade;
- pessoa idosa (idade superior ou igual a 65 anos).*/
#include <stdio.h>
int main (void)
{
    int idade;
    printf ("Insira sua idade:");
    scanf ("%d", &idade);
    if (idade >= 65)
        printf ("Você é uma pessoa idosa!");
    else
    
        if (idade < 18)
            printf ("Você é menor de idade!");
        else 
        printf ("Você é maior de idade!");
    
return 0;
}

/*24) Crie um algoritmo em PORTUGOL que leia a idade de uma pessoa e informe a sua
classe eleitoral:
- não eleitor (abaixo de 16 anos);
- eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
- eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive).*/
#include <stdio.h>
int main (void)
{
    int idade;
    printf ("Insira sua idade:");
    scanf ("%d", &idade);
    if (idade < 16)
        printf ("Você é não eleitor!");
    else
        if (idade >= 18 && idade < 65)
            printf ("Você é eleitor obrigatório!");
        else 
            printf ("Você é eleitor facultativo!");
    
return 0;
}

/*25) A confederação brasileira de natação irá promover eliminatórias para o próximo
mundial. Fazer um algoritmo em PORTUGOL que receba a idade de um nadador e
determine (imprima) a sua categoria segundo a tabela a seguir:
Categoria Idade
Infantil A 5 – 7 anos
Infantil B 8 – 10 anos
Juvenil A 11 – 13 anos
Juvenil B 14 – 17 anos
Sênior Maiores de 18 anos*/
#include <stdio.h>
int main (void)
{
    int idade;
    printf ("Insira a sua idade:");
    scanf ("%d", &idade);
    if (idade < 5)
        printf ("Você não tem idade suficiente para participar.");
    else
        if (idade <= 7)
            printf ("Você está na categoria Infantil A.");
    else 
        if (idade <= 10)
            printf ("Você está na categoria Infantil B.");
    else 
        if (idade <= 13)
            printf ("Você está na categoria Juvenil A.");
    else 
        if (idade <= 17)
            printf ("Você está na categoria Juvenil B.");
    else 
        printf ("Você está na categoria Sênior.");
return 0;
}

/*26) Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas
começaram a fazer pesquisas para descobrir um bom plano, não muito caro. Um
vendedor de um plano de saúde apresentou a tabela a seguir. Criar um algoritmo em
PORTUGOL que entre com a idade de uma pessoa e imprima o valor que ela deverá
pagar, segundo a seguinte tabela:
Idade Valor
Até 10 anos R$ 30,00
Acima de 10 até 29 anos R$ 60,00
Acima de 29 até 45 anos R$ 120,00
Acima de 45 até 59 anos R$ 150,00
Acima de 59 até 65 anos R$ 250,00
maior que 65 anos R$ 400,00*/
#include <stdio.h>
int main (void)
{
    int idade;
    printf ("Insira sua idade:");
    scanf ("%d", &idade);
    if (idade <= 10)
        printf ("Você deve pagar R$30,00.");
    else
        if (idade <= 29)
            printf ("Você deve pagar R$60,00.");
    else
        if (idade <= 45)
            printf ("Você deve pagar R$125,00.");
    else
        if (idade <= 59)
            printf ("Você deve pagar R$150,00.");
    else
        if (idade <= 65)
            printf ("Você deve pagar R$250,00.");
    else 
        printf ("Você deve pagar R$400,00.");
return 0;
}

/*27) Escreva um algoritmo em PORTUGOL que leia as duas notas bimestrais de um aluno
e determine a média das notas semestral. Através da média calculada o algoritmo deve
imprimir a seguinte mensagem: “Aprovado”, “Reprovado” ou em “Exame” (a média é
7 para Aprovação, menor que 3 para Reprovação e as demais em Exame).*/
#include <stdio.h>
int main (void)
{
    float nota1, nota2, media;
    printf ("Insira a primeira nota:");
    scanf ("%f", &nota1);
    printf ("Insira a segunda nota:");
    scanf ("%f", &nota2);
    media = (nota1 + nota2) / 2;
    if (media >= 7)
        printf ("Nota:%.1f\nAprovado.",media);
    else 
        if (media < 3)
            printf ("Nota:%.1f\nReprovado.",media);
    else 
            printf ("Nota:%.1f\nEm Exame.",media);
return 0;
}

/*28) Um comerciante calcula o valor da venda, tendo em vista a tabela a seguir:
Valor da Compra Valor da Venda
Valor < R$ 10,00 Lucro de 70%
R$ 10,00 ≤ Valor < R$ 30,00 Lucro de 50%
R$ 30,00 ≤ Valor < R$ 50,00 Lucro de 40%
Valor ≥ R$ 50,00 Lucro de 30%
Criar um algoritmo em PORTUGOL que leia o valor da compra e imprima o valor da
venda.*/
#include <stdio.h>
int main (void)
{
    float compra, venda;
    printf ("Insira o valor da compra:");
    scanf ("%f",&compra);
    if (compra < 10)
        {venda = compra * 0.7 + compra;
        printf ("O valor da venda é:R$%.2f",venda);}
    else 
        if (compra >= 10 && compra < 30)
            {venda = compra * 0.5 + compra;
            printf ("O valor da venda é:R$%.2f",venda);}
    else 
        if (compra <= 30 && compra < 50)
            {venda = compra * 0.4 + compra;
            printf ("O valor da venda é:R$%.2f",venda);}
    else 
            {venda = compra * 0.3 + compra;
            printf ("O valor da venda é:R$%.2f",venda);}
return 0;
    
}

/*29) Dado três valores, A, B e C, construa um algoritmo em PORTUGOL para verificar se
estes valores podem ser valores dos lados de um triângulo.*/
 #include <stdio.h>
int main (void)
{
    float valor1, valor2, valor3;
    printf ("Insira 3 valores:");
    scanf ("%f %f %f",&valor1, &valor2, &valor3);
    if (valor1 + valor2 + valor3 != 180)
        printf ("Esses valores não correspondem aos lados de um triângulo.");
    else 
        printf ("Esses valores correspondem aos lados de um triângulo.");
return 0;
}

/*30) Dado três valores, A, B e C, construa um algoritmo em PORTUGOL para verificar se
estes valores podem ser valores dos lados de um triângulo, e se for, se é um triângulo
escaleno, um triângulo eqüilátero ou um triângulo isósceles.*/
#include <stdio.h>
int main (void)
{
    float valor1, valor2, valor3;
    printf ("Insira 3 valores:");
    scanf ("%f %f %f",&valor1, &valor2, &valor3);
    if (valor1 == valor2 && valor1 == valor3)
        printf ("Triângulo equilátero.");
    else
        if (valor1 == valor2 || valor1 == valor3)
        printf ("Triângulo isosceles.");
    else 
        printf ("Triangulo escaleno");
return 0;
}

/*31) Dados três valores A, B e C, construa um algoritmo para verificar se
estes valores podem ser valores dos lados de um triângulo, e se for, classificá-los
(imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90o, Triângulo Obtusângulo
> 90o , Triângulo Acutângulo < 90o)*/

//32) repetitivo

//33)
#include <stdio.h>
int main (void)
{
    float x;
    printf ("Insira o valor de x:");
    scanf ("%f", &x);
    if (x <=1)
        printf ("O valor de f(x) é 1.");
    else
        if (x > 1 && x <= 2)
            printf ("O valor de f(x) é 2.");
    else
        if (x >2 && x <= 3)
        {
            x = x*x;
            printf ("O valor de f(x) é %.1f.",x);
        }
    else 
        {
            x = x*x*x;
            printf ("O valor de f(x) é %.1f.",x);
        }
return 0;
}

//34)
#include <stdio.h>
int main (void)
{
    float x, fx;
    printf ("Insira o x:");
    scanf ("%f",&x);
    fx = 8 / (2 - x);
    printf ("O valor de f(x) é:%.1f",fx);
return 0;
}

//35) 
#include <stdio.h>
#include <math.h>
int main (void)
{
    float x, fx;
    printf ("Insira o x:");
    scanf ("%f",&x);
    fx = 5 * x + 3 / sqrt (x*x-16);
    printf ("O valor de f(x) é:%.1f",fx);
return 0;
}

//36)
#include <stdio.h>
#include <math.h>
int main (void)
{
    float a, b, c, bask, r1,r2;
    printf ("Insira a, b, c, respectivamente: ");
    scanf ("%f %f %f",&a,&b,&c);
    bask = b*b - 4*a*c;
    r1= (sqrt(bask) + b) / (2 * a);
    r2= (sqrt(bask) - b) / (2 * a);
    printf ("As raízes dessa equação são:%.1f e %.1f.",r1,r2);
return 0;
}

//37) 
#include <stdio.h>
int main (void)
{
    float peso,gotas;
    int idade;
    printf ("Insira a idade do paciente:");
    scanf ("%d",&idade);
    printf ("Insira o peso do paciente:");
    scanf ("%f", &peso);
    if (idade >= 12 && peso >= 60)
        { gotas = 1000 / 25;
        printf ("O paciente deve tomar %.1f gotas por dose.",gotas);
        }
    else if (idade >= 12 && peso < 60)
        { gotas = 875 / 25;
        printf ("O paciente deve tomar %.1f gotas por dose.",gotas);
        }
    else if (idade < 12 && peso <=9)
        { gotas = 125 / 25;
        printf ("O paciente deve tomar %.1f gotas por dose.",gotas);
        }
    else if (idade < 12 && peso <=16)
        { gotas = 250 / 25;
        printf ("O paciente deve tomar %.1f gotas por dose.",gotas);
        }  
    else if (idade < 12 && peso <=24)
        { gotas = 375 / 25;
        printf ("O paciente deve tomar %.1f gotas por dose.",gotas);
        }  
    else if (idade < 12 && peso <=30)
        { gotas = 500 / 25;
        printf ("O paciente deve tomar %.1f gotas por dose.",gotas);
        } 
    else 
        { gotas = 750 / 25;
        printf ("O paciente deve tomar %.1f gotas por dose.",gotas);
        }
return 0;
}

//38) 
#include <stdio.h>
int main (void)
{
    float nota, freq;
    printf ("Insira sua nota:");
    scanf ("%f",&nota);
    printf ("Insira sua frequência:");
    scanf ("%f",&freq);
    if (freq <= 75)
    printf ("Reprovado.");
    else if (freq > 75 && nota <= 3)
    printf ("Reprovado.");
    else if (freq > 75 && nota > 3 && nota <= 7)
    printf ("Em exame.");
    else 
    printf ("Aprovado.");
return 0;
}

//39) 
#include <stdio.h>
int main (void)
{
    float prato, sobremesa, bebida, cal;
    printf ("Insira o número do seu prato:");
    scanf ("%f",&prato);
    printf ("Insira o número do sua sobremesa:");
    scanf ("%f",&sobremesa);
    printf ("Insira o número do seu bebida:");
    scanf ("%f",&bebida);
    if (prato == 1)
    {
        prato = 180;
    }
    else if (prato == 2)
    {
        prato = 230;
    }
    else if (prato == 3)
    {
        prato = 250;
    }
    else
    {
        prato = 350;
    }
    if (sobremesa == 1)
    {
        sobremesa = 75;
    }
    else if (sobremesa == 2)
    {
        sobremesa = 110;
    }
    else if (sobremesa == 3)
    {
        sobremesa = 170;
    }
    else 
    {
        sobremesa = 200;
    }
    if (bebida == 1)
    {
        bebida = 20;
    }
    else if (bebida == 2)
    {
        bebida = 70;
    }
    else if (bebida == 3)
    {
        bebida = 100;
    }
    else 
    {
        bebida = 65;
    }
    
    cal = prato + sobremesa + bebida;
    printf ("O total de calorias do seu pedido é:%.1f",cal);
return 0;
}

//40) 
#include <stdio.h>
int main (void)
{
    int destino, retorno;
    printf ("TABELA\n");
    printf ("Ida\n");
    printf ("1) Região Norte\n");
    printf ("2) Região Nordeste\n");
    printf ("3) Região Centro-Oeste\n");
    printf ("4) Região Sul\n");
    printf ("\nInsira o seu destino (1,2,3 ou 4):");
    scanf ("%d", &destino);
    printf ("Sua viagem inclui retorno? Digite 1 para sim e 2 para não:");
    scanf ("%d", &retorno);
    if (retorno == 2)
    { if (destino == 1)
            printf ("O valor da sua passagem, só de ida, para a região norte é: R$ 500.");
        else if (destino == 2)
            printf ("O valor da sua passagem, só de ida, para a região nordeste é: R$ 350.");
        else if (destino == 3)
            printf ("O valor da sua passagem, só de ida, para a região centro-oeste é: R$ 350.");
        else if (destino == 4)
            printf ("O valor da sua passagem, só de ida, para a região sul é: R$ 300.");
    }
    else if (retorno == 1)
    { if (destino == 1)
            printf ("O valor da sua passagem, ida e volta, para a região norte é: R$ 900.");
        else if (destino == 2)
            printf ("O valor da sua passagem, ida e volta, para a região nordeste é: R$ 650.");
        else if (destino == 3)
            printf ("O valor da sua passagem, ida e volta, para a região centro-oeste é: R$ 600.");
        else if (destino == 4)
            printf ("O valor da sua passagem, ida e volta, para a região sul é: R$ 550.");  
    }
return 0;
}

//41)
#include <stdio.h>
int main (void)
{
    int dia;
    printf ("Insira um número:");
    scanf ("%d",&dia);
    if (dia == 1)
        printf ("Segunda-feira");
    else if (dia == 2)
        printf ("Terça-feira");
    else if (dia == 3)
        printf ("Quarta-feira");
    else if (dia == 4)
        printf ("Quinta-feira");
    else if (dia == 5)
        printf ("Sexta-feira");
    else if (dia == 6)
        printf ("Sábado");
    else if (dia == 1)
        printf ("Domingo");
    else 
        printf ("Não existe um dia da semana com esse número.");
return 0;
}

/*42) Criar um algoritmo que leia o número correspondente ao mês atual e
os dígitos (somente os quatro números) de uma placa de veículo, e através do número
finalizador da placa (algarismo da casa das unidades) determine se o IPVA do veículo
vence no mês corrente.*/

Final 1 – mês (1) – Janeiro Final 6 – mês (6) – Junho
Final 2 – mês (2) – Fevereiro Final 7 – mês (7) – Julho
Final 3 – mês (3) – Março Final 8 – mês (8) – Agosto
Final 4 – mês (4) – Abril Final 9 – mês (9) – Setembro
Final 5 – mês (5) – Maio Final 0 – mês (10) – Outubro

#include <stdio.h>
int main (void)
{
    int mes_atual, placa, mes_venc;
    printf ("Insira o mês atual:");
    scanf ("%d", &mes_atual);
    printf ("Insira a placa do seu veículo:");
    scanf ("%d", &placa);
    mes_venc = placa % 10;
    if (mes_atual == mes_venc)
        printf ("O IPVA vence neste mês.");
    else if (mes_venc == 0)
        printf ("O IPVA vence neste mês.");
    else
        printf ("O IPVA não vence neste mês.");
return 0;
}

//43) 
#include <stdio.h>
int main (void)
{
    float peso, planeta;
    printf ("# Planeta\n");
    printf ("1 Mercúrio\n");
    printf ("2 Vênus\n");
    printf ("3 Marte\n");
    printf ("4 Júpiter\n");
    printf ("5 Saturno\n");
    printf ("6 Urano\n");
    printf ("Insira um peso:");
    scanf ("%f",&peso);
    printf ("Insira o número de um planeta:");
    scanf ("%f",&planeta);
    if (planeta == 1)
    {
        peso = peso * 0.37;
        printf ("Seu peso nesse planeta seria:%.1f",peso);
    }
    else if (planeta == 2)
    {
        peso = peso * 0.88;
        printf ("Seu peso nesse planeta seria:%.1f",peso);
    }
    else if (planeta == 3)
    {
        peso = peso * 0.38;
        printf ("Seu peso nesse planeta seria:%.1f",peso);
    }
    else if (planeta == 4)
    {
        peso = peso * 2.64;
        printf ("Seu peso nesse planeta seria:%.1f",peso);
    }
    else if (planeta == 5)
    {
        peso = peso * 1.15;
        printf ("Seu peso nesse planeta seria:%.1f",peso);
    }
    else
    {
        peso = peso * 1.17;
        printf ("Seu peso nesse planeta seria:%.1f",peso);
    }
return 0;
}

//44)
#include <stdio.h>
int main (void)
{
    int num;
    printf ("Insira um número:");
    scanf ("%d",&num);
    if (num == 1)
        printf ("Janeiro");
    else if (num == 2)
        printf ("Fevereiro");
    else if (num == 3)
        printf ("Março");
    else if (num == 4)
        printf ("Abril");
    else if (num == 5)
        printf ("Maio");
    else if (num == 6)
        printf ("Junho");
    else if (num == 7)
        printf ("Julho");
    else if (num == 8)
        printf ("Agosto");
    else if (num == 9)
        printf ("Setembro");
    else if (num == 10)
        printf ("Outubro");
    else if (num == 11)
        printf ("Novembro");
    else if (num == 12)
        printf ("Dezembro");
    else 
        printf ("Não existe mês com esse número.");
return 0;
}