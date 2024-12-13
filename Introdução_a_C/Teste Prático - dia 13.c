/* 
    IFMA - Monte Castelo
    Curso: Sistemas de Informação - primeiro período
    Aluno: Saulo Ferro Maciel
    Atividade do dia 13 de Dezembro - Teste prático

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variavéis Globais
    int i, idadeMae, idade, idadeFilhoMeio = 0, idadeFilhoNovo = 0, idadeFilhoVelho = 0;
    float aresta, arestaA, arestaB, arestaC, arestaD;

    /* 1º) Descubra a idade do filho mais velho:*/
    printf("Descobrindo as idades\n\nDigite a idade da mãe:\n");
    scanf("%d", &idadeMae);

    // Lê as idades dos filhos
    for (int i = 1; i <= 2; i++) {
        printf("Digite a idade do %dº filho (a):\n", i);
        scanf("%d", &idade);

        if (i == 1) {
            idadeFilhoMeio = idade;  
        } else {
            if (idade < idadeFilhoMeio) {
                idadeFilhoNovo = idade;  
            } else {
                idadeFilhoVelho = idade;  // 
            }
        }
    }

    // Cálculo da idade do filho mais velho
    if (idadeFilhoVelho == 0) {
        idadeFilhoVelho = idadeMae - (idadeFilhoMeio + idadeFilhoNovo);  // Calcula a idade do filho mais velho
    }

    // Exibe os resultados
    printf("A mãe possui %d anos,\no filho mais velho possui %d anos,\no filho do meio possui %d anos,\no filho caçula tem %d anos\n", idadeMae, idadeFilhoVelho, idadeFilhoMeio, idadeFilhoNovo);


    /* 2º) Formando triângulos: */
    printf("\n\nFormando triângulos\n");

    for (i = 1; i <= 4; i++) {
        printf("Digite o valor da %dª aresta:\n", i);
        scanf("%f", &aresta);

        // Atribuir as arestas com base nos valores
        if (i == 1 || aresta < arestaA) {
            arestaD = arestaC;
            arestaC = arestaB;
            arestaB = arestaA;
            arestaA = aresta;
        } else if (i == 2 || aresta < arestaB) {
            arestaD = arestaC;
            arestaC = arestaB;
            arestaB = aresta;
        } else if (i == 3 || aresta < arestaC) {
            arestaD = arestaC;
            arestaC = aresta;
        } else {
            arestaD = aresta;
        }
    }

    printf("\nResultados dos triângulos:\n");

    // Verificar combinações para formar triângulos
    if (arestaA + arestaB > arestaC && arestaB + arestaC > arestaA && arestaA + arestaC > arestaB) {
        printf("Dá para fazer um triângulo com os valores: %.2f, %.2f, %.2f\n", arestaA, arestaB, arestaC);
    } else if (arestaA + arestaB > arestaD && arestaB + arestaD > arestaA && arestaA + arestaD > arestaB) {
        printf("Dá para fazer um triângulo com os valores: %.2f, %.2f, %.2f\n", arestaA, arestaB, arestaD);
    } else if (arestaA + arestaC > arestaD && arestaC + arestaD > arestaA && arestaA + arestaD > arestaC) {
        printf("Dá para fazer um triângulo com os valores: %.2f, %.2f, %.2f\n", arestaA, arestaC, arestaD);
    } else if (arestaB + arestaC > arestaD && arestaC + arestaD > arestaB && arestaB + arestaD > arestaC) {
        printf("Dá para fazer um triângulo com os valores: %.2f, %.2f, %.2f\n", arestaB, arestaC, arestaD);
    } else {
        printf("NÃO dá para fazer um triângulo com nenhuma combinação das arestas fornecidas.\n");
    }

    return 0;
}
