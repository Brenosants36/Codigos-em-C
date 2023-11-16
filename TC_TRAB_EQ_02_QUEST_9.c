#include <stdio.h>

int main() {
    char nome[100];
    int matricula;
    float nota1, nota2, nota3;
    float media;
    float mediaTurma = 0;
    int totalAlunos = 0;

    while (1) {
        printf("Digite o nome do aluno (ou digite 'FIM' para encerrar): ");
        scanf("%s", nome);

        if (strcmp(nome, "FIM") == 0) {
            break;
        }

        printf("Digite a matricula do aluno: ");
        scanf("%d", &matricula);

        printf("Digite as notas do aluno (separadas por espacos): ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        media = (nota1 + nota2 + nota3) / 3.0;

        printf("Aluno: %s\nMatricula: %d\nMedia: %.2f\n", nome, matricula, media);

        if (media >= 7.0) {
            printf("Situacao: APROVADO\n\n");
        } else {
            printf("Situacao: REPROVADO\n\n");
        }

        mediaTurma += media;
        totalAlunos++;
    }

    if (totalAlunos > 0) {
        float mediaGlobal = mediaTurma / totalAlunos;
        printf("Media global da turma: %.2f\n", mediaGlobal);
    } else {
        printf("Nenhum aluno registrado.\n");
    }

    return 0;
}
