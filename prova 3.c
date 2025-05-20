void main(void)
{
	setlocale("Portuguese");
	
	int nmr, i;
	
	printf("\n DIGITE UM N�MERO: ");
	scanf("%d", &nmr);
	
	
	printf("\n T�BUADA DE %d", nmr);
	for(i=1; i<=10; i++)
	{
		printf("\n %d x %d = %d", i, nmr, i*nmr);
	}
	
	return 0;
	
	}
	
	
