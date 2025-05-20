void main(void)
{
	setlocale("Portuguese");
	
	int x, i, mult;
	
	printf("ESCOLHA UM N�MERO: ");
	scanf("%d", &x);
	printf("\n\n");
	
	printf("============================\n");
	printf("TABUADA DO N�MERO %d:\n", x);
	printf("============================\n");
	
	for(i=0; i<=10; i++)
	{
		mult=x*i;
		printf("\n");
		printf("%d x %d = %d", x, i, mult);
	}
	
	return 0;
}
