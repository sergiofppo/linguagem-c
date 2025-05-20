
void main(void)
{
	setlocale("Portuguese");
	
	float a1, a2, a3, a4, media;
	
		printf("====================================\n");
		printf("\nDIGITE -1 PARA ENCERAR O PROGRAMA!");
		printf("\n\n====================================\n");
		
	while(1) 
	{
        printf("Digite a nota da prova 1: ");
        scanf("%f", &a1);
        if (a1 == -1) break;
        
        printf("Digite a nota da prova 2: ");
        scanf("%f", &a2);
        if (a2 == -1) break;

        printf("Digite a nota der prova 3: ");
        scanf("%f", &a3);
        if (a3 == -1) break;

        printf("Digite a nota der prova 4: ");
        scanf("%f", &a4);
        if (a4 == -1) break;

        media = (a1 + a2 + a3 + a4) / 4;
        printf("A m�dia das notas �: %.2f\n", media);
    }
    
    printf("Programa encerrado.\n");
    return 0;
}
