void main(void)
{
	int nmr;
	
	setlocale("Portuguese");
	
	printf("\n 1. CHECK-IN");
	printf("\n 2. SERVI�O DE QUARTO");
	printf("\n 3. FAZER UM PEDIDO");
	printf("\n ESCOLHA UM SERVI�O: ");
	scanf("%d", &nmr);
	
	switch(nmr)
	{
		case 1:
			printf("\n VOC� SER� DIRECIONADO PARA O CHECK-IN!");
	break;
			
			case 2:
			printf("\n VOC� SER� DIRECIONADO PARA O SERVI�O DE QUARTO!");
	break;
			
				case 3:
			printf("\n VOC� SER� DIRECIONADO PARA FAZER UM PEDIDO!");
	break;
	}
}
