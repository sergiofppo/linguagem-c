int main(void)
{
	setlocale("Portuguese");
	
	float nota;

	printf("\n DIGITE O VALOR DA NOTA (-1 caso o aluno n�o tenha feito): ");
	scanf("%f", &nota);
	
	if (nota==-1)
	{
		printf("\n SUA MEN��O �: SR!");
	}
	
	else if (nota>=0 && nota<2.4)
	{
		printf("\n SUA MEN��O �: II!");
	}
	
	else if (nota>=2.5 && nota<4.99)
	{
		printf("\n SUA MEN��O �: MI!");
	}
	
	else if (nota>=5 && nota<6.99)
	{
		printf("\n SUA MEN��O �: MM!");
	}
	
	else if (nota>=7 && nota<8.99)
	{
		printf("\n SUA MEN��O �: MS!");
	}
	else
	{
		printf("\n SUA MEN��O �: SS!");
	}
	
	return 0;
	}
