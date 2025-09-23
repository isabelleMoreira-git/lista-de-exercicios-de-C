//Lista de Exercícios 01 – Algoritmos – Sequência Simples

/*1) Uma P.A. (progressão aritmética) fica determinada pela sua razão (r)
 e pelo primeiro termo(a1). Escreva um algoritmo que seja capaz de determinar qualquer
termo de uma P.A., dado a razão e o primeiro termo. an = a1 + (n-1) * r */

#include <stdio.h>
int main() 
{
  	float an, a1, r, n;
  	printf ("Digite o primeiro termo da progressão aritmética:");
  	scanf ("%f", &a1);
  	printf ("Digite a razão:");
  	scanf ("%f", &r);
  	printf ("Digite a posição do termo desejado:");
  	scanf ("%f", &n);
  	an = a1 + (n-1) * r;
  	printf ("O termo da P.A é:%.0f", an);
return 0;
}

/*2) 5) Uma P.G. (progressão geométrica) fica determinada pela sua razão (q) e pelo primeiro termo (a1).
 Escreva um algoritmo  que seja capaz de determinar qualquer termo de uma P.G., dado a razão e o primeiro termo. 
Incluímos <math.h> para usar a função pow(base, expoente), que calcula potências.
Pedimos ao usuário os valores de a1, q e n.
Calculamos an usando a1 * pow(q, n - 1).*/

#include <stdio.h>
#include <math.h>
int main() 
{
    float a1, q, n, an;
    printf("Insira o primeiro termo:");
    scanf ("%f", &a1);
    printf("Insira a razão:");
    scanf("%f", &q);
    printf ("Insira o termo que você quer descobrir:");
    scanf("%f", &n);
    an = a1 * pow(q, n-1);
    printf ("O termo %.1f da progressão aritmética é:%.1f", n, an);
    return 0;
}

/*3) Dada a razão de uma P.A. (progressão aritmética) e um termo qualquer, k (ak). Escreva
um algoritmo  para calcular qualquer outro termo, n, (an).  an = ak + (n-k) * r
an = termo geral (o termo que queremos encontrar)
ak = termo conhecido na sequência x
n = posição do termo que queremos encontrar 
k = posição do termo conhecido x
r = razão da progressão aritmética x */
#include <stdio.h>
int main() {
    float an, ak, n, k, r;
    printf ("Digite o termo conhecido na sequência:");
    scanf ("%f", &ak);
    printf ("Digite a posição do termo conhecido:");
    scanf ("%f", &k);
    printf ("Digite a razão da P.A:");
    scanf ("%f", &r);
    printf ("Digite a posição do termo desejado:");
    scanf ("%f", &n);
    an = ak + (n-k) * r;
    printf ("O termo da posição %.0f é: %.1f", n, an);
    return 0;
}

/*4) Dada a razão de uma P.G. (progressão geométrica) e um termo qualquer, k (ak).
Escreva um algoritmo  para calcular qualquer outro termo, n, (an). an = ak * q^(n-k);*/
#include <stdio.h>
#include <math.h>
int main() {
    float ak, an, q;
    int k,n;
    printf ("Insert the commom difference:");
    scanf ("%f", &q);
    printf ("Insert the known number:");
    scanf ("%f", &ak);
    printf ("Insert the knowm number's position:");
    scanf ("%d", &n);
    printf ("Insert the wanted number's position:");
    scanf ("%d", &k);
    an = ak * pow(q, k-n);
    printf ("The number on the %.0d position is: %.1f", k, an);
    return 0;
}

/*6) 7) 8) 9) 10) Considere que o número de uma placa de veículo é composto por quatro algarismos.
Construa um algoritmo que leia este número e apresente o algarismo correspondente à casa das unidades, 
das dezenas, das centenas e dos milhares.*/
#include <stdio.h>
int main() {
    int c1,c2,c3,c4;
    printf ("Insira a placa do veiculo:");
    scanf ("%d %d %d %d",&c1,&c2,&c3,&c4);
    printf ("O algarismo na casa do milhar é:%d\n", c1);
    printf ("O algarismo na casa do centena é:%d\n", c2);
    printf ("O algarismo na casa do dezena é:%d\n", c3);
    printf ("O algarismo na casa do unidade é:%d\n", c4);
    return 0;
}

/*11) Escreva um algoritmo que leia um número inteiro e imprima o seu
sucessor e seu antecessor.*/

#include <stdio.h>
int main() {
    int num, suc, ant;
    printf ("Insira um número:");
    scanf ("%d",&num);
    suc = num + 1;
    ant = num - 1;
    printf ("O sucessor de %d é:%d\n", num, suc);
    printf ("O antecessor de %d é:%d", num, ant);
  
    return 0;
}

/*12)  Escreva um algoritmo que leia dois números inteiros e imprima o
resultado da soma destes dois valores. Antes do resultado, deve ser impressa a
seguinte mensagem “SOMA”.*/

#include <stdio.h>
int main() {
    int num1, num2, calc;
    printf ("Insira dois números:");
    scanf ("%d %d",&num1, &num2);
    calc = num1 + num2;
    printf ("SOMA = %d", calc);
    return 0;
}

/*13) Escreva um algoritmo em PORTUGOL que leia um número real e imprima a terça
parte deste número.*/
#include <stdio.h>
int main (void)
{
    float num, calc;
    printf ("Insira um número:");
    scanf ("%f", &num);
    calc = num / 3;
    printf ("%.1f", calc);
return 0;
}

/*14) Escreva um algoritmo em PORTUGOL que leia dois números reais e imprima a média
aritmética entre esses dois valores com a seguinte mensagem “MEDIA” antes do
resultado.*/

#include <stdio.h>
int main (void)
{
    float num1, num2, media;
    printf ("Insira dois números:");
    scanf ("%f %f", &num1, &num2);
    media = (num1 + num2) / 2 ;
    printf ("Média:%.1f", media);
return 0;
}


/*15) Escreva um algoritmo que leia dois números reais e imprima a média
aritmética entre esses dois valores com a seguinte mensagem “MEDIA” antes do
resultado.*/
#include <stdio.h>
int main()
{
    float num1, num2, calc;
    printf("Digite 2 numeros:");
    scanf ("%f %f", &num1, &num2);
    calc = (num1 + num2) / 2;
    printf ("A média é:%.1f", calc);
    
    return 0;
}

/*16)*/
#include <stdio.h>
int main (void)
{
    float a1, an, n, sn;
    printf ("Insira a quantidade de termos:");
    scanf ("%f", &n);
    printf ("Insira o primeiro termo:");
    scanf ("%f", &a1);
    printf ("Insira o ultimo termo:");
    scanf ("%f", &an);
    sn = ((a1+an) * n) / 2;
    printf ("Soma:%.1f", sn);
return 0;
}

/*17)20) Seja uma seqüência A,B,C, ... determinando um Progressão Aritmética (P.A.), o termo
médio (B) de uma P.A. é determinado pela média aritmética de seus termos, sucessor
(C) e antecessor (A). Com base neste enunciado construa um algoritmo em
PORTUGOL que calcule o termo médio (B) através de A, C.*/
#include <stdio.h>
int main (void)
{
    float a, b ,c;
    printf ("Insira a:");
    scanf ("%f", &a);
    printf ("Insira c:");
    scanf ("%f", &c);
    b = (a + c) /2;
    printf ("b:%.1f", b);
return 0;
}

/*18) Seja uma seqüência A,B,C, ... determinando um Progressão Geométrica (P.G.), o
termo médio (B) de uma P.G. é determinado pela média geométrica de seus termos,
sucessor (C) e antecessor (B). Com base neste enunciado construa um algoritmo em
PORTUGOL que calcule o termo médio (B) através de A, C. B^2 = a x c */
#include <stdio.h> 
#include <math.h>
int main (void)
{
    float a, b, c, calc;
    printf ("Insira o primeiro termo:");
    scanf ("%f", &a);
    printf ("Insira o terceiro termo:");
    scanf ("%f", &c);
    b = sqrt(a*c);
    printf ("O segundo termo é:%.2f", b);
return 0;
}

/*19) O produto de uma série de termos de uma Progressão Geométrica (P.G.) pode ser
calculado pela fórmula abaixo:*/
#include <stdio.h>
#include <math.h>
int main (void)
{
    float p, a1, n, q;
    printf ("Insira o primeiro termo:");
    scanf ("%f", &a1);
    printf ("Insira o número de termos:");
    scanf ("%f", &n);
    printf ("Insira a razão:");
    scanf ("%f", &q);
    p = pow(a1,n) * pow(q, n*(n-1)/2);
    printf ("O produto dos primeiros termos é:%f",p);
return 0;
}

/*21) Faça um algoritmo em PORTUGOL que possa entrar
com o valor de um produto e imprima o novo valor tendo em vista que o desconto foi
de 9%. Além disso, imprima o valor do desconto.*/
#include <stdio.h>
int main (void)
{
    float valor_p, valor_n, desc;
    printf ("Insira o valor do produto:");
    scanf ("%f", &valor_p);
    valor_n = valor_p * 0.9;
    desc = valor_p - valor_n;
    printf ("O valor do desconto é:%.1f\n", desc);
    printf ("O valor final é:%.2f",valor_n);
return 0;
}

/*22) Criar um algoritmo  que efetue o cálculo do salário líquido de um  professor. 
Os dados fornecidos serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.*/
 #include <stdio.h>
int main ()
{ 
    float vha, nad, desc, calc, calcf;
    printf ("Qual é o valor da hora/aula?:");
    scanf ("%f", &vha);
    printf ("Qual o numero de aulas dadas?:");
    scanf ("%f", &nad);
    printf ("Qual o percentual do INSS?:");
    scanf ("%f", &desc);
    calc = vha * nad;
    desc= calc * desc;
    calcf= calc - desc;
    printf ("O salário liquido é:%.1f", calcf);
    return 0;
}

/*23)25) Escreva um algoritmo em PORTUGOL que leia uma temperatura em gruas
centígrados e apresente a temperatura convertida em graus Fahrenheit. A fórmula
 em fahrenheit é:  F = (9 * C + 160) /5 */

#include <stdio.h>
int main (void)
{
    float F, C;
    printf ("Insira uma temperatura:");
    scanf ("%f", &C);
    F = (9 * C + 160) /5;
    printf ("A temperatura %.1f, em graus Fahrenheit, é: %.1f", C,F);
return 0;
}

/*24)*/
#include <stdio.h>
int main (void)
{
    float V, R, H;
    printf ("Insira o raio da lata de oléo:");
    scanf("%f", &R);
    printf ("Insira a altura da lata de oléo:");
    scanf ("%f", &H);
    V = 3.14 * R * H;
     printf ("O volume da lata de oléo é:%.2f",V);
return 0;
}

/*26)*/
#include <stdio.h>
int main (void)
{
    float a, b, aux;
    printf ("Insira o valor de A:");
    scanf ("%f", &a);
    printf ("Insira o valor de B:");
    scanf ("%f", &b);
    aux = a;
    a = b;
    b = aux;
    printf ("A e B:%.1f %.1f", a,b);
return 0;
}

/*27) Criar um algoritmo que leia o numerador e o denominador de uma fração e transforme
esses valores em um número racional.*/

#include <stdio.h>
int main ()
{
    float num, den, calc;
    printf ("Insira o numerador:");
    scanf ("%f", &num);
    printf ("Insira o denominador:");
    scanf ("%f", &den);
    calc = num / den;
    printf ("O resultado é:%.1f", calc);
    return 0;
}

/*28) Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de
comissão para o garçom. Crie um algoritmo que leia o valor gasto com despesas realizadas 
em um restaurante e imprima o valor da gorjeta e o valor total com a gorjeta.*/
#include <stdio.h>
int main()
 {
  	float despesa, valor_final, comissao;
   	printf ("Digite a despesa:");
 	scanf ("%f", &despesa);
 	comissao = (despesa * 0.1);
   	printf ("O valor da comissão é:%.2f\n", comissao);
   	valor_final = comissao + despesa;
  	printf ("O valor da comissão é:%.2f\n", valor_final);
 return 0;
}

/*29)30)*/
#include <stdio.h>
int main (void)
{
    float hora, minutos, total;
    printf ("Que horas são?\n");
    scanf ("%f:%f",&hora,&minutos);
    total = (hora * 60) + minutos;
    printf ("o total de minutos se passaram desde o início do dia é:%.0f", total);
return 0;
}

/*31)35)*/
#include <stdio.h>
int main (void)
{
    float dep,taxa,rend,vt;
    printf ("Insira o valor do depósito:");
    scanf ("%f", &dep);
    printf ("Insira o valor da taxa de juros:");
    scanf ("%f", &taxa);
    rend = dep * taxa;
    vt = rend + dep;
    printf ("O valor do rendimento é:%.1f", rend);
    printf ("O valor total é:%.1f", vt);
return 0;
}


/*32) Para vários tributos, a base de cálculo é o salário mínimo. Fazer um algoritmo que 
leia o valor do salário mínimo e o valor do salário de uma pessoa.Calcular e imprimir 
quantos salários mínimos essa pessoa ganha.*/
#include <stdio.h>
int main()
{
   	float salario_minimo, seu_salario, calculo;
   	salario_minimo = 1509;
   	printf ("Quanto você ganha?:");
   	scanf ("%f", &seu_salario);
   	calculo = seu_salario / salario_minimo;
   	printf ("Você ganha %.0f salários", calculo);
 return 0;
}


/*33) Criar um algoritmo em PORTUGOL que efetue o cálculo da quantidade de litros de
combustível gastos em uma viagem, sabendo-se que o carro faz 12 km com um litro.
Deverão ser fornecidos o tempo gasto na viagem e a velocidade média.
Distância = Tempo x Velocidade.
Litros = Distancia / 12.
O algoritmo deverá apresentar os valores da Distância percorrida e a quantidade de
Litros utilizados na viagem.*/
 #include <stdio.h>
int main (void)
{
    float d,t,v,l;
    printf ("Insira o tempo gasto na viagem:");
    scanf ("%f",&t);
    printf ("Insira a velocidade média:");
    scanf ("%f",&v);
    d = t * v;
    l = d / 12;
    printf ("A distância percorria é: %.1fkm\n",d);
    printf ("A quantidade de litros utilizados na viagem é: %.1fL\n",l);
return 0;
}

/*34)Antes de o racionamento de energia ser decretado, quase ninguém falava em
quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabulário. Sabendo-
se que 100 quilowatts de energia custa um sétimo do salário mínimo, fazer um
algoritmo em PORTUGOL que receba o valor do salário mínimo e a quantidade de
quilowatts gasta por uma residência e calcule (imprima).
- o valor em reais de cada quilowatt;
- o valor em reais a ser pago;
- o novo valor a ser pago por essa residência com um desconto de 10%.*/
 #include <stdio.h>
int main (void)
{
    float sm, qqg, vq,vt,vtd;
    printf ("Insira o salário mínimo:");
    scanf ("%f", &sm);
    printf ("Insira a quantidade de quilowatts gasta:");
    scanf ("%f", &qqg);
    vq = (sm/7) / 100;
    vt = vq * qqg;
    vtd = vt - (vt * 0.1) ;
    printf ("O valor, em reais, de cada quilowatt é:R$%.1f\n",vq);
    printf ("O valor, em reais, a ser pago é:R$%.1f\n",vt);
    printf ("O valor final, com desconto, é:R$%.1f\n",vtd);
return 0;
}

