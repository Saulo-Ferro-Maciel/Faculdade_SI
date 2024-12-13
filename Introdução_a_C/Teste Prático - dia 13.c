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
    int i, idadeMae, idade, idadeFilhoMeio, idadeFilhoNovo, idadeFilhoVelho;
    float aresta, arestaA, arestaB, arestaC, arestaD;

    /* 1º) Descubra a idade do filho mais velho:*/
    for (i=1;i <= 3; i++){
        if (i==1){
            printf("Descobrindo as idades\n\nDigite a idade da mãe:\n");scanf("%d",&idadeMae);
        }
        printf("Digite a idade do %dº filho (a):\n",i);scanf("%d",&idade);
        if(idade < idadeMae){
            idadeFilhoMeio = idade;
        } 
        if (idadeFilhoMeio > idade < idadeMae){
            idadeFilhoNovo = idade;
        }
    }
    idadeFilhoVelho = idadeMae-(idadeFilhoMeio+idadeFilhoNovo);
    printf("A mãe possuí %d anos,\no filho mais velho possuí %d anos,\no filho do meio possuí %d anos,\no filho caçula tem %danos",idadeMae,idadeFilhoVelho,idadeFilhoMeio,idadeFilhoNovo);


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
