/*
    IFMA - Monte Castelo
    Curso: Sistemas de Informação - primeiro período
    Aluno: Saulo Ferro Maciel
    Lista de Exercícios - Nível 0
    Converter Portugol para C
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    
    float nota, soma, media, area, lado, base, reais, dolar, cotacao = 6.06, temp, fahrenheit, kevin;
    int cont, i, anoUser, anoAtual = 2024;
    double raio;

    /* 1ª) Programa de médias ponderadas */
    printf("Digite a quantidade de notas a serem calculadas na média:\n");scanf("%d",&cont);
    for (i = 1; i <= cont; i++) {
        printf("Digite a %dª nota:\n", i);scanf("%f",&nota);
        soma = soma + nota;
    }
    media = soma/cont;
    if (cont <= 1){
        printf("A média da nota é %.2f\n",nota);
    } else {
        printf("A média é igual: %.2f\n",media);
    }

    /* 2ª) Área de um retângulo */
    printf("\nCalcular Área de um retângulo\nDigite o valor da BASE:\n");scanf("%f",&base);
    printf("Digite o valor da ALTURA:\n");scanf("%f",&lado);
    area = base*lado; printf("A área do retângulo solicitado é: %.2f\n",area);

    /* 3ª) Conversor de moeda */
    printf("\nConversor de moedas\nDigite a quantidade de reais (R$) a serem convertidos:\n");scanf("%f", &reais); 
    if (1 >= reais){
        printf("A quantia de R$ %.2f em dólar é $ %.2f\n", reais, cotacao);
    } else {
        dolar = reais / cotacao; 
        printf("A quantia de R$ %.2f em dólar é $ %.2f\n", reais, dolar);
    }

    /* 4ª) Conversão de temperatura */
    printf("\nConversão de temperatura\nDigite a temperatura em Cº para converte:\n");scanf("%f",&temp);
    kevin = temp +273.15; fahrenheit = (temp*9/5)+32;
    printf("A temperatura em %.2fCº fica:\n%.2fKº\n%.2fFº\n",temp,kevin,fahrenheit);

    /* 5ª) Calcular perimetro de um circulo */
    printf("\nCalcular a área de um círculo\nDigite o tamanho do RAIO:\n");scanf("%lf",&raio);
    raio = raio * raio; area = 3.14* raio;
    printf("A Área do círculo é: %.2f\n",area);

    /* 6ª) Calcular par ou ímpar */
    printf("\nPar ou Ímpar?\nDigite um número:\n");scanf("%d",&i);
    cont = i%2;
    if (cont == 0){
        printf("O número é par\n");
    } else if (cont == 1){ printf("É ímpar\n");}

    /* 7ª) Calcular idade */
    printf("\nQual sua idade?\nDigite o ano em que você nasceu:\n");scanf("%d",&anoUser);
    printf("Você tem %d anos de idade.\n",anoAtual-anoUser);

    return 0;
}
