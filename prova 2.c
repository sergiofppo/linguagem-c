void main (void)
{
	setlocale("Portuguese");
	
	int a, b, c;
	
	printf("\n DIGITE O VALOR DE 'a': ");
	scanf("%d", &a);
	
	printf("\n DIGITE O VALOR DE 'b': ");
	scanf("%d", &b);
	
	printf("\n DIGITE O VALOR DE 'c': ");
	scanf("%d", &c);
	
	if(a==b && a==c && b==c)
	{
		printf("\n O TRI�NGULO � EQUIL�TERO!");
	}
	
	else if(a==b  || a==c || b==c)
	{
		printf("\n O TRI�NGULO � IS�SCELES!");
	}
	
	else
	{
		printf("\n O TRI�NGULO � ESCALENO!");
	}
	
	return 0;
}
