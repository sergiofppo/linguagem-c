void main(void)
{
	
	int produto;
	
	setlocale("Portuguese");
	
	printf("\n ESCOLHA UM C�DIGO (1 A 4): ");
	scanf("%d", &produto);
	
	switch(produto)
	{
		case 1:
			printf("\n 1. ALIMENTO N�O PEREC�VEL!");
	break;
			case 2: 
				printf("\n 2. ALIMENTO PEREC�VEL!");
	break;
				case 3:
					printf("\n 3. VESTU�RIO!");
	break;
					case 4: 
						printf("\n 4. LIMPEZA!");
	break;
		default:
			printf("\n INSIRA UM C�DIGO ENTRE 1 A 4!");
	}
}
