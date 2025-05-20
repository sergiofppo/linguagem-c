void main(void)
{
	int vetor[4];
    int i;

    for(i = 0; i < 4; i++) 
	{
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Os valores digitados foram:\n");
    for(i = 0; i < 4; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
