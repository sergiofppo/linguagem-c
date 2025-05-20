void main (void)
{
int i, inicio, fim;

    printf("Digite o valor inicial da sequencia: ");
    scanf("%d", &inicio);

    printf("Digite o valor final da sequencia: ");
    scanf("%d", &fim);

    printf("Sequencia de numeros inteiros de %d a %d:\n", inicio, fim);

    if (inicio <= fim) 
	{
        for (i = inicio; i <= fim; i++) 
		{
            printf("%d ", i);
        }
    } else 
	{
        for (i = inicio; i >= fim; i--) 
		{
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
