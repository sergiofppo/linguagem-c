void main(void)
{
	int a[10], b[20], uniao[30];
    int i;

    printf("Digite os 10 elementos do vetor a:\n");
    for(i = 0; i < 10; i++) {
        printf("a[%d]: ", i);
        if (scanf("%d", &a[i]) != 1) { 
            printf("Erro ao ler o valor para o vetor a[%d]. Por favor, insira um n�mero v�lido.\n", i);
            return 1; 
        }
    }

    printf("Digite os 20 elementos do vetor b:\n");
    for(i = 0; i < 20; i++) {
        printf("b[%d]: ", i);
        if (scanf("%d", &b[i]) != 1) {
            printf("Erro ao ler o valor para o vetor b[%d]. Por favor, insira um n�mero v�lido.\n", i);
            return 1; 
        }
    }

    for(i = 0; i < 10; i++) {
        uniao[i] = a[i];
    }
    for(i = 0; i < 20; i++) {
        uniao[i + 10] = b[i];
    }

    printf("\nVetor uni�o:\n");
    for(i = 0; i < 30; i++) {
        printf("uniao[%d] = %d\n", i, uniao[i]);
    }

    return 0;
}
