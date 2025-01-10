/*
    Instituto Federal do Maranhão - Campi Monte Castelo
    Curso: Sistema de Informações - Cidade: São Luís/MA/Brasil
    Aluno: Saulo Ferro Maciel

    Programa para calcular e imprimir as fórmulas das potências do binômio (x + y)^n.
*/

#include <stdio.h>
#include <locale.h>

// Função para calcular o fatorial de um número
int fatorial(int num) {
    int resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

// Função para calcular o coeficiente binomial (nCr)
int coeficienteBinomial(int n, int r) {
    return fatorial(n) / (fatorial(r) * fatorial(n - r));
}

// Função para imprimir a fórmula do binômio (x + y)^n
void imprimirFormula(int n) {
    printf("(x + y)^%d = ", n);

    for (int i = 0; i <= n; i++) {
        int coeficiente = coeficienteBinomial(n, i);

        if (coeficiente > 1) {
            printf("%d", coeficiente); // Exibe o coeficiente se for maior que 1
        }

        // Exibe a parte do termo com potências de x e y
        if (n - i > 0) {
            printf("(x^%d)", n - i);
        }
        if (i > 0) {
            printf("(y^%d)", i);
        }

        // Adiciona o operador "+" entre os termos, exceto no último
        if (i < n) {
            printf(" + ");
        }
    }

    printf("\n");
}

// Função principal
int main() {
    setlocale(LC_ALL, "Portuguese");
    int n;

    printf("\nxxxxxxxxxxx Fórmulas do Binômio xxxxxxxxxxx\n\n");
    printf("Digite a quantidade de linhas (valor de n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor inválido! n deve ser maior ou igual a 0.\n");
        return 1;
    }

    // Imprime as fórmulas do binômio para cada potência de 0 até n
    for (int i = 0; i <= n; i++) {
        imprimirFormula(i);
    }

    return 0;
}
