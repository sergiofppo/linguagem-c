void main(void)
{
	setlocale("Portuguese");
	
	int soma, i;
	
	printf("Opera��o: \n");
    for(i = 1; i <= 100; i++) {
        printf("%d ", i);
        if (i < 100) {
            printf("+ ");
        } else {
            printf("= ");
        }
        soma += i;
        printf("%d\n", soma);
    }
    
    printf("\nO somat�rio de 1 a 100 �: %d\n", soma);
    
    return 0;
}

	
