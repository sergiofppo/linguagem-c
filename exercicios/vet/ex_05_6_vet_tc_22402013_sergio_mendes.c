void main(void)
{
	int vetor1[10], vetor2[10], soma[10];
    int i;

    printf("Digite os valores do primeiro vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Vetor1[%d]: ", i);
        if (scanf("%d", &vetor1[i]) != 1) {
            printf("Erro ao ler o valor para o vetor1[%d]. Por favor, insira um n�mero v�lido.\n", i);
            return 1;  
        }
    }
    
    printf("Digite os valores do segundo vetor:\n");
    for(i = 0; i < 10; i++) {
        printf("Vetor2[%d]: ", i);
        if (scanf("%d", &vetor2[i]) != 1) {
            printf("Erro ao ler o valor para o vetor2[%d]. Por favor, insira um n�mero v�lido.\n", i);
            return 1; 
        }
    }

    for(i = 0; i < 10; i++) {
        soma[i] = vetor1[i] + vetor2[i];
    }

    printf("\nResultado da soma posicional:\n");
    for(i = 0; i < 10; i++) {
        printf("soma[%d] = %d\n", i, soma[i]);
    }

    return 0;
}
