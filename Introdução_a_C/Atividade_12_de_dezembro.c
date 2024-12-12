/*
    IFMA - Monte Castelo
    Curso: Sistemas de Informação - primeiro período
    Aluno: Saulo Ferro Maciel
    Atividade do dia 12 de Dezembro - Teste prático

    1) A turma de Fundamentos de Programação tem apenas 5 alunos. 
    Cada um deles recebeu uma nota pelo seu trabalho final da disciplina. 
    Faça um algoritmo que leia as notas dos 5 alunos desta turma e mostre a maior nota, 
    a menor nota e a média aritmética da turma.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int cont, i;
    float nota, maiorNota, menorNota, soma = 0, media;

    // A primeira pergunta é para colocar a quantidade de alunos na sala.
    printf("Digite a quantidade de alunos com notas a serem calculadas na média:\n");
    scanf("%d", &cont);

    if (cont <= 0) {
        printf("Quantidade inválida! Tente novamente com um número positivo.\n");
        return 1;
    }

    printf("Digite as notas:\n");

    for (i = 1; i <= cont; i++) {
        printf("Digite a %dª nota:\n", i);
        scanf("%f", &nota);

        // Inicializar maiorNota na primeira iteração
        if (i == 1) {
            maiorNota = nota;
        }

        // Atualiza maiorNota, se necessário
        if (nota > maiorNota) {
            maiorNota = nota;
        } else if (nota < maiorNota) {
            menorNota = nota;
        }

        soma += nota;
    }

    media = soma / cont;

    if (cont == 1) {
        printf("A média da única nota é: %.2f\n", nota);
    } else {

        printf("A média das notas é: %.2f\n", media);
    }

    printf("A maior nota digitada foi: %.2f\n\nA menor nota é %.2f\n", maiorNota,menorNota);

    return 0;
}
