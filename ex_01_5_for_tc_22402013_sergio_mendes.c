void main (void)
{
	int N, i;
    float numero, soma = 0;

    printf("Digite a quantidade de n�meros que deseja calcular a m�dia: ");
    scanf("%d", &N);

    printf("Digite os %d n�meros:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%f", &numero);
        soma += numero;
    }

    float media = soma / N;
    printf("A m�dia dos %d n�meros �: %.2f\n", N, media);

    return 0;
}
