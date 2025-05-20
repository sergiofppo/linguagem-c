void main (void)
{
int n, i;
    float H = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("O valor de n deve ser maior ou igual a 1.\n");
        return 1;
    }

    for ( i = 1; i <= n; i++) {
        H += 1.0 / i;
    }

    printf("O valor de H para n = %d �: %.2f\n", n, H);

    return 0;
}
