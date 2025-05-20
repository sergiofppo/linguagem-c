void main(void)
{
	int num_alunos = 10;
    float notas[10];
    float soma = 0.0;
    float media;
    int i;


    for(i = 0; i < num_alunos; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        if (scanf("%f", &notas[i]) != 1) {
            printf("Erro ao ler a nota do aluno %d. Por favor, insira um n�mero v�lido.\n", i + 1);
            return 1;
        }
        soma += notas[i];
    }

    media = soma / num_alunos;

    printf("\nRelat�rio de Notas\n");
    printf("------------------\n");
    for(i = 0; i < num_alunos; i++) {
        printf("Aluno %d: Nota = %.2f\n", i + 1, notas[i]);
    }
    printf("------------------\n");
    printf("M�dia da turma: %.2f\n", media);

    return 0;
}
