#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
    float nota;
} DadosAluno;

int main() {
    DadosAluno FICHAALU[10];
    int cont, indice, buscaID, i;

    indice = 0;
    printf("Digite o ID do aluno ou 0 para sair:\n");
    scanf("%d", &cont);

    while (cont != 0) {
        FICHAALU[indice].id = cont;

        printf("Digite o nome do aluno:\n");
        scanf(" %[^\n]", FICHAALU[indice].nome);

        printf("Digite a nota:\n");
        scanf("%f", &FICHAALU[indice].nota);

        indice++;

        printf("Digite o numero ID do proximo aluno ou 0 para finalizar:\n");
        scanf("%d", &cont);
    }

    printf("Digite o ID que voce deseja verificar ou 0 para sair:\n");
    scanf("%d", &buscaID);

    for (i = 0; i < indice; i++) {
        if (FICHAALU[i].id == buscaID) {
            printf("Nome: %s\n", FICHAALU[i].nome);
            printf("Nota: %.2f\n", FICHAALU[i].nota);
            printf("ID aluno: %d\n", FICHAALU[i].id);
        }
    }

    return 0;
}
