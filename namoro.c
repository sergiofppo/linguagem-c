void main(void)
{
	setlocale("Portuguese");
	
	char escolha;
	
	printf("g. CASAR COM A GIULIA!\n");
	printf("i. CASAR COM A ISABELLA!\n");
	printf("m. CASAR COM A MARIANA!\n");
	printf("d. CASAR COM A AGATHA!\n");
	
	printf("\n\nDIGITE UMA DAS OP��ES ACIMA: ");
	scanf("%c", &escolha);
	
	switch(escolha)
	{
		case 'g':
			printf("\n\n VOC� ESCOLHEU CASAR COM A GUIIIIIIIIIIIIIILIA!");
	break;
	
	default:
		printf("\n\nPOOOOOOV: VOC� S� PODE CASAR COM A GIULIA TAAAAAR?????!");
	break;
	}
	
	return 0;
}

	
	
