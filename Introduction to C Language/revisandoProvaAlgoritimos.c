#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LINE 256 // Tamanho máximo de uma linha

// Protótipo da função search_File
FILE* search_File(void);

// Função para contar o número de linhas no arquivo
int count_lines(FILE *file) {
    fseek(file, 0, SEEK_SET); // Volta ao início do arquivo
    int lines = 0;
    char buffer[MAX_LINE];
    while (fgets(buffer, MAX_LINE, file)) {
        lines++;
    }
    fseek(file, 0, SEEK_SET); // Volta ao início para uso posterior
    return lines;
}

// Função para editar ou excluir linhas
void edit_File() {
    FILE *file = search_File();
    FILE *temp = fopen("temp.txt", "w");

    if (file == NULL) {
        printf("ERRO in to open the file\n");
        if (temp) fclose(temp);
        return;
    }
    if (temp == NULL) {
        printf("Erro to create a temp file!\n");
        fclose(file);
        return;
    }

    char choice;
    printf("Do you want edit or remove line? [e/r]\nYour answer: ");
    scanf(" %c", &choice); // Lê um único caractere

    char buffer[MAX_LINE];
    int line_number = 1;
    int target_line;
    char new_text[MAX_LINE];
    int total_lines = count_lines(file);

    if (choice == 'e') {
        // Editar uma linha
        if (total_lines == 0) {
            printf("The file is empty! There are no lines to edit.\n");
            fclose(file);
            fclose(temp);
            remove("temp.txt");
            return;
        }
        printf("Digite o número da linha a editar (1 a %d): ", total_lines);
        scanf("%d", &target_line);
        getchar(); // Limpa o '\n' do buffer
        if (target_line < 1 || target_line > total_lines) {
            printf("Row invalid!\n");
            fclose(file);
            fclose(temp);
            remove("temp.txt");
            return;
        }
        printf("Digite the new text for to line: ");
        fgets(new_text, MAX_LINE, stdin);
        new_text[strcspn(new_text, "\n")] = 0; // Remove o '\n'

        // Copia o arquivo, substituindo a linha desejada
        while (fgets(buffer, MAX_LINE, file)) {
            if (line_number == target_line) {
                fprintf(temp, "%s\n", new_text); // Escreve o novo texto
            } else {
                fputs(buffer, temp); // Copia a linha original
            }
            line_number++;
        }
        printf("Row edited with successfuly!\n");
    } else if (choice == 'r') {
        // Excluir uma linha
        if (total_lines == 0) {
            printf("O arquivo está vazio! Não há linhas para excluir.\n");
            fclose(file);
            fclose(temp);
            remove("temp.txt");
            return;
        }
        printf("Enter the number of the line to delete (1 to %d): ", total_lines);
        scanf("%d", &target_line);
        getchar();
        if (target_line < 1 || target_line > total_lines) {
            printf("Row deleted successfully!\n");
            fclose(file);
            fclose(temp);
            remove("temp.txt");
            return;
        }

        // Copia o arquivo, ignorando a linha a ser excluída
        while (fgets(buffer, MAX_LINE, file)) {
            if (line_number != target_line) {
                fputs(buffer, temp); // Copia apenas as linhas não excluídas
            }
            line_number++;
        }
        printf("Row deleted successfully!\n");
    } else {
        printf("Invalid option\n");
        fclose(file);
        fclose(temp);
        remove("temp.txt");
        return;
    }

    // Fecha os arquivos
    fclose(file);
    fclose(temp);

    // Substitui o arquivo original pelo temporário
    char filename[MAX_LINE];
    printf("Confirme o nome do arquivo original (com extensão): ");
    scanf("%s", filename);
    remove(filename);
    rename("temp.txt", filename);
}

// Função para criar um novo arquivo
void create_Files() {
    FILE *file;
    char name_File[1000];

    printf("A name for the file: ");
    scanf("%s", name_File);
    file = fopen(name_File, "w");

    if (file == NULL) {
        printf("Erro in create the file\n");
        return;
    }
    fclose(file);

    char choice;
    printf("Do you want edit this file created? [y/n]\nYour answer: ");
    scanf(" %c", &choice);
    if (choice == 'y') {
        edit_File();
    }
}

// Função para buscar um arquivo
FILE* search_File() {
    FILE *file;
    char name_File[1000];

    printf("What's name of the file?\nPlease, don't forget the name + extension.\nYour answer: ");
    scanf("%s", name_File);
    file = fopen(name_File, "r");

    return file;
}

// Função para ler um arquivo
void read_Files() {
    FILE *file;
    char lines[1000];

    char name_File[1000];
    printf("What's name of the file?\nPlease, don't forget the name + extension:\n");
    scanf("%s", name_File);
    file = fopen(name_File, "r");

    if (file == NULL) {
        printf("ERRO to open the file\n");
        return;
    }

    while (fgets(lines, sizeof(lines), file)) {
        printf("%s", lines);
    }

    fclose(file);
}

int main() {
    int stop = 0;
    int choice = 0;

    while (stop != 1) {
        printf("What do you want to do?\n\n1-Read a file\n2-Create a new file\n3-Edit a file\n4-Exit\n\nYour answer: ");
        scanf("%d", &choice);
        if (choice == 1) {
            read_Files();
        }
        if (choice == 2) {
            create_Files();
        }
        if (choice == 3) {
            edit_File();
        }
        if (choice == 4) {
            stop = 1;
        }
    }
    return 0;
}