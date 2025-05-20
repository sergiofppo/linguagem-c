void main(void)
{
	int i;
	int vetor[4];

    for(i = 0; i < 4; i++) 
	{
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Os valores digitados na ordem inversa s�o:\n");
    for(i = 3; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}

