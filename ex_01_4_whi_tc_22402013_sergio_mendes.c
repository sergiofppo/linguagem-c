void main(void) 
{
	setlocale("Portuguese");
	
    int N, i = 0;
    float numero, soma = 0.0, media;

    printf("Digite a quantidade de n�meros a serem inseridos: ");
    scanf("%d", &N);

    
    if (N <= 0) {
        printf("N deve ser um n�mero positivo.\n");
        return 1; // Retorna 1 indicando erro
    }

    
    while (i < N) {
        printf("Digite o n�mero %d: ", i + 1);
        scanf("%f", &numero);
        soma += numero;
        i++;
    }

   
    media = soma / N;

    printf("A m�dia dos %d n�meros �: %.2f\n", N, media);

    return 0;
}

