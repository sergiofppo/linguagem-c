void main (void)
{
 unsigned long int numero, original, soma = 0;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%lu", &numero);

    original = numero;

    while (numero != 0) {
        soma += numero % 10;
        numero /= 10;
    }

    printf("O numero digitado: %lu\n", original);
    printf("A soma dos algarismos: %lu\n", soma);

    return 0;
}
