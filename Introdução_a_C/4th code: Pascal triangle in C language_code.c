/*
    Instituto Federal do Maranhão - Campi Monte Castelo
    Curso: Sistema de informações - Cidade: São Luís/MA/Brasil
    Aluno: Saulo Ferro Maciel

    Atividade para Casa: Fazer um código que exibe o Triângulo de Pascal
*/

#include <stdio.h>
#include <locale.h>

// Função para exibir o Triângulo de Pascal
void exibirTrianguloDePascal(int degraus) {
    printf("\nAqui está o Triângulo de Pascal com %d degraus:\n\n",degraus);
    for (int cont = 0; cont < degraus; cont++) {
        int coef = 1; // Primeiro coeficiente é sempre 1
        // Espaços para alinhamento
        for (int espacamento = 0; espacamento < degraus - cont - 1; espacamento++) {
            printf(" ");
        }
        /*
            Calcula os elementos dos degrais, Paparisawa é numéros em Tupi
        */
        for (int paparisawaCof = 0; paparisawaCof <= cont; paparisawaCof++) {
            printf("%d ", coef);
            // Atualiza o coeficiente usando a fórmula iterativa
            coef = coef * (cont - paparisawaCof) / (paparisawaCof + 1);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para armazenar o número de degraus
    int degraus;

    printf("Digite quantos degraus do Triângulo de Pascal devo exibir:\nR= ");
    scanf("%d", &degraus);
    exibirTrianguloDePascal(degraus);

    return 0;
}/*
    Instituto Federal do Maranhão - Campi Monte Castelo
    Curso: Sistema de informações - Cidade: São Luís/MA/Brasil
    Aluno: Saulo Ferro Maciel

    Atividade para Casa: Fazer um código que exibe o Triângulo de Pascal
*/

#include <stdio.h>
#include <locale.h>

// Função para exibir o Triângulo de Pascal
void exibirTrianguloDePascal(int degraus) {
    printf("\nAqui está o Triângulo de Pascal com %d degraus:\n\n",degraus);
    for (int cont = 0; cont < degraus; cont++) {
        int coef = 1; // Primeiro coeficiente é sempre 1
        // Espaços para alinhamento
        for (int espacamento = 0; espacamento < degraus - cont - 1; espacamento++) {
            printf(" ");
        }
        /*
            Calcula os elementos dos degrais, Paparisawa é numéros em Tupi
        */
        for (int paparisawaCof = 0; paparisawaCof <= cont; paparisawaCof++) {
            printf("%d ", coef);
            // Atualiza o coeficiente usando a fórmula iterativa
            coef = coef * (cont - paparisawaCof) / (paparisawaCof + 1);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Variável para armazenar o número de degraus
    int degraus;

    printf("Digite quantos degraus do Triângulo de Pascal devo exibir:\nR= ");
    scanf("%d", &degraus);
    exibirTrianguloDePascal(degraus);

    return 0;
}
