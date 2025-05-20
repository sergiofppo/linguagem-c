void main(void)
{
	setlocale("Portuguese");
	
	int numero;
    int quantidade_numeros = 0;
    int soma = 0;

    printf("Digite os n�meros (use -1 para sair):\n");

    
    while (1) {
        scanf("%d", &numero);

        
        if (numero == -1)
            break;

        quantidade_numeros++; 
        soma += numero; 
    }

    
    printf("Quantidade de n�meros: %d\n", quantidade_numeros);
    printf("Soma dos valores digitados: %d\n", soma);

    return 0;
}
