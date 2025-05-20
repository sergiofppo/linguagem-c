void main(void)
{
	int dia;
	
	setlocale("Portuguese");
		
	printf("\n 1. DOMINGO");
	printf("\n 2. SEGUNDA");
	printf("\n 3. TER�A");
	printf("\n 4. QUARTA");
	printf("\n 5. QUINTA");
	printf("\n 6. SEXTA");
	printf("\n 7. S�BADO");
	printf("\n ESCOLHA UM DIA DA SEMANA (1 a 7): ");
	scanf("%d", &dia);
	
	switch(dia)
	{
		case 2:
			case 3:
				case 4:
					case 5:
						case 6:
							printf("\n ESSE � UM DIA �TIL!");
	break;
		case 1:
			case 7:
				printf("\n ESSE � UM FINAL DE SEMANA!");
		break;
		
		default:
		printf("\n DIA INV�LIDO!");
		
	}
	
}
