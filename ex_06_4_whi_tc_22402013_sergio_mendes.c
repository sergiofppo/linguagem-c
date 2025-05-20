void main(void)
{
	setlocale("Portuguese");
	
	int numero;
    int soma = 0;

    printf("Digite os n�meros (digite um n�mero negativo para sair):\n");

   
    do {
        scanf("%d", &numero);

        
        if (numero >= 0)
            soma += numero; 

    } while (numero >= 0); 

  
    printf("A soma dos valores positivos �: %d\n", soma);

    return 0;
}
