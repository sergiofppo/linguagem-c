void main(void)
{
	setlocale("Portuguese");
	
	int i, soma = 0, resultado;
	
	printf("\n SOMA DE 1 A 100");
	
	for(i = 1; i <= 100; i++)
	{
		soma += i;
		resultado = soma+i;
		printf("\n %d + %d = %d", i, soma, resultado);
	}
	printf("\nResultado final: %d\n", resultado);
	return 0;
}
