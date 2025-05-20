void main (void)
{
	int soma = 0, i;
	
    printf("N�meros divis�veis por 3 entre 30 e 5 (em ordem decrescente):\n");
    
    for (i = 30; i >= 5; i--) 
	{
        if (i % 3 == 0) 
		{
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nA soma dos n�meros �: %d\n", soma);
    return 0;
}
