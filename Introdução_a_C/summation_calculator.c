/*
    Instituto Federal do Maranhão - Campi Monte Castelo
    Curso: Sistema de Informações - Cidade: São Luís/MA/Brasil
    Aluno: Saulo Ferro Maciel

    Calculadora de somatório: ∑x^i para i variando de 1 a n, com passo variável.
*/

#include <stdio.h>
#include <locale.h>

// Função para calcular o somatório ∑x^i com passo variável
void somatorio(int x, int n, int passo) {
    int soma = 0; // Inicializa a soma

    // Calcula o somatório ∑x^i com passo
    for (int i = 1; i <= n; i += passo) {
        int termo = 1;

        // Calcula x^i manualmente
        for (int k = 0; k < i; k++) {
            termo *= x; // Multiplica x por ele mesmo i vezes
        }

        soma += termo; // Soma o termo ao resultado
        printf("Termo %d: %d\n", i, termo); // Exibe cada termo
    }

    // Exibe o resultado final
    printf("\nO resultado do somatório ∑x^i é: %d\n", soma);
}

// Função principal
int main() {
    setlocale(LC_ALL, "Portuguese");
    int x, n, passo;

    printf("\nxxxxxxxxxxx Calculadora de Somatório xxxxxxxxxxx\n\n");
    printf("Digite o valor base (x): ");
    scanf("%d", &x);

    printf("Digite o número de termos (n): ");
    scanf("%d", &n);

    printf("Digite o passo da variação (exemplo: 1, 2, 3): ");
    scanf("%d", &passo);

    // Verifica se o passo é válido
    if (passo <= 0) {
        printf("Passo inválido! Deve ser maior que zero.\n");
        return 1;
    }

    somatorio(x, n, passo); // Chama a função somatório

    return 0;
}
