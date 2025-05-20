
#define NUM_ALUNOS 4

void main(void) 
{
	setlocale("Portuguese");
	
	int i = 0;
    float notas[NUM_ALUNOS];
    float soma = 0.0;
    float media;


    while (i < NUM_ALUNOS) {
        printf("Digite a nota do aluno n�mero %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
        i++; //
    }

 
    media = soma / NUM_ALUNOS;

    
    printf("M�dia da turma = %.2f\n", media);

    return 0;
}
