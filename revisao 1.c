void main(void)
{
	setlocale("Portuguese");
	
	int x, i, resultado;
	
	printf("DIGITE UM N�MERO: ");
	scanf("%d", &x);
	printf("\n\n\n");
	
	printf("========================================\n");
	printf("RESULTADOS DO N�MERO %d ELEVADO AT� O 10\n", x);
	printf("========================================\n\n\n");
	
	for(i=0; i<=10; i++)
	{
		resultado=pow(x, i);
		printf("%d elevado a %d = %d\n", x, i, resultado);
	}
	
	return 0;
}
