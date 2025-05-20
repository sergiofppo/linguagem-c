int main() {
    float num1, num2, num3, media;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A media aritmetica dos numeros %.2f, %.2f e %.2f eh: %.2f\n", num1, num2, num3, media);
    scanf("%.2f", &media);

    return 0;
}
